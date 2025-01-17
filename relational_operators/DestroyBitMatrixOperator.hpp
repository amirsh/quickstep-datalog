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

#ifndef QUICKSTEP_RELATIONAL_OPERATORS_DESTROY_BIT_MATRIX_OPERATOR_HPP_
#define QUICKSTEP_RELATIONAL_OPERATORS_DESTROY_BIT_MATRIX_OPERATOR_HPP_

#include <string>

#include "catalog/CatalogTypedefs.hpp"
#include "query_execution/QueryContext.hpp"
#include "relational_operators/RelationalOperator.hpp"
#include "relational_operators/WorkOrder.hpp"
#include "utility/Macros.hpp"

#include "glog/logging.h"

#include "tmb/id_typedefs.h"

namespace tmb { class MessageBus; }

namespace quickstep {

class StorageManager;
class WorkOrderProtosContainer;
class WorkOrdersContainer;

/** \addtogroup RelationalOperators
 *  @{
 */

/**
 * @brief An operator which destroys a bit matrix.
 **/
class DestroyBitMatrixOperator : public RelationalOperator {
 public:
  /**
   * @brief Constructor.
   *
   * @param query_id The ID of the query to which this operator belongs.
   * @param bit_matrix_index The index of the BitMatrix in QueryContext.
   **/
  DestroyBitMatrixOperator(const std::size_t query_id,
                           const QueryContext::bit_matrix_id bit_matrix_index)
      : RelationalOperator(query_id),
        bit_matrix_index_(bit_matrix_index),
        work_generated_(false) {}

  ~DestroyBitMatrixOperator() override {}

  OperatorType getOperatorType() const override {
    return kDestroyBitMatrix;
  }

  std::string getName() const override {
    return "DestroyBitMatrixOperator";
  }

  bool getAllWorkOrders(WorkOrdersContainer *container,
                        QueryContext *query_context,
                        StorageManager *storage_manager,
                        const tmb::client_id scheduler_client_id,
                        tmb::MessageBus *bus) override;

  bool getAllWorkOrderProtos(WorkOrderProtosContainer *container) override;

 private:
  const QueryContext::bit_matrix_id bit_matrix_index_;
  bool work_generated_;

  DISALLOW_COPY_AND_ASSIGN(DestroyBitMatrixOperator);
};

/**
 * @brief A WorkOrder produced by DestroyBitMatrixOperator.
 **/
class DestroyBitMatrixWorkOrder : public WorkOrder {
 public:
  /**
   * @brief Constructor.
   *
   * @param query_id The ID of the query to which this WorkOrder belongs.
   * @param bit_matrix_index The index of the BitMatrix in QueryContext.
   * @param query_context The QueryContext to use.
   **/
  DestroyBitMatrixWorkOrder(const std::size_t query_id,
                            const QueryContext::bit_matrix_id bit_matrix_index,
                            QueryContext *query_context)
      : WorkOrder(query_id),
        bit_matrix_index_(bit_matrix_index),
        query_context_(DCHECK_NOTNULL(query_context)) {}

  ~DestroyBitMatrixWorkOrder() override {}

  void execute() override;

 private:
  const QueryContext::bit_matrix_id bit_matrix_index_;
  QueryContext *query_context_;

  DISALLOW_COPY_AND_ASSIGN(DestroyBitMatrixWorkOrder);
};

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_RELATIONAL_OPERATORS_DESTROY_BIT_MATRIX_OPERATOR_HPP_
