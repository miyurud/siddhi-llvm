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
#include "SiddhiqlVisitor.h"


/**
 * This class provides an empty implementation of SiddhiqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SiddhiqlBaseVisitor : public SiddhiqlVisitor {
public:

  virtual antlrcpp::Any visitParse(SiddhiqlParser::ParseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError(SiddhiqlParser::ErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecution_element(SiddhiqlParser::Execution_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_stream_final(SiddhiqlParser::Definition_stream_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_table_final(SiddhiqlParser::Definition_table_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_table(SiddhiqlParser::Definition_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_window_final(SiddhiqlParser::Definition_window_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_window(SiddhiqlParser::Definition_windowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStore_query_final(SiddhiqlParser::Store_query_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStore_query(SiddhiqlParser::Store_queryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStore_input(SiddhiqlParser::Store_inputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_function_final(SiddhiqlParser::Definition_function_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_function(SiddhiqlParser::Definition_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(SiddhiqlParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLanguage_name(SiddhiqlParser::Language_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_body(SiddhiqlParser::Function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_trigger_final(SiddhiqlParser::Definition_trigger_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_trigger(SiddhiqlParser::Definition_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_name(SiddhiqlParser::Trigger_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_aggregation_final(SiddhiqlParser::Definition_aggregation_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_aggregation(SiddhiqlParser::Definition_aggregationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregation_name(SiddhiqlParser::Aggregation_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregation_time(SiddhiqlParser::Aggregation_timeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregation_time_duration(SiddhiqlParser::Aggregation_time_durationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregation_time_range(SiddhiqlParser::Aggregation_time_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregation_time_interval(SiddhiqlParser::Aggregation_time_intervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotation(SiddhiqlParser::AnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotation_element(SiddhiqlParser::Annotation_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition(SiddhiqlParser::PartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_final(SiddhiqlParser::Partition_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_with_stream(SiddhiqlParser::Partition_with_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition_ranges(SiddhiqlParser::Condition_rangesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition_range(SiddhiqlParser::Condition_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_final(SiddhiqlParser::Query_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery(SiddhiqlParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_input(SiddhiqlParser::Query_inputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_stream(SiddhiqlParser::Standard_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_stream(SiddhiqlParser::Join_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_source(SiddhiqlParser::Join_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPattern_stream(SiddhiqlParser::Pattern_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvery_pattern_source_chain(SiddhiqlParser::Every_pattern_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPattern_source_chain(SiddhiqlParser::Pattern_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbsent_pattern_source_chain(SiddhiqlParser::Absent_pattern_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeft_absent_pattern_source(SiddhiqlParser::Left_absent_pattern_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRight_absent_pattern_source(SiddhiqlParser::Right_absent_pattern_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPattern_source(SiddhiqlParser::Pattern_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_stateful_source(SiddhiqlParser::Logical_stateful_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_absent_stateful_source(SiddhiqlParser::Logical_absent_stateful_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvery_absent_pattern_source(SiddhiqlParser::Every_absent_pattern_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_absent_pattern_source(SiddhiqlParser::Basic_absent_pattern_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPattern_collection_stateful_source(SiddhiqlParser::Pattern_collection_stateful_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_stateful_source(SiddhiqlParser::Standard_stateful_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_source(SiddhiqlParser::Basic_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_source_stream_handlers(SiddhiqlParser::Basic_source_stream_handlersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_source_stream_handler(SiddhiqlParser::Basic_source_stream_handlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_stream(SiddhiqlParser::Sequence_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvery_sequence_source_chain(SiddhiqlParser::Every_sequence_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvery_absent_sequence_source_chain(SiddhiqlParser::Every_absent_sequence_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbsent_sequence_source_chain(SiddhiqlParser::Absent_sequence_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeft_absent_sequence_source(SiddhiqlParser::Left_absent_sequence_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRight_absent_sequence_source(SiddhiqlParser::Right_absent_sequence_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_source_chain(SiddhiqlParser::Sequence_source_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_source(SiddhiqlParser::Sequence_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_collection_stateful_source(SiddhiqlParser::Sequence_collection_stateful_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnonymous_stream(SiddhiqlParser::Anonymous_streamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilter(SiddhiqlParser::FilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStream_function(SiddhiqlParser::Stream_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow(SiddhiqlParser::WindowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_query_selection(SiddhiqlParser::Group_by_query_selectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_section(SiddhiqlParser::Query_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by(SiddhiqlParser::Group_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving(SiddhiqlParser::HavingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by(SiddhiqlParser::Order_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_reference(SiddhiqlParser::Order_by_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder(SiddhiqlParser::OrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit(SiddhiqlParser::LimitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOffset(SiddhiqlParser::OffsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_output(SiddhiqlParser::Query_outputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStore_query_output(SiddhiqlParser::Store_query_outputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_clause(SiddhiqlParser::Set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_assignment(SiddhiqlParser::Set_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_event_type(SiddhiqlParser::Output_event_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_rate(SiddhiqlParser::Output_rateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_rate_type(SiddhiqlParser::Output_rate_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_time(SiddhiqlParser::For_timeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_time(SiddhiqlParser::Within_timeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_time_range(SiddhiqlParser::Within_time_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPer(SiddhiqlParser::PerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput_attribute(SiddhiqlParser::Output_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(SiddhiqlParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SiddhiqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplication_math_operation(SiddhiqlParser::Multiplication_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGreaterthan_lessthan_math_operation(SiddhiqlParser::Greaterthan_lessthan_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_math_operation(SiddhiqlParser::Basic_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn_math_operation(SiddhiqlParser::In_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddition_math_operation(SiddhiqlParser::Addition_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd_math_operation(SiddhiqlParser::And_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr_math_operation(SiddhiqlParser::Or_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality_math_operation(SiddhiqlParser::Equality_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot_math_operation(SiddhiqlParser::Not_math_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_operation(SiddhiqlParser::Function_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_list(SiddhiqlParser::Attribute_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_check(SiddhiqlParser::Null_checkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStream_reference(SiddhiqlParser::Stream_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_reference(SiddhiqlParser::Attribute_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_index(SiddhiqlParser::Attribute_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_id(SiddhiqlParser::Function_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_namespace(SiddhiqlParser::Function_namespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStream_id(SiddhiqlParser::Stream_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSource_id(SiddhiqlParser::Source_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlias(SiddhiqlParser::AliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProperty_name(SiddhiqlParser::Property_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_name(SiddhiqlParser::Attribute_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(SiddhiqlParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProperty_value(SiddhiqlParser::Property_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProperty_separator(SiddhiqlParser::Property_separatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSource(SiddhiqlParser::SourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTarget(SiddhiqlParser::TargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent(SiddhiqlParser::EventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(SiddhiqlParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect(SiddhiqlParser::CollectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_type(SiddhiqlParser::Attribute_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin(SiddhiqlParser::JoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_value(SiddhiqlParser::Constant_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(SiddhiqlParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(SiddhiqlParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTime_value(SiddhiqlParser::Time_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitYear_value(SiddhiqlParser::Year_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMonth_value(SiddhiqlParser::Month_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeek_value(SiddhiqlParser::Week_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDay_value(SiddhiqlParser::Day_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHour_value(SiddhiqlParser::Hour_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinute_value(SiddhiqlParser::Minute_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSecond_value(SiddhiqlParser::Second_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMillisecond_value(SiddhiqlParser::Millisecond_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_double_value(SiddhiqlParser::Signed_double_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_long_value(SiddhiqlParser::Signed_long_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_float_value(SiddhiqlParser::Signed_float_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_int_value(SiddhiqlParser::Signed_int_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_value(SiddhiqlParser::Bool_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_value(SiddhiqlParser::String_valueContext *ctx) override {
    return visitChildren(ctx);
  }


};

