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

#ifndef QUERY_OPTIMIZER_COST_MODEL_SIMPLE_COST_MODEL_HPP_
#define QUERY_OPTIMIZER_COST_MODEL_SIMPLE_COST_MODEL_HPP_

#include <cstddef>
#include <vector>

#include "query_optimizer/cost_model/CostModel.hpp"
#include "query_optimizer/physical/Aggregate.hpp"
#include "query_optimizer/physical/CrossReferenceCoalesceAggregate.hpp"
#include "query_optimizer/physical/NestedLoopsJoin.hpp"
#include "query_optimizer/physical/FilterJoin.hpp"
#include "query_optimizer/physical/HashJoin.hpp"
#include "query_optimizer/physical/Physical.hpp"
#include "query_optimizer/physical/Selection.hpp"
#include "query_optimizer/physical/Sort.hpp"
#include "query_optimizer/physical/TableGenerator.hpp"
#include "query_optimizer/physical/TableReference.hpp"
#include "query_optimizer/physical/TopLevelPlan.hpp"
#include "query_optimizer/physical/TransitiveClosure.hpp"
#include "query_optimizer/physical/UnionAll.hpp"
#include "query_optimizer/physical/WindowAggregate.hpp"
#include "utility/Macros.hpp"

namespace quickstep {
namespace optimizer {
namespace cost {

/** \addtogroup CostModel
 *  @{
 */

/**
 * @brief A simple cost model.
 */
class SimpleCostModel : public CostModel {
 public:
  /**
   * @brief Constructor.
   */
  explicit SimpleCostModel(const std::vector<physical::PhysicalPtr> &shared_subplans)
      : shared_subplans_(shared_subplans) {}

  std::size_t estimateCardinality(
      const physical::PhysicalPtr &physical_plan) override;

 private:
  // Returns the estimated cardinality of the input plan.
  std::size_t estimateCardinalityForTopLevelPlan(
      const physical::TopLevelPlanPtr &physical_plan);

  // Returns the estimated cardinality of the relation.
  std::size_t estimateCardinalityForTableReference(
      const physical::TableReferencePtr &physical_plan);

  // Returns the estimated cardinality of the input plan.
  std::size_t estimateCardinalityForSelection(
      const physical::SelectionPtr &physical_plan);

  // Returns the estimated cardinality of the input plan.
  std::size_t estimateCardinalityForTableGenerator(
      const physical::TableGeneratorPtr &physical_plan);

  // Returns the estimated cardinality as K if there is a LIMIT K clause,
  // otherwise returns the estimated cardinality of the input plan.
  std::size_t estimateCardinalityForSort(
      const physical::SortPtr &physical_plan);

  // Returns the left child's cardinality
  std::size_t estimateCardinalityForFilterJoin(
      const physical::FilterJoinPtr &physical_plan);

  // Returns the larger value of the estimated cardinalities of two
  // input plans.
  std::size_t estimateCardinalityForHashJoin(
      const physical::HashJoinPtr &physical_plan);

  // Returns the larger value of the estimated cardinalities of two
  // input plans.
  std::size_t estimateCardinalityForNestedLoopsJoin(
      const physical::NestedLoopsJoinPtr &physical_plan);

  // Returns 1 for a scalar aggregation; otherwise, returns the estimated
  // cardinality of the input plan divided by 10.
  std::size_t estimateCardinalityForAggregate(
      const physical::AggregatePtr &physical_plan);

  // Returns the cardinality of the left child plan.
  std::size_t estimateCardinalityForCrossReferenceCoalesceAggregate(
      const physical::CrossReferenceCoalesceAggregatePtr &physical_plan);

  // Return the estimated cardinality of the input plan.
  std::size_t estimateCardinalityForWindowAggregate(
      const physical::WindowAggregatePtr &physical_plan);

  // Return the estimated cardinality of union all operation,
  // which is the sum of the cardinality of all children operators.
  std::size_t estimateCardinalityForUnionAll(
      const physical::UnionAllPtr &physical_plan);

  std::size_t estimateCardinalityForTransitiveClosure(
      const physical::TransitiveClosurePtr &physical_plan);

  const std::vector<physical::PhysicalPtr> &shared_subplans_;

  DISALLOW_COPY_AND_ASSIGN(SimpleCostModel);
};

/** @} */

}  // namespace cost
}  // namespace optimizer
}  // namespace quickstep

#endif /* QUERY_OPTIMIZER_COST_MODEL_SIMPLE_COST_MODEL_HPP_ */
