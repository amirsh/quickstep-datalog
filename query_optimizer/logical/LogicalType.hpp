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

#ifndef QUICKSTEP_QUERY_OPTIMIZER_LOGICAL_LOGICAL_TYPE_HPP_
#define QUICKSTEP_QUERY_OPTIMIZER_LOGICAL_LOGICAL_TYPE_HPP_

namespace quickstep {
namespace optimizer {
namespace logical {

/** \addtogroup OptimizerExpressions
 *  @{
 */

/**
 * @brief Optimizer logical node types.
 **/
enum class LogicalType {
  kAggregate = 0,
  kCopyFrom,
  kCopyTo,
  kCreateIndex,
  kCreateTable,
  kDeleteTuples,
  kDropTable,
  kFilter,
  kHashJoin,
  kInsertSelection,
  kInsertTuple,
  kMultiwayCartesianJoin,
  kNestedLoopsJoin,
  kProject,
  kSameGeneration,
  kSample,
  kSetOperation,
  kSharedSubplanReference,
  kSort,
  kTableGenerator,
  kTableReference,
  kTopLevelPlan,
  kTransitiveClosure,
  kUpdateTable,
  kWindowAggregate
};

/** @} */

}  // namespace logical
}  // namespace optimizer
}  // namespace quickstep

#endif /* QUICKSTEP_QUERY_OPTIMIZER_LOGICAL_LOGICAL_TYPE_HPP_ */
