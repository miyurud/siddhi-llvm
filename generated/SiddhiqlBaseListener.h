/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
	//import org.wso2.siddhi.query.compiler.exception.SiddhiParserException;


// Generated from Siddhiql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SiddhiqlListener.h"


/**
 * This class provides an empty implementation of SiddhiqlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SiddhiqlBaseListener : public SiddhiqlListener {
public:

  virtual void enterParse(SiddhiqlParser::ParseContext * /*ctx*/) override { }
  virtual void exitParse(SiddhiqlParser::ParseContext * /*ctx*/) override { }

  virtual void enterError(SiddhiqlParser::ErrorContext * /*ctx*/) override { }
  virtual void exitError(SiddhiqlParser::ErrorContext * /*ctx*/) override { }

  virtual void enterSiddhi_app(SiddhiqlParser::Siddhi_appContext * /*ctx*/) override { }
  virtual void exitSiddhi_app(SiddhiqlParser::Siddhi_appContext * /*ctx*/) override { }

  virtual void enterExecution_element(SiddhiqlParser::Execution_elementContext * /*ctx*/) override { }
  virtual void exitExecution_element(SiddhiqlParser::Execution_elementContext * /*ctx*/) override { }

  virtual void enterDefinition_stream_final(SiddhiqlParser::Definition_stream_finalContext * /*ctx*/) override { }
  virtual void exitDefinition_stream_final(SiddhiqlParser::Definition_stream_finalContext * /*ctx*/) override { }

  virtual void enterDefinition_stream(SiddhiqlParser::Definition_streamContext * /*ctx*/) override { }
  virtual void exitDefinition_stream(SiddhiqlParser::Definition_streamContext * /*ctx*/) override { }

  virtual void enterDefinition_table_final(SiddhiqlParser::Definition_table_finalContext * /*ctx*/) override { }
  virtual void exitDefinition_table_final(SiddhiqlParser::Definition_table_finalContext * /*ctx*/) override { }

  virtual void enterDefinition_table(SiddhiqlParser::Definition_tableContext * /*ctx*/) override { }
  virtual void exitDefinition_table(SiddhiqlParser::Definition_tableContext * /*ctx*/) override { }

  virtual void enterDefinition_window_final(SiddhiqlParser::Definition_window_finalContext * /*ctx*/) override { }
  virtual void exitDefinition_window_final(SiddhiqlParser::Definition_window_finalContext * /*ctx*/) override { }

  virtual void enterDefinition_window(SiddhiqlParser::Definition_windowContext * /*ctx*/) override { }
  virtual void exitDefinition_window(SiddhiqlParser::Definition_windowContext * /*ctx*/) override { }

  virtual void enterStore_query_final(SiddhiqlParser::Store_query_finalContext * /*ctx*/) override { }
  virtual void exitStore_query_final(SiddhiqlParser::Store_query_finalContext * /*ctx*/) override { }

  virtual void enterStore_query(SiddhiqlParser::Store_queryContext * /*ctx*/) override { }
  virtual void exitStore_query(SiddhiqlParser::Store_queryContext * /*ctx*/) override { }

  virtual void enterStore_input(SiddhiqlParser::Store_inputContext * /*ctx*/) override { }
  virtual void exitStore_input(SiddhiqlParser::Store_inputContext * /*ctx*/) override { }

  virtual void enterDefinition_function_final(SiddhiqlParser::Definition_function_finalContext * /*ctx*/) override { }
  virtual void exitDefinition_function_final(SiddhiqlParser::Definition_function_finalContext * /*ctx*/) override { }

  virtual void enterDefinition_function(SiddhiqlParser::Definition_functionContext * /*ctx*/) override { }
  virtual void exitDefinition_function(SiddhiqlParser::Definition_functionContext * /*ctx*/) override { }

  virtual void enterFunction_name(SiddhiqlParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(SiddhiqlParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterLanguage_name(SiddhiqlParser::Language_nameContext * /*ctx*/) override { }
  virtual void exitLanguage_name(SiddhiqlParser::Language_nameContext * /*ctx*/) override { }

  virtual void enterFunction_body(SiddhiqlParser::Function_bodyContext * /*ctx*/) override { }
  virtual void exitFunction_body(SiddhiqlParser::Function_bodyContext * /*ctx*/) override { }

  virtual void enterDefinition_trigger_final(SiddhiqlParser::Definition_trigger_finalContext * /*ctx*/) override { }
  virtual void exitDefinition_trigger_final(SiddhiqlParser::Definition_trigger_finalContext * /*ctx*/) override { }

  virtual void enterDefinition_trigger(SiddhiqlParser::Definition_triggerContext * /*ctx*/) override { }
  virtual void exitDefinition_trigger(SiddhiqlParser::Definition_triggerContext * /*ctx*/) override { }

  virtual void enterTrigger_name(SiddhiqlParser::Trigger_nameContext * /*ctx*/) override { }
  virtual void exitTrigger_name(SiddhiqlParser::Trigger_nameContext * /*ctx*/) override { }

  virtual void enterDefinition_aggregation_final(SiddhiqlParser::Definition_aggregation_finalContext * /*ctx*/) override { }
  virtual void exitDefinition_aggregation_final(SiddhiqlParser::Definition_aggregation_finalContext * /*ctx*/) override { }

  virtual void enterDefinition_aggregation(SiddhiqlParser::Definition_aggregationContext * /*ctx*/) override { }
  virtual void exitDefinition_aggregation(SiddhiqlParser::Definition_aggregationContext * /*ctx*/) override { }

  virtual void enterAggregation_name(SiddhiqlParser::Aggregation_nameContext * /*ctx*/) override { }
  virtual void exitAggregation_name(SiddhiqlParser::Aggregation_nameContext * /*ctx*/) override { }

  virtual void enterAggregation_time(SiddhiqlParser::Aggregation_timeContext * /*ctx*/) override { }
  virtual void exitAggregation_time(SiddhiqlParser::Aggregation_timeContext * /*ctx*/) override { }

  virtual void enterAggregation_time_duration(SiddhiqlParser::Aggregation_time_durationContext * /*ctx*/) override { }
  virtual void exitAggregation_time_duration(SiddhiqlParser::Aggregation_time_durationContext * /*ctx*/) override { }

  virtual void enterAggregation_time_range(SiddhiqlParser::Aggregation_time_rangeContext * /*ctx*/) override { }
  virtual void exitAggregation_time_range(SiddhiqlParser::Aggregation_time_rangeContext * /*ctx*/) override { }

  virtual void enterAggregation_time_interval(SiddhiqlParser::Aggregation_time_intervalContext * /*ctx*/) override { }
  virtual void exitAggregation_time_interval(SiddhiqlParser::Aggregation_time_intervalContext * /*ctx*/) override { }

  virtual void enterAnnotation(SiddhiqlParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(SiddhiqlParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterApp_annotation(SiddhiqlParser::App_annotationContext * /*ctx*/) override { }
  virtual void exitApp_annotation(SiddhiqlParser::App_annotationContext * /*ctx*/) override { }

  virtual void enterAnnotation_element(SiddhiqlParser::Annotation_elementContext * /*ctx*/) override { }
  virtual void exitAnnotation_element(SiddhiqlParser::Annotation_elementContext * /*ctx*/) override { }

  virtual void enterPartition(SiddhiqlParser::PartitionContext * /*ctx*/) override { }
  virtual void exitPartition(SiddhiqlParser::PartitionContext * /*ctx*/) override { }

  virtual void enterPartition_final(SiddhiqlParser::Partition_finalContext * /*ctx*/) override { }
  virtual void exitPartition_final(SiddhiqlParser::Partition_finalContext * /*ctx*/) override { }

  virtual void enterPartition_with_stream(SiddhiqlParser::Partition_with_streamContext * /*ctx*/) override { }
  virtual void exitPartition_with_stream(SiddhiqlParser::Partition_with_streamContext * /*ctx*/) override { }

  virtual void enterCondition_ranges(SiddhiqlParser::Condition_rangesContext * /*ctx*/) override { }
  virtual void exitCondition_ranges(SiddhiqlParser::Condition_rangesContext * /*ctx*/) override { }

  virtual void enterCondition_range(SiddhiqlParser::Condition_rangeContext * /*ctx*/) override { }
  virtual void exitCondition_range(SiddhiqlParser::Condition_rangeContext * /*ctx*/) override { }

  virtual void enterQuery_final(SiddhiqlParser::Query_finalContext * /*ctx*/) override { }
  virtual void exitQuery_final(SiddhiqlParser::Query_finalContext * /*ctx*/) override { }

  virtual void enterQuery(SiddhiqlParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(SiddhiqlParser::QueryContext * /*ctx*/) override { }

  virtual void enterQuery_input(SiddhiqlParser::Query_inputContext * /*ctx*/) override { }
  virtual void exitQuery_input(SiddhiqlParser::Query_inputContext * /*ctx*/) override { }

  virtual void enterStandard_stream(SiddhiqlParser::Standard_streamContext * /*ctx*/) override { }
  virtual void exitStandard_stream(SiddhiqlParser::Standard_streamContext * /*ctx*/) override { }

  virtual void enterJoin_stream(SiddhiqlParser::Join_streamContext * /*ctx*/) override { }
  virtual void exitJoin_stream(SiddhiqlParser::Join_streamContext * /*ctx*/) override { }

  virtual void enterJoin_source(SiddhiqlParser::Join_sourceContext * /*ctx*/) override { }
  virtual void exitJoin_source(SiddhiqlParser::Join_sourceContext * /*ctx*/) override { }

  virtual void enterPattern_stream(SiddhiqlParser::Pattern_streamContext * /*ctx*/) override { }
  virtual void exitPattern_stream(SiddhiqlParser::Pattern_streamContext * /*ctx*/) override { }

  virtual void enterEvery_pattern_source_chain(SiddhiqlParser::Every_pattern_source_chainContext * /*ctx*/) override { }
  virtual void exitEvery_pattern_source_chain(SiddhiqlParser::Every_pattern_source_chainContext * /*ctx*/) override { }

  virtual void enterPattern_source_chain(SiddhiqlParser::Pattern_source_chainContext * /*ctx*/) override { }
  virtual void exitPattern_source_chain(SiddhiqlParser::Pattern_source_chainContext * /*ctx*/) override { }

  virtual void enterAbsent_pattern_source_chain(SiddhiqlParser::Absent_pattern_source_chainContext * /*ctx*/) override { }
  virtual void exitAbsent_pattern_source_chain(SiddhiqlParser::Absent_pattern_source_chainContext * /*ctx*/) override { }

  virtual void enterLeft_absent_pattern_source(SiddhiqlParser::Left_absent_pattern_sourceContext * /*ctx*/) override { }
  virtual void exitLeft_absent_pattern_source(SiddhiqlParser::Left_absent_pattern_sourceContext * /*ctx*/) override { }

  virtual void enterRight_absent_pattern_source(SiddhiqlParser::Right_absent_pattern_sourceContext * /*ctx*/) override { }
  virtual void exitRight_absent_pattern_source(SiddhiqlParser::Right_absent_pattern_sourceContext * /*ctx*/) override { }

  virtual void enterPattern_source(SiddhiqlParser::Pattern_sourceContext * /*ctx*/) override { }
  virtual void exitPattern_source(SiddhiqlParser::Pattern_sourceContext * /*ctx*/) override { }

  virtual void enterLogical_stateful_source(SiddhiqlParser::Logical_stateful_sourceContext * /*ctx*/) override { }
  virtual void exitLogical_stateful_source(SiddhiqlParser::Logical_stateful_sourceContext * /*ctx*/) override { }

  virtual void enterLogical_absent_stateful_source(SiddhiqlParser::Logical_absent_stateful_sourceContext * /*ctx*/) override { }
  virtual void exitLogical_absent_stateful_source(SiddhiqlParser::Logical_absent_stateful_sourceContext * /*ctx*/) override { }

  virtual void enterEvery_absent_pattern_source(SiddhiqlParser::Every_absent_pattern_sourceContext * /*ctx*/) override { }
  virtual void exitEvery_absent_pattern_source(SiddhiqlParser::Every_absent_pattern_sourceContext * /*ctx*/) override { }

  virtual void enterBasic_absent_pattern_source(SiddhiqlParser::Basic_absent_pattern_sourceContext * /*ctx*/) override { }
  virtual void exitBasic_absent_pattern_source(SiddhiqlParser::Basic_absent_pattern_sourceContext * /*ctx*/) override { }

  virtual void enterPattern_collection_stateful_source(SiddhiqlParser::Pattern_collection_stateful_sourceContext * /*ctx*/) override { }
  virtual void exitPattern_collection_stateful_source(SiddhiqlParser::Pattern_collection_stateful_sourceContext * /*ctx*/) override { }

  virtual void enterStandard_stateful_source(SiddhiqlParser::Standard_stateful_sourceContext * /*ctx*/) override { }
  virtual void exitStandard_stateful_source(SiddhiqlParser::Standard_stateful_sourceContext * /*ctx*/) override { }

  virtual void enterBasic_source(SiddhiqlParser::Basic_sourceContext * /*ctx*/) override { }
  virtual void exitBasic_source(SiddhiqlParser::Basic_sourceContext * /*ctx*/) override { }

  virtual void enterBasic_source_stream_handlers(SiddhiqlParser::Basic_source_stream_handlersContext * /*ctx*/) override { }
  virtual void exitBasic_source_stream_handlers(SiddhiqlParser::Basic_source_stream_handlersContext * /*ctx*/) override { }

  virtual void enterBasic_source_stream_handler(SiddhiqlParser::Basic_source_stream_handlerContext * /*ctx*/) override { }
  virtual void exitBasic_source_stream_handler(SiddhiqlParser::Basic_source_stream_handlerContext * /*ctx*/) override { }

  virtual void enterSequence_stream(SiddhiqlParser::Sequence_streamContext * /*ctx*/) override { }
  virtual void exitSequence_stream(SiddhiqlParser::Sequence_streamContext * /*ctx*/) override { }

  virtual void enterEvery_sequence_source_chain(SiddhiqlParser::Every_sequence_source_chainContext * /*ctx*/) override { }
  virtual void exitEvery_sequence_source_chain(SiddhiqlParser::Every_sequence_source_chainContext * /*ctx*/) override { }

  virtual void enterEvery_absent_sequence_source_chain(SiddhiqlParser::Every_absent_sequence_source_chainContext * /*ctx*/) override { }
  virtual void exitEvery_absent_sequence_source_chain(SiddhiqlParser::Every_absent_sequence_source_chainContext * /*ctx*/) override { }

  virtual void enterAbsent_sequence_source_chain(SiddhiqlParser::Absent_sequence_source_chainContext * /*ctx*/) override { }
  virtual void exitAbsent_sequence_source_chain(SiddhiqlParser::Absent_sequence_source_chainContext * /*ctx*/) override { }

  virtual void enterLeft_absent_sequence_source(SiddhiqlParser::Left_absent_sequence_sourceContext * /*ctx*/) override { }
  virtual void exitLeft_absent_sequence_source(SiddhiqlParser::Left_absent_sequence_sourceContext * /*ctx*/) override { }

  virtual void enterRight_absent_sequence_source(SiddhiqlParser::Right_absent_sequence_sourceContext * /*ctx*/) override { }
  virtual void exitRight_absent_sequence_source(SiddhiqlParser::Right_absent_sequence_sourceContext * /*ctx*/) override { }

  virtual void enterSequence_source_chain(SiddhiqlParser::Sequence_source_chainContext * /*ctx*/) override { }
  virtual void exitSequence_source_chain(SiddhiqlParser::Sequence_source_chainContext * /*ctx*/) override { }

  virtual void enterSequence_source(SiddhiqlParser::Sequence_sourceContext * /*ctx*/) override { }
  virtual void exitSequence_source(SiddhiqlParser::Sequence_sourceContext * /*ctx*/) override { }

  virtual void enterSequence_collection_stateful_source(SiddhiqlParser::Sequence_collection_stateful_sourceContext * /*ctx*/) override { }
  virtual void exitSequence_collection_stateful_source(SiddhiqlParser::Sequence_collection_stateful_sourceContext * /*ctx*/) override { }

  virtual void enterAnonymous_stream(SiddhiqlParser::Anonymous_streamContext * /*ctx*/) override { }
  virtual void exitAnonymous_stream(SiddhiqlParser::Anonymous_streamContext * /*ctx*/) override { }

  virtual void enterFilter(SiddhiqlParser::FilterContext * /*ctx*/) override { }
  virtual void exitFilter(SiddhiqlParser::FilterContext * /*ctx*/) override { }

  virtual void enterStream_function(SiddhiqlParser::Stream_functionContext * /*ctx*/) override { }
  virtual void exitStream_function(SiddhiqlParser::Stream_functionContext * /*ctx*/) override { }

  virtual void enterWindow(SiddhiqlParser::WindowContext * /*ctx*/) override { }
  virtual void exitWindow(SiddhiqlParser::WindowContext * /*ctx*/) override { }

  virtual void enterGroup_by_query_selection(SiddhiqlParser::Group_by_query_selectionContext * /*ctx*/) override { }
  virtual void exitGroup_by_query_selection(SiddhiqlParser::Group_by_query_selectionContext * /*ctx*/) override { }

  virtual void enterQuery_section(SiddhiqlParser::Query_sectionContext * /*ctx*/) override { }
  virtual void exitQuery_section(SiddhiqlParser::Query_sectionContext * /*ctx*/) override { }

  virtual void enterGroup_by(SiddhiqlParser::Group_byContext * /*ctx*/) override { }
  virtual void exitGroup_by(SiddhiqlParser::Group_byContext * /*ctx*/) override { }

  virtual void enterHaving(SiddhiqlParser::HavingContext * /*ctx*/) override { }
  virtual void exitHaving(SiddhiqlParser::HavingContext * /*ctx*/) override { }

  virtual void enterOrder_by(SiddhiqlParser::Order_byContext * /*ctx*/) override { }
  virtual void exitOrder_by(SiddhiqlParser::Order_byContext * /*ctx*/) override { }

  virtual void enterOrder_by_reference(SiddhiqlParser::Order_by_referenceContext * /*ctx*/) override { }
  virtual void exitOrder_by_reference(SiddhiqlParser::Order_by_referenceContext * /*ctx*/) override { }

  virtual void enterOrder(SiddhiqlParser::OrderContext * /*ctx*/) override { }
  virtual void exitOrder(SiddhiqlParser::OrderContext * /*ctx*/) override { }

  virtual void enterLimit(SiddhiqlParser::LimitContext * /*ctx*/) override { }
  virtual void exitLimit(SiddhiqlParser::LimitContext * /*ctx*/) override { }

  virtual void enterOffset(SiddhiqlParser::OffsetContext * /*ctx*/) override { }
  virtual void exitOffset(SiddhiqlParser::OffsetContext * /*ctx*/) override { }

  virtual void enterQuery_output(SiddhiqlParser::Query_outputContext * /*ctx*/) override { }
  virtual void exitQuery_output(SiddhiqlParser::Query_outputContext * /*ctx*/) override { }

  virtual void enterStore_query_output(SiddhiqlParser::Store_query_outputContext * /*ctx*/) override { }
  virtual void exitStore_query_output(SiddhiqlParser::Store_query_outputContext * /*ctx*/) override { }

  virtual void enterSet_clause(SiddhiqlParser::Set_clauseContext * /*ctx*/) override { }
  virtual void exitSet_clause(SiddhiqlParser::Set_clauseContext * /*ctx*/) override { }

  virtual void enterSet_assignment(SiddhiqlParser::Set_assignmentContext * /*ctx*/) override { }
  virtual void exitSet_assignment(SiddhiqlParser::Set_assignmentContext * /*ctx*/) override { }

  virtual void enterOutput_event_type(SiddhiqlParser::Output_event_typeContext * /*ctx*/) override { }
  virtual void exitOutput_event_type(SiddhiqlParser::Output_event_typeContext * /*ctx*/) override { }

  virtual void enterOutput_rate(SiddhiqlParser::Output_rateContext * /*ctx*/) override { }
  virtual void exitOutput_rate(SiddhiqlParser::Output_rateContext * /*ctx*/) override { }

  virtual void enterOutput_rate_type(SiddhiqlParser::Output_rate_typeContext * /*ctx*/) override { }
  virtual void exitOutput_rate_type(SiddhiqlParser::Output_rate_typeContext * /*ctx*/) override { }

  virtual void enterFor_time(SiddhiqlParser::For_timeContext * /*ctx*/) override { }
  virtual void exitFor_time(SiddhiqlParser::For_timeContext * /*ctx*/) override { }

  virtual void enterWithin_time(SiddhiqlParser::Within_timeContext * /*ctx*/) override { }
  virtual void exitWithin_time(SiddhiqlParser::Within_timeContext * /*ctx*/) override { }

  virtual void enterWithin_time_range(SiddhiqlParser::Within_time_rangeContext * /*ctx*/) override { }
  virtual void exitWithin_time_range(SiddhiqlParser::Within_time_rangeContext * /*ctx*/) override { }

  virtual void enterPer(SiddhiqlParser::PerContext * /*ctx*/) override { }
  virtual void exitPer(SiddhiqlParser::PerContext * /*ctx*/) override { }

  virtual void enterOutput_attribute(SiddhiqlParser::Output_attributeContext * /*ctx*/) override { }
  virtual void exitOutput_attribute(SiddhiqlParser::Output_attributeContext * /*ctx*/) override { }

  virtual void enterAttribute(SiddhiqlParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(SiddhiqlParser::AttributeContext * /*ctx*/) override { }

  virtual void enterExpression(SiddhiqlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SiddhiqlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplication_math_operation(SiddhiqlParser::Multiplication_math_operationContext * /*ctx*/) override { }
  virtual void exitMultiplication_math_operation(SiddhiqlParser::Multiplication_math_operationContext * /*ctx*/) override { }

  virtual void enterGreaterthan_lessthan_math_operation(SiddhiqlParser::Greaterthan_lessthan_math_operationContext * /*ctx*/) override { }
  virtual void exitGreaterthan_lessthan_math_operation(SiddhiqlParser::Greaterthan_lessthan_math_operationContext * /*ctx*/) override { }

  virtual void enterBasic_math_operation(SiddhiqlParser::Basic_math_operationContext * /*ctx*/) override { }
  virtual void exitBasic_math_operation(SiddhiqlParser::Basic_math_operationContext * /*ctx*/) override { }

  virtual void enterIn_math_operation(SiddhiqlParser::In_math_operationContext * /*ctx*/) override { }
  virtual void exitIn_math_operation(SiddhiqlParser::In_math_operationContext * /*ctx*/) override { }

  virtual void enterAddition_math_operation(SiddhiqlParser::Addition_math_operationContext * /*ctx*/) override { }
  virtual void exitAddition_math_operation(SiddhiqlParser::Addition_math_operationContext * /*ctx*/) override { }

  virtual void enterAnd_math_operation(SiddhiqlParser::And_math_operationContext * /*ctx*/) override { }
  virtual void exitAnd_math_operation(SiddhiqlParser::And_math_operationContext * /*ctx*/) override { }

  virtual void enterOr_math_operation(SiddhiqlParser::Or_math_operationContext * /*ctx*/) override { }
  virtual void exitOr_math_operation(SiddhiqlParser::Or_math_operationContext * /*ctx*/) override { }

  virtual void enterEquality_math_operation(SiddhiqlParser::Equality_math_operationContext * /*ctx*/) override { }
  virtual void exitEquality_math_operation(SiddhiqlParser::Equality_math_operationContext * /*ctx*/) override { }

  virtual void enterNot_math_operation(SiddhiqlParser::Not_math_operationContext * /*ctx*/) override { }
  virtual void exitNot_math_operation(SiddhiqlParser::Not_math_operationContext * /*ctx*/) override { }

  virtual void enterFunction_operation(SiddhiqlParser::Function_operationContext * /*ctx*/) override { }
  virtual void exitFunction_operation(SiddhiqlParser::Function_operationContext * /*ctx*/) override { }

  virtual void enterAttribute_list(SiddhiqlParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(SiddhiqlParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterNull_check(SiddhiqlParser::Null_checkContext * /*ctx*/) override { }
  virtual void exitNull_check(SiddhiqlParser::Null_checkContext * /*ctx*/) override { }

  virtual void enterStream_reference(SiddhiqlParser::Stream_referenceContext * /*ctx*/) override { }
  virtual void exitStream_reference(SiddhiqlParser::Stream_referenceContext * /*ctx*/) override { }

  virtual void enterAttribute_reference(SiddhiqlParser::Attribute_referenceContext * /*ctx*/) override { }
  virtual void exitAttribute_reference(SiddhiqlParser::Attribute_referenceContext * /*ctx*/) override { }

  virtual void enterAttribute_index(SiddhiqlParser::Attribute_indexContext * /*ctx*/) override { }
  virtual void exitAttribute_index(SiddhiqlParser::Attribute_indexContext * /*ctx*/) override { }

  virtual void enterFunction_id(SiddhiqlParser::Function_idContext * /*ctx*/) override { }
  virtual void exitFunction_id(SiddhiqlParser::Function_idContext * /*ctx*/) override { }

  virtual void enterFunction_namespace(SiddhiqlParser::Function_namespaceContext * /*ctx*/) override { }
  virtual void exitFunction_namespace(SiddhiqlParser::Function_namespaceContext * /*ctx*/) override { }

  virtual void enterStream_id(SiddhiqlParser::Stream_idContext * /*ctx*/) override { }
  virtual void exitStream_id(SiddhiqlParser::Stream_idContext * /*ctx*/) override { }

  virtual void enterSource_id(SiddhiqlParser::Source_idContext * /*ctx*/) override { }
  virtual void exitSource_id(SiddhiqlParser::Source_idContext * /*ctx*/) override { }

  virtual void enterAlias(SiddhiqlParser::AliasContext * /*ctx*/) override { }
  virtual void exitAlias(SiddhiqlParser::AliasContext * /*ctx*/) override { }

  virtual void enterProperty_name(SiddhiqlParser::Property_nameContext * /*ctx*/) override { }
  virtual void exitProperty_name(SiddhiqlParser::Property_nameContext * /*ctx*/) override { }

  virtual void enterAttribute_name(SiddhiqlParser::Attribute_nameContext * /*ctx*/) override { }
  virtual void exitAttribute_name(SiddhiqlParser::Attribute_nameContext * /*ctx*/) override { }

  virtual void enterType(SiddhiqlParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(SiddhiqlParser::TypeContext * /*ctx*/) override { }

  virtual void enterProperty_value(SiddhiqlParser::Property_valueContext * /*ctx*/) override { }
  virtual void exitProperty_value(SiddhiqlParser::Property_valueContext * /*ctx*/) override { }

  virtual void enterProperty_separator(SiddhiqlParser::Property_separatorContext * /*ctx*/) override { }
  virtual void exitProperty_separator(SiddhiqlParser::Property_separatorContext * /*ctx*/) override { }

  virtual void enterSource(SiddhiqlParser::SourceContext * /*ctx*/) override { }
  virtual void exitSource(SiddhiqlParser::SourceContext * /*ctx*/) override { }

  virtual void enterTarget(SiddhiqlParser::TargetContext * /*ctx*/) override { }
  virtual void exitTarget(SiddhiqlParser::TargetContext * /*ctx*/) override { }

  virtual void enterEvent(SiddhiqlParser::EventContext * /*ctx*/) override { }
  virtual void exitEvent(SiddhiqlParser::EventContext * /*ctx*/) override { }

  virtual void enterName(SiddhiqlParser::NameContext * /*ctx*/) override { }
  virtual void exitName(SiddhiqlParser::NameContext * /*ctx*/) override { }

  virtual void enterCollect(SiddhiqlParser::CollectContext * /*ctx*/) override { }
  virtual void exitCollect(SiddhiqlParser::CollectContext * /*ctx*/) override { }

  virtual void enterAttribute_type(SiddhiqlParser::Attribute_typeContext * /*ctx*/) override { }
  virtual void exitAttribute_type(SiddhiqlParser::Attribute_typeContext * /*ctx*/) override { }

  virtual void enterJoin(SiddhiqlParser::JoinContext * /*ctx*/) override { }
  virtual void exitJoin(SiddhiqlParser::JoinContext * /*ctx*/) override { }

  virtual void enterConstant_value(SiddhiqlParser::Constant_valueContext * /*ctx*/) override { }
  virtual void exitConstant_value(SiddhiqlParser::Constant_valueContext * /*ctx*/) override { }

  virtual void enterId(SiddhiqlParser::IdContext * /*ctx*/) override { }
  virtual void exitId(SiddhiqlParser::IdContext * /*ctx*/) override { }

  virtual void enterKeyword(SiddhiqlParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(SiddhiqlParser::KeywordContext * /*ctx*/) override { }

  virtual void enterTime_value(SiddhiqlParser::Time_valueContext * /*ctx*/) override { }
  virtual void exitTime_value(SiddhiqlParser::Time_valueContext * /*ctx*/) override { }

  virtual void enterYear_value(SiddhiqlParser::Year_valueContext * /*ctx*/) override { }
  virtual void exitYear_value(SiddhiqlParser::Year_valueContext * /*ctx*/) override { }

  virtual void enterMonth_value(SiddhiqlParser::Month_valueContext * /*ctx*/) override { }
  virtual void exitMonth_value(SiddhiqlParser::Month_valueContext * /*ctx*/) override { }

  virtual void enterWeek_value(SiddhiqlParser::Week_valueContext * /*ctx*/) override { }
  virtual void exitWeek_value(SiddhiqlParser::Week_valueContext * /*ctx*/) override { }

  virtual void enterDay_value(SiddhiqlParser::Day_valueContext * /*ctx*/) override { }
  virtual void exitDay_value(SiddhiqlParser::Day_valueContext * /*ctx*/) override { }

  virtual void enterHour_value(SiddhiqlParser::Hour_valueContext * /*ctx*/) override { }
  virtual void exitHour_value(SiddhiqlParser::Hour_valueContext * /*ctx*/) override { }

  virtual void enterMinute_value(SiddhiqlParser::Minute_valueContext * /*ctx*/) override { }
  virtual void exitMinute_value(SiddhiqlParser::Minute_valueContext * /*ctx*/) override { }

  virtual void enterSecond_value(SiddhiqlParser::Second_valueContext * /*ctx*/) override { }
  virtual void exitSecond_value(SiddhiqlParser::Second_valueContext * /*ctx*/) override { }

  virtual void enterMillisecond_value(SiddhiqlParser::Millisecond_valueContext * /*ctx*/) override { }
  virtual void exitMillisecond_value(SiddhiqlParser::Millisecond_valueContext * /*ctx*/) override { }

  virtual void enterSigned_double_value(SiddhiqlParser::Signed_double_valueContext * /*ctx*/) override { }
  virtual void exitSigned_double_value(SiddhiqlParser::Signed_double_valueContext * /*ctx*/) override { }

  virtual void enterSigned_long_value(SiddhiqlParser::Signed_long_valueContext * /*ctx*/) override { }
  virtual void exitSigned_long_value(SiddhiqlParser::Signed_long_valueContext * /*ctx*/) override { }

  virtual void enterSigned_float_value(SiddhiqlParser::Signed_float_valueContext * /*ctx*/) override { }
  virtual void exitSigned_float_value(SiddhiqlParser::Signed_float_valueContext * /*ctx*/) override { }

  virtual void enterSigned_int_value(SiddhiqlParser::Signed_int_valueContext * /*ctx*/) override { }
  virtual void exitSigned_int_value(SiddhiqlParser::Signed_int_valueContext * /*ctx*/) override { }

  virtual void enterBool_value(SiddhiqlParser::Bool_valueContext * /*ctx*/) override { }
  virtual void exitBool_value(SiddhiqlParser::Bool_valueContext * /*ctx*/) override { }

  virtual void enterString_value(SiddhiqlParser::String_valueContext * /*ctx*/) override { }
  virtual void exitString_value(SiddhiqlParser::String_valueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

