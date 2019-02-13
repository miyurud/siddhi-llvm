
    //import org.wso2.siddhi.query.compiler.exception.SiddhiParserException;


// Generated from Siddhiql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SiddhiqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SiddhiqlParser.
 */
class  SiddhiqlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterParse(SiddhiqlParser::ParseContext *ctx) = 0;
  virtual void exitParse(SiddhiqlParser::ParseContext *ctx) = 0;

  virtual void enterError(SiddhiqlParser::ErrorContext *ctx) = 0;
  virtual void exitError(SiddhiqlParser::ErrorContext *ctx) = 0;

  virtual void enterSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) = 0;
  virtual void exitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) = 0;

  virtual void enterExecution_element(SiddhiqlParser::Execution_elementContext *ctx) = 0;
  virtual void exitExecution_element(SiddhiqlParser::Execution_elementContext *ctx) = 0;

  virtual void enterDefinition_stream_final(SiddhiqlParser::Definition_stream_finalContext *ctx) = 0;
  virtual void exitDefinition_stream_final(SiddhiqlParser::Definition_stream_finalContext *ctx) = 0;

  virtual void enterDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx) = 0;
  virtual void exitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx) = 0;

  virtual void enterDefinition_table_final(SiddhiqlParser::Definition_table_finalContext *ctx) = 0;
  virtual void exitDefinition_table_final(SiddhiqlParser::Definition_table_finalContext *ctx) = 0;

  virtual void enterDefinition_table(SiddhiqlParser::Definition_tableContext *ctx) = 0;
  virtual void exitDefinition_table(SiddhiqlParser::Definition_tableContext *ctx) = 0;

  virtual void enterDefinition_window_final(SiddhiqlParser::Definition_window_finalContext *ctx) = 0;
  virtual void exitDefinition_window_final(SiddhiqlParser::Definition_window_finalContext *ctx) = 0;

  virtual void enterDefinition_window(SiddhiqlParser::Definition_windowContext *ctx) = 0;
  virtual void exitDefinition_window(SiddhiqlParser::Definition_windowContext *ctx) = 0;

  virtual void enterStore_query_final(SiddhiqlParser::Store_query_finalContext *ctx) = 0;
  virtual void exitStore_query_final(SiddhiqlParser::Store_query_finalContext *ctx) = 0;

  virtual void enterStore_query(SiddhiqlParser::Store_queryContext *ctx) = 0;
  virtual void exitStore_query(SiddhiqlParser::Store_queryContext *ctx) = 0;

  virtual void enterStore_input(SiddhiqlParser::Store_inputContext *ctx) = 0;
  virtual void exitStore_input(SiddhiqlParser::Store_inputContext *ctx) = 0;

  virtual void enterDefinition_function_final(SiddhiqlParser::Definition_function_finalContext *ctx) = 0;
  virtual void exitDefinition_function_final(SiddhiqlParser::Definition_function_finalContext *ctx) = 0;

  virtual void enterDefinition_function(SiddhiqlParser::Definition_functionContext *ctx) = 0;
  virtual void exitDefinition_function(SiddhiqlParser::Definition_functionContext *ctx) = 0;

  virtual void enterFunction_name(SiddhiqlParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(SiddhiqlParser::Function_nameContext *ctx) = 0;

  virtual void enterLanguage_name(SiddhiqlParser::Language_nameContext *ctx) = 0;
  virtual void exitLanguage_name(SiddhiqlParser::Language_nameContext *ctx) = 0;

  virtual void enterFunction_body(SiddhiqlParser::Function_bodyContext *ctx) = 0;
  virtual void exitFunction_body(SiddhiqlParser::Function_bodyContext *ctx) = 0;

  virtual void enterDefinition_trigger_final(SiddhiqlParser::Definition_trigger_finalContext *ctx) = 0;
  virtual void exitDefinition_trigger_final(SiddhiqlParser::Definition_trigger_finalContext *ctx) = 0;

  virtual void enterDefinition_trigger(SiddhiqlParser::Definition_triggerContext *ctx) = 0;
  virtual void exitDefinition_trigger(SiddhiqlParser::Definition_triggerContext *ctx) = 0;

  virtual void enterTrigger_name(SiddhiqlParser::Trigger_nameContext *ctx) = 0;
  virtual void exitTrigger_name(SiddhiqlParser::Trigger_nameContext *ctx) = 0;

  virtual void enterDefinition_aggregation_final(SiddhiqlParser::Definition_aggregation_finalContext *ctx) = 0;
  virtual void exitDefinition_aggregation_final(SiddhiqlParser::Definition_aggregation_finalContext *ctx) = 0;

  virtual void enterDefinition_aggregation(SiddhiqlParser::Definition_aggregationContext *ctx) = 0;
  virtual void exitDefinition_aggregation(SiddhiqlParser::Definition_aggregationContext *ctx) = 0;

  virtual void enterAggregation_name(SiddhiqlParser::Aggregation_nameContext *ctx) = 0;
  virtual void exitAggregation_name(SiddhiqlParser::Aggregation_nameContext *ctx) = 0;

  virtual void enterAggregation_time(SiddhiqlParser::Aggregation_timeContext *ctx) = 0;
  virtual void exitAggregation_time(SiddhiqlParser::Aggregation_timeContext *ctx) = 0;

  virtual void enterAggregation_time_duration(SiddhiqlParser::Aggregation_time_durationContext *ctx) = 0;
  virtual void exitAggregation_time_duration(SiddhiqlParser::Aggregation_time_durationContext *ctx) = 0;

  virtual void enterAggregation_time_range(SiddhiqlParser::Aggregation_time_rangeContext *ctx) = 0;
  virtual void exitAggregation_time_range(SiddhiqlParser::Aggregation_time_rangeContext *ctx) = 0;

  virtual void enterAggregation_time_interval(SiddhiqlParser::Aggregation_time_intervalContext *ctx) = 0;
  virtual void exitAggregation_time_interval(SiddhiqlParser::Aggregation_time_intervalContext *ctx) = 0;

  virtual void enterAnnotation(SiddhiqlParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(SiddhiqlParser::AnnotationContext *ctx) = 0;

  virtual void enterApp_annotation(SiddhiqlParser::App_annotationContext *ctx) = 0;
  virtual void exitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) = 0;

  virtual void enterAnnotation_element(SiddhiqlParser::Annotation_elementContext *ctx) = 0;
  virtual void exitAnnotation_element(SiddhiqlParser::Annotation_elementContext *ctx) = 0;

  virtual void enterPartition(SiddhiqlParser::PartitionContext *ctx) = 0;
  virtual void exitPartition(SiddhiqlParser::PartitionContext *ctx) = 0;

  virtual void enterPartition_final(SiddhiqlParser::Partition_finalContext *ctx) = 0;
  virtual void exitPartition_final(SiddhiqlParser::Partition_finalContext *ctx) = 0;

  virtual void enterPartition_with_stream(SiddhiqlParser::Partition_with_streamContext *ctx) = 0;
  virtual void exitPartition_with_stream(SiddhiqlParser::Partition_with_streamContext *ctx) = 0;

  virtual void enterCondition_ranges(SiddhiqlParser::Condition_rangesContext *ctx) = 0;
  virtual void exitCondition_ranges(SiddhiqlParser::Condition_rangesContext *ctx) = 0;

  virtual void enterCondition_range(SiddhiqlParser::Condition_rangeContext *ctx) = 0;
  virtual void exitCondition_range(SiddhiqlParser::Condition_rangeContext *ctx) = 0;

  virtual void enterQuery_final(SiddhiqlParser::Query_finalContext *ctx) = 0;
  virtual void exitQuery_final(SiddhiqlParser::Query_finalContext *ctx) = 0;

  virtual void enterQuery(SiddhiqlParser::QueryContext *ctx) = 0;
  virtual void exitQuery(SiddhiqlParser::QueryContext *ctx) = 0;

  virtual void enterQuery_input(SiddhiqlParser::Query_inputContext *ctx) = 0;
  virtual void exitQuery_input(SiddhiqlParser::Query_inputContext *ctx) = 0;

  virtual void enterStandard_stream(SiddhiqlParser::Standard_streamContext *ctx) = 0;
  virtual void exitStandard_stream(SiddhiqlParser::Standard_streamContext *ctx) = 0;

  virtual void enterJoin_stream(SiddhiqlParser::Join_streamContext *ctx) = 0;
  virtual void exitJoin_stream(SiddhiqlParser::Join_streamContext *ctx) = 0;

  virtual void enterJoin_source(SiddhiqlParser::Join_sourceContext *ctx) = 0;
  virtual void exitJoin_source(SiddhiqlParser::Join_sourceContext *ctx) = 0;

  virtual void enterPattern_stream(SiddhiqlParser::Pattern_streamContext *ctx) = 0;
  virtual void exitPattern_stream(SiddhiqlParser::Pattern_streamContext *ctx) = 0;

  virtual void enterEvery_pattern_source_chain(SiddhiqlParser::Every_pattern_source_chainContext *ctx) = 0;
  virtual void exitEvery_pattern_source_chain(SiddhiqlParser::Every_pattern_source_chainContext *ctx) = 0;

  virtual void enterPattern_source_chain(SiddhiqlParser::Pattern_source_chainContext *ctx) = 0;
  virtual void exitPattern_source_chain(SiddhiqlParser::Pattern_source_chainContext *ctx) = 0;

  virtual void enterAbsent_pattern_source_chain(SiddhiqlParser::Absent_pattern_source_chainContext *ctx) = 0;
  virtual void exitAbsent_pattern_source_chain(SiddhiqlParser::Absent_pattern_source_chainContext *ctx) = 0;

  virtual void enterLeft_absent_pattern_source(SiddhiqlParser::Left_absent_pattern_sourceContext *ctx) = 0;
  virtual void exitLeft_absent_pattern_source(SiddhiqlParser::Left_absent_pattern_sourceContext *ctx) = 0;

  virtual void enterRight_absent_pattern_source(SiddhiqlParser::Right_absent_pattern_sourceContext *ctx) = 0;
  virtual void exitRight_absent_pattern_source(SiddhiqlParser::Right_absent_pattern_sourceContext *ctx) = 0;

  virtual void enterPattern_source(SiddhiqlParser::Pattern_sourceContext *ctx) = 0;
  virtual void exitPattern_source(SiddhiqlParser::Pattern_sourceContext *ctx) = 0;

  virtual void enterLogical_stateful_source(SiddhiqlParser::Logical_stateful_sourceContext *ctx) = 0;
  virtual void exitLogical_stateful_source(SiddhiqlParser::Logical_stateful_sourceContext *ctx) = 0;

  virtual void enterLogical_absent_stateful_source(SiddhiqlParser::Logical_absent_stateful_sourceContext *ctx) = 0;
  virtual void exitLogical_absent_stateful_source(SiddhiqlParser::Logical_absent_stateful_sourceContext *ctx) = 0;

  virtual void enterEvery_absent_pattern_source(SiddhiqlParser::Every_absent_pattern_sourceContext *ctx) = 0;
  virtual void exitEvery_absent_pattern_source(SiddhiqlParser::Every_absent_pattern_sourceContext *ctx) = 0;

  virtual void enterBasic_absent_pattern_source(SiddhiqlParser::Basic_absent_pattern_sourceContext *ctx) = 0;
  virtual void exitBasic_absent_pattern_source(SiddhiqlParser::Basic_absent_pattern_sourceContext *ctx) = 0;

  virtual void enterPattern_collection_stateful_source(SiddhiqlParser::Pattern_collection_stateful_sourceContext *ctx) = 0;
  virtual void exitPattern_collection_stateful_source(SiddhiqlParser::Pattern_collection_stateful_sourceContext *ctx) = 0;

  virtual void enterStandard_stateful_source(SiddhiqlParser::Standard_stateful_sourceContext *ctx) = 0;
  virtual void exitStandard_stateful_source(SiddhiqlParser::Standard_stateful_sourceContext *ctx) = 0;

  virtual void enterBasic_source(SiddhiqlParser::Basic_sourceContext *ctx) = 0;
  virtual void exitBasic_source(SiddhiqlParser::Basic_sourceContext *ctx) = 0;

  virtual void enterBasic_source_stream_handlers(SiddhiqlParser::Basic_source_stream_handlersContext *ctx) = 0;
  virtual void exitBasic_source_stream_handlers(SiddhiqlParser::Basic_source_stream_handlersContext *ctx) = 0;

  virtual void enterBasic_source_stream_handler(SiddhiqlParser::Basic_source_stream_handlerContext *ctx) = 0;
  virtual void exitBasic_source_stream_handler(SiddhiqlParser::Basic_source_stream_handlerContext *ctx) = 0;

  virtual void enterSequence_stream(SiddhiqlParser::Sequence_streamContext *ctx) = 0;
  virtual void exitSequence_stream(SiddhiqlParser::Sequence_streamContext *ctx) = 0;

  virtual void enterEvery_sequence_source_chain(SiddhiqlParser::Every_sequence_source_chainContext *ctx) = 0;
  virtual void exitEvery_sequence_source_chain(SiddhiqlParser::Every_sequence_source_chainContext *ctx) = 0;

  virtual void enterEvery_absent_sequence_source_chain(SiddhiqlParser::Every_absent_sequence_source_chainContext *ctx) = 0;
  virtual void exitEvery_absent_sequence_source_chain(SiddhiqlParser::Every_absent_sequence_source_chainContext *ctx) = 0;

  virtual void enterAbsent_sequence_source_chain(SiddhiqlParser::Absent_sequence_source_chainContext *ctx) = 0;
  virtual void exitAbsent_sequence_source_chain(SiddhiqlParser::Absent_sequence_source_chainContext *ctx) = 0;

  virtual void enterLeft_absent_sequence_source(SiddhiqlParser::Left_absent_sequence_sourceContext *ctx) = 0;
  virtual void exitLeft_absent_sequence_source(SiddhiqlParser::Left_absent_sequence_sourceContext *ctx) = 0;

  virtual void enterRight_absent_sequence_source(SiddhiqlParser::Right_absent_sequence_sourceContext *ctx) = 0;
  virtual void exitRight_absent_sequence_source(SiddhiqlParser::Right_absent_sequence_sourceContext *ctx) = 0;

  virtual void enterSequence_source_chain(SiddhiqlParser::Sequence_source_chainContext *ctx) = 0;
  virtual void exitSequence_source_chain(SiddhiqlParser::Sequence_source_chainContext *ctx) = 0;

  virtual void enterSequence_source(SiddhiqlParser::Sequence_sourceContext *ctx) = 0;
  virtual void exitSequence_source(SiddhiqlParser::Sequence_sourceContext *ctx) = 0;

  virtual void enterSequence_collection_stateful_source(SiddhiqlParser::Sequence_collection_stateful_sourceContext *ctx) = 0;
  virtual void exitSequence_collection_stateful_source(SiddhiqlParser::Sequence_collection_stateful_sourceContext *ctx) = 0;

  virtual void enterAnonymous_stream(SiddhiqlParser::Anonymous_streamContext *ctx) = 0;
  virtual void exitAnonymous_stream(SiddhiqlParser::Anonymous_streamContext *ctx) = 0;

  virtual void enterFilter(SiddhiqlParser::FilterContext *ctx) = 0;
  virtual void exitFilter(SiddhiqlParser::FilterContext *ctx) = 0;

  virtual void enterStream_function(SiddhiqlParser::Stream_functionContext *ctx) = 0;
  virtual void exitStream_function(SiddhiqlParser::Stream_functionContext *ctx) = 0;

  virtual void enterWindow(SiddhiqlParser::WindowContext *ctx) = 0;
  virtual void exitWindow(SiddhiqlParser::WindowContext *ctx) = 0;

  virtual void enterGroup_by_query_selection(SiddhiqlParser::Group_by_query_selectionContext *ctx) = 0;
  virtual void exitGroup_by_query_selection(SiddhiqlParser::Group_by_query_selectionContext *ctx) = 0;

  virtual void enterQuery_section(SiddhiqlParser::Query_sectionContext *ctx) = 0;
  virtual void exitQuery_section(SiddhiqlParser::Query_sectionContext *ctx) = 0;

  virtual void enterGroup_by(SiddhiqlParser::Group_byContext *ctx) = 0;
  virtual void exitGroup_by(SiddhiqlParser::Group_byContext *ctx) = 0;

  virtual void enterHaving(SiddhiqlParser::HavingContext *ctx) = 0;
  virtual void exitHaving(SiddhiqlParser::HavingContext *ctx) = 0;

  virtual void enterOrder_by(SiddhiqlParser::Order_byContext *ctx) = 0;
  virtual void exitOrder_by(SiddhiqlParser::Order_byContext *ctx) = 0;

  virtual void enterOrder_by_reference(SiddhiqlParser::Order_by_referenceContext *ctx) = 0;
  virtual void exitOrder_by_reference(SiddhiqlParser::Order_by_referenceContext *ctx) = 0;

  virtual void enterOrder(SiddhiqlParser::OrderContext *ctx) = 0;
  virtual void exitOrder(SiddhiqlParser::OrderContext *ctx) = 0;

  virtual void enterLimit(SiddhiqlParser::LimitContext *ctx) = 0;
  virtual void exitLimit(SiddhiqlParser::LimitContext *ctx) = 0;

  virtual void enterOffset(SiddhiqlParser::OffsetContext *ctx) = 0;
  virtual void exitOffset(SiddhiqlParser::OffsetContext *ctx) = 0;

  virtual void enterQuery_output(SiddhiqlParser::Query_outputContext *ctx) = 0;
  virtual void exitQuery_output(SiddhiqlParser::Query_outputContext *ctx) = 0;

  virtual void enterStore_query_output(SiddhiqlParser::Store_query_outputContext *ctx) = 0;
  virtual void exitStore_query_output(SiddhiqlParser::Store_query_outputContext *ctx) = 0;

  virtual void enterSet_clause(SiddhiqlParser::Set_clauseContext *ctx) = 0;
  virtual void exitSet_clause(SiddhiqlParser::Set_clauseContext *ctx) = 0;

  virtual void enterSet_assignment(SiddhiqlParser::Set_assignmentContext *ctx) = 0;
  virtual void exitSet_assignment(SiddhiqlParser::Set_assignmentContext *ctx) = 0;

  virtual void enterOutput_event_type(SiddhiqlParser::Output_event_typeContext *ctx) = 0;
  virtual void exitOutput_event_type(SiddhiqlParser::Output_event_typeContext *ctx) = 0;

  virtual void enterOutput_rate(SiddhiqlParser::Output_rateContext *ctx) = 0;
  virtual void exitOutput_rate(SiddhiqlParser::Output_rateContext *ctx) = 0;

  virtual void enterOutput_rate_type(SiddhiqlParser::Output_rate_typeContext *ctx) = 0;
  virtual void exitOutput_rate_type(SiddhiqlParser::Output_rate_typeContext *ctx) = 0;

  virtual void enterFor_time(SiddhiqlParser::For_timeContext *ctx) = 0;
  virtual void exitFor_time(SiddhiqlParser::For_timeContext *ctx) = 0;

  virtual void enterWithin_time(SiddhiqlParser::Within_timeContext *ctx) = 0;
  virtual void exitWithin_time(SiddhiqlParser::Within_timeContext *ctx) = 0;

  virtual void enterWithin_time_range(SiddhiqlParser::Within_time_rangeContext *ctx) = 0;
  virtual void exitWithin_time_range(SiddhiqlParser::Within_time_rangeContext *ctx) = 0;

  virtual void enterPer(SiddhiqlParser::PerContext *ctx) = 0;
  virtual void exitPer(SiddhiqlParser::PerContext *ctx) = 0;

  virtual void enterOutput_attribute(SiddhiqlParser::Output_attributeContext *ctx) = 0;
  virtual void exitOutput_attribute(SiddhiqlParser::Output_attributeContext *ctx) = 0;

  virtual void enterAttribute(SiddhiqlParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(SiddhiqlParser::AttributeContext *ctx) = 0;

  virtual void enterExpression(SiddhiqlParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SiddhiqlParser::ExpressionContext *ctx) = 0;

  virtual void enterMultiplication_math_operation(SiddhiqlParser::Multiplication_math_operationContext *ctx) = 0;
  virtual void exitMultiplication_math_operation(SiddhiqlParser::Multiplication_math_operationContext *ctx) = 0;

  virtual void enterGreaterthan_lessthan_math_operation(SiddhiqlParser::Greaterthan_lessthan_math_operationContext *ctx) = 0;
  virtual void exitGreaterthan_lessthan_math_operation(SiddhiqlParser::Greaterthan_lessthan_math_operationContext *ctx) = 0;

  virtual void enterBasic_math_operation(SiddhiqlParser::Basic_math_operationContext *ctx) = 0;
  virtual void exitBasic_math_operation(SiddhiqlParser::Basic_math_operationContext *ctx) = 0;

  virtual void enterIn_math_operation(SiddhiqlParser::In_math_operationContext *ctx) = 0;
  virtual void exitIn_math_operation(SiddhiqlParser::In_math_operationContext *ctx) = 0;

  virtual void enterAddition_math_operation(SiddhiqlParser::Addition_math_operationContext *ctx) = 0;
  virtual void exitAddition_math_operation(SiddhiqlParser::Addition_math_operationContext *ctx) = 0;

  virtual void enterAnd_math_operation(SiddhiqlParser::And_math_operationContext *ctx) = 0;
  virtual void exitAnd_math_operation(SiddhiqlParser::And_math_operationContext *ctx) = 0;

  virtual void enterOr_math_operation(SiddhiqlParser::Or_math_operationContext *ctx) = 0;
  virtual void exitOr_math_operation(SiddhiqlParser::Or_math_operationContext *ctx) = 0;

  virtual void enterEquality_math_operation(SiddhiqlParser::Equality_math_operationContext *ctx) = 0;
  virtual void exitEquality_math_operation(SiddhiqlParser::Equality_math_operationContext *ctx) = 0;

  virtual void enterNot_math_operation(SiddhiqlParser::Not_math_operationContext *ctx) = 0;
  virtual void exitNot_math_operation(SiddhiqlParser::Not_math_operationContext *ctx) = 0;

  virtual void enterFunction_operation(SiddhiqlParser::Function_operationContext *ctx) = 0;
  virtual void exitFunction_operation(SiddhiqlParser::Function_operationContext *ctx) = 0;

  virtual void enterAttribute_list(SiddhiqlParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(SiddhiqlParser::Attribute_listContext *ctx) = 0;

  virtual void enterNull_check(SiddhiqlParser::Null_checkContext *ctx) = 0;
  virtual void exitNull_check(SiddhiqlParser::Null_checkContext *ctx) = 0;

  virtual void enterStream_reference(SiddhiqlParser::Stream_referenceContext *ctx) = 0;
  virtual void exitStream_reference(SiddhiqlParser::Stream_referenceContext *ctx) = 0;

  virtual void enterAttribute_reference(SiddhiqlParser::Attribute_referenceContext *ctx) = 0;
  virtual void exitAttribute_reference(SiddhiqlParser::Attribute_referenceContext *ctx) = 0;

  virtual void enterAttribute_index(SiddhiqlParser::Attribute_indexContext *ctx) = 0;
  virtual void exitAttribute_index(SiddhiqlParser::Attribute_indexContext *ctx) = 0;

  virtual void enterFunction_id(SiddhiqlParser::Function_idContext *ctx) = 0;
  virtual void exitFunction_id(SiddhiqlParser::Function_idContext *ctx) = 0;

  virtual void enterFunction_namespace(SiddhiqlParser::Function_namespaceContext *ctx) = 0;
  virtual void exitFunction_namespace(SiddhiqlParser::Function_namespaceContext *ctx) = 0;

  virtual void enterStream_id(SiddhiqlParser::Stream_idContext *ctx) = 0;
  virtual void exitStream_id(SiddhiqlParser::Stream_idContext *ctx) = 0;

  virtual void enterSource_id(SiddhiqlParser::Source_idContext *ctx) = 0;
  virtual void exitSource_id(SiddhiqlParser::Source_idContext *ctx) = 0;

  virtual void enterAlias(SiddhiqlParser::AliasContext *ctx) = 0;
  virtual void exitAlias(SiddhiqlParser::AliasContext *ctx) = 0;

  virtual void enterProperty_name(SiddhiqlParser::Property_nameContext *ctx) = 0;
  virtual void exitProperty_name(SiddhiqlParser::Property_nameContext *ctx) = 0;

  virtual void enterAttribute_name(SiddhiqlParser::Attribute_nameContext *ctx) = 0;
  virtual void exitAttribute_name(SiddhiqlParser::Attribute_nameContext *ctx) = 0;

  virtual void enterType(SiddhiqlParser::TypeContext *ctx) = 0;
  virtual void exitType(SiddhiqlParser::TypeContext *ctx) = 0;

  virtual void enterProperty_value(SiddhiqlParser::Property_valueContext *ctx) = 0;
  virtual void exitProperty_value(SiddhiqlParser::Property_valueContext *ctx) = 0;

  virtual void enterProperty_separator(SiddhiqlParser::Property_separatorContext *ctx) = 0;
  virtual void exitProperty_separator(SiddhiqlParser::Property_separatorContext *ctx) = 0;

  virtual void enterSource(SiddhiqlParser::SourceContext *ctx) = 0;
  virtual void exitSource(SiddhiqlParser::SourceContext *ctx) = 0;

  virtual void enterTarget(SiddhiqlParser::TargetContext *ctx) = 0;
  virtual void exitTarget(SiddhiqlParser::TargetContext *ctx) = 0;

  virtual void enterEvent(SiddhiqlParser::EventContext *ctx) = 0;
  virtual void exitEvent(SiddhiqlParser::EventContext *ctx) = 0;

  virtual void enterName(SiddhiqlParser::NameContext *ctx) = 0;
  virtual void exitName(SiddhiqlParser::NameContext *ctx) = 0;

  virtual void enterCollect(SiddhiqlParser::CollectContext *ctx) = 0;
  virtual void exitCollect(SiddhiqlParser::CollectContext *ctx) = 0;

  virtual void enterAttribute_type(SiddhiqlParser::Attribute_typeContext *ctx) = 0;
  virtual void exitAttribute_type(SiddhiqlParser::Attribute_typeContext *ctx) = 0;

  virtual void enterJoin(SiddhiqlParser::JoinContext *ctx) = 0;
  virtual void exitJoin(SiddhiqlParser::JoinContext *ctx) = 0;

  virtual void enterConstant_value(SiddhiqlParser::Constant_valueContext *ctx) = 0;
  virtual void exitConstant_value(SiddhiqlParser::Constant_valueContext *ctx) = 0;

  virtual void enterId(SiddhiqlParser::IdContext *ctx) = 0;
  virtual void exitId(SiddhiqlParser::IdContext *ctx) = 0;

  virtual void enterKeyword(SiddhiqlParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(SiddhiqlParser::KeywordContext *ctx) = 0;

  virtual void enterTime_value(SiddhiqlParser::Time_valueContext *ctx) = 0;
  virtual void exitTime_value(SiddhiqlParser::Time_valueContext *ctx) = 0;

  virtual void enterYear_value(SiddhiqlParser::Year_valueContext *ctx) = 0;
  virtual void exitYear_value(SiddhiqlParser::Year_valueContext *ctx) = 0;

  virtual void enterMonth_value(SiddhiqlParser::Month_valueContext *ctx) = 0;
  virtual void exitMonth_value(SiddhiqlParser::Month_valueContext *ctx) = 0;

  virtual void enterWeek_value(SiddhiqlParser::Week_valueContext *ctx) = 0;
  virtual void exitWeek_value(SiddhiqlParser::Week_valueContext *ctx) = 0;

  virtual void enterDay_value(SiddhiqlParser::Day_valueContext *ctx) = 0;
  virtual void exitDay_value(SiddhiqlParser::Day_valueContext *ctx) = 0;

  virtual void enterHour_value(SiddhiqlParser::Hour_valueContext *ctx) = 0;
  virtual void exitHour_value(SiddhiqlParser::Hour_valueContext *ctx) = 0;

  virtual void enterMinute_value(SiddhiqlParser::Minute_valueContext *ctx) = 0;
  virtual void exitMinute_value(SiddhiqlParser::Minute_valueContext *ctx) = 0;

  virtual void enterSecond_value(SiddhiqlParser::Second_valueContext *ctx) = 0;
  virtual void exitSecond_value(SiddhiqlParser::Second_valueContext *ctx) = 0;

  virtual void enterMillisecond_value(SiddhiqlParser::Millisecond_valueContext *ctx) = 0;
  virtual void exitMillisecond_value(SiddhiqlParser::Millisecond_valueContext *ctx) = 0;

  virtual void enterSigned_double_value(SiddhiqlParser::Signed_double_valueContext *ctx) = 0;
  virtual void exitSigned_double_value(SiddhiqlParser::Signed_double_valueContext *ctx) = 0;

  virtual void enterSigned_long_value(SiddhiqlParser::Signed_long_valueContext *ctx) = 0;
  virtual void exitSigned_long_value(SiddhiqlParser::Signed_long_valueContext *ctx) = 0;

  virtual void enterSigned_float_value(SiddhiqlParser::Signed_float_valueContext *ctx) = 0;
  virtual void exitSigned_float_value(SiddhiqlParser::Signed_float_valueContext *ctx) = 0;

  virtual void enterSigned_int_value(SiddhiqlParser::Signed_int_valueContext *ctx) = 0;
  virtual void exitSigned_int_value(SiddhiqlParser::Signed_int_valueContext *ctx) = 0;

  virtual void enterBool_value(SiddhiqlParser::Bool_valueContext *ctx) = 0;
  virtual void exitBool_value(SiddhiqlParser::Bool_valueContext *ctx) = 0;

  virtual void enterString_value(SiddhiqlParser::String_valueContext *ctx) = 0;
  virtual void exitString_value(SiddhiqlParser::String_valueContext *ctx) = 0;


};

