/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 **/

#ifndef QUICKSTEP_RELATIONAL_OPERATORS_FINALIZE_AGGREGATION_OPERATOR_HPP_
#define QUICKSTEP_RELATIONAL_OPERATORS_FINALIZE_AGGREGATION_OPERATOR_HPP_

#include <cstddef>
#include <string>

#include "catalog/CatalogRelation.hpp"
#include "catalog/CatalogTypedefs.hpp"
#include "query_execution/QueryContext.hpp"
#include "relational_operators/RelationalOperator.hpp"
#include "relational_operators/WorkOrder.hpp"
#include "storage/AggregationOperationState.hpp"
#include "utility/Macros.hpp"

#include "glog/logging.h"

#include "tmb/id_typedefs.h"

namespace tmb { class MessageBus; }

namespace quickstep {

class InsertDestination;
class StorageManager;
class WorkOrderProtosContainer;
class WorkOrdersContainer;

/** \addtogroup RelationalOperators
 *  @{
 */

/**
 * @brief An operator which finalizes aggregation and writes output tuples.
 */
class FinalizeAggregationOperator : public RelationalOperator {
 public:
  /**
   * @brief Constructor for finalizing aggregation state and writing output
   * tuples.  The actual aggregation is computed by the AggregationOperator.
   *
   * @param query_id The ID of the query to which this operator belongs.
   * @param aggr_state_index The index of the AggregationState in QueryContext.
   * @param num_partitions The number of partitions of 'input_relation' in a
   *        partitioned aggregation. If no partitions, it is one.
   * @param has_repartition Whether this operator does repartition.
   * @param output_relation The output relation.
   * @param output_destination_index The index of the InsertDestination in the
   *        QueryContext to insert aggregation results.
   */
  FinalizeAggregationOperator(
      const std::size_t query_id,
      const QueryContext::aggregation_state_id aggr_state_index,
      const std::size_t num_partitions,
      const bool has_repartition,
      const CatalogRelation &output_relation,
      const QueryContext::insert_destination_id output_destination_index)
      : RelationalOperator(query_id, num_partitions, has_repartition, output_relation.getNumPartitions()),
        aggr_state_index_(aggr_state_index),
        output_relation_(output_relation),
        output_destination_index_(output_destination_index),
        started_(false) {
    DCHECK(has_repartition || num_partitions == output_num_partitions_);
  }

  ~FinalizeAggregationOperator() override {}

  OperatorType getOperatorType() const override {
    return kFinalizeAggregation;
  }

  std::string getName() const override {
    return "FinalizeAggregationOperator";
  }

  bool getAllWorkOrders(WorkOrdersContainer *container,
                        QueryContext *query_context,
                        StorageManager *storage_manager,
                        const tmb::client_id scheduler_client_id,
                        tmb::MessageBus *bus) override;

  bool getAllWorkOrderProtos(WorkOrderProtosContainer *container) override;

  QueryContext::insert_destination_id getInsertDestinationID() const override {
    return output_destination_index_;
  }

  const relation_id getOutputRelationID() const override {
    return output_relation_.getID();
  }

 private:
  const QueryContext::aggregation_state_id aggr_state_index_;
  const CatalogRelation &output_relation_;
  const QueryContext::insert_destination_id output_destination_index_;
  bool started_;

  DISALLOW_COPY_AND_ASSIGN(FinalizeAggregationOperator);
};

/**
 * @brief A WorkOrder produced by FinalizeAggregationOperator.
 **/
class FinalizeAggregationWorkOrder : public WorkOrder {
 public:
  /**
   * @brief Constructor.
   *
   * @note InsertWorkOrder takes ownership of \c state.
   *
   * @param query_id The ID of the query to which this operator belongs.
   * @param part_id The partition ID used by 'output_destination'.
   * @param state_partition_id The partition ID for which the Finalize
   *        aggregation work order is issued.
   * @param state The AggregationState to use.
   * @param output_destination The InsertDestination to insert aggregation
   *        results.
   */
  FinalizeAggregationWorkOrder(const std::size_t query_id,
                               const std::size_t part_id,
                               const std::size_t state_partition_id,
                               AggregationOperationState *state,
                               InsertDestination *output_destination)
      : WorkOrder(query_id, part_id),
        state_partition_id_(state_partition_id),
        state_(DCHECK_NOTNULL(state)),
        output_destination_(DCHECK_NOTNULL(output_destination)) {}

  ~FinalizeAggregationWorkOrder() override {}

  void execute() override;

 private:
  const std::size_t state_partition_id_;
  AggregationOperationState *state_;
  InsertDestination *output_destination_;

  DISALLOW_COPY_AND_ASSIGN(FinalizeAggregationWorkOrder);
};

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_RELATIONAL_OPERATORS_FINALIZE_AGGREGATION_OPERATOR_HPP_
