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

#ifndef QUICKSTEP_PARSER_PARSE_TRANSITIVE_CLOSURE_TABLE_REFERENCE_HPP_
#define QUICKSTEP_PARSER_PARSE_TRANSITIVE_CLOSURE_TABLE_REFERENCE_HPP_

#include <memory>
#include <string>
#include <vector>

#include "parser/ParseTableReference.hpp"
#include "utility/Macros.hpp"

namespace quickstep {

class ParseTreeNode;

/** \addtogroup Parser
 *  @{
 */

class ParseTransitiveClosureTableReference : public ParseTableReference {
 public:
  ParseTransitiveClosureTableReference(const int line_number,
                            const int column_number,
                            ParseTableReference *start_table,
                            ParseTableReference *edge_table)
    : ParseTableReference(line_number, column_number),
      start_table_(start_table),
      edge_table_(edge_table) {
  }

  TableReferenceType getTableReferenceType() const override {
    return kTransitiveClosureTableReference;
  }

  std::string getName() const override { return "TransitiveClosure"; }

  const ParseTableReference* start_table() const {
    return start_table_.get();
  }

  const ParseTableReference* edge_table() const {
    return edge_table_.get();
  }

 protected:
  void getFieldStringItems(
      std::vector<std::string> *inline_field_names,
      std::vector<std::string> *inline_field_values,
      std::vector<std::string> *non_container_child_field_names,
      std::vector<const ParseTreeNode*> *non_container_child_fields,
      std::vector<std::string> *container_child_field_names,
      std::vector<std::vector<const ParseTreeNode*>> *container_child_fields) const override;

 private:
  std::unique_ptr<ParseTableReference> start_table_;
  std::unique_ptr<ParseTableReference> edge_table_;

  DISALLOW_COPY_AND_ASSIGN(ParseTransitiveClosureTableReference);
};

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_PARSER_PARSE_TRANSITIVE_CLOSURE_TABLE_REFERENCE_HPP_
