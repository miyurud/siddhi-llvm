
	//import org.wso2.siddhi.query.compiler.exception.SiddhiParserException;


// Generated from Siddhiql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SiddhiqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SiddhiqlParser.
 */
class  SiddhiqlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SiddhiqlParser.
   */
    virtual antlrcpp::Any visitParse(SiddhiqlParser::ParseContext *context) = 0;

    virtual antlrcpp::Any visitError(SiddhiqlParser::ErrorContext *context) = 0;

    virtual antlrcpp::Any visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *context) = 0;

    virtual antlrcpp::Any visitExecution_element(SiddhiqlParser::Execution_elementContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_stream_final(SiddhiqlParser::Definition_stream_finalContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_stream(SiddhiqlParser::Definition_streamContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_table_final(SiddhiqlParser::Definition_table_finalContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_table(SiddhiqlParser::Definition_tableContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_window_final(SiddhiqlParser::Definition_window_finalContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_window(SiddhiqlParser::Definition_windowContext *context) = 0;

    virtual antlrcpp::Any visitStore_query_final(SiddhiqlParser::Store_query_finalContext *context) = 0;

    virtual antlrcpp::Any visitStore_query(SiddhiqlParser::Store_queryContext *context) = 0;

    virtual antlrcpp::Any visitStore_input(SiddhiqlParser::Store_inputContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_function_final(SiddhiqlParser::Definition_function_finalContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_function(SiddhiqlParser::Definition_functionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(SiddhiqlParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitLanguage_name(SiddhiqlParser::Language_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_body(SiddhiqlParser::Function_bodyContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_trigger_final(SiddhiqlParser::Definition_trigger_finalContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_trigger(SiddhiqlParser::Definition_triggerContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_name(SiddhiqlParser::Trigger_nameContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_aggregation_final(SiddhiqlParser::Definition_aggregation_finalContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_aggregation(SiddhiqlParser::Definition_aggregationContext *context) = 0;

    virtual antlrcpp::Any visitAggregation_name(SiddhiqlParser::Aggregation_nameContext *context) = 0;

    virtual antlrcpp::Any visitAggregation_time(SiddhiqlParser::Aggregation_timeContext *context) = 0;

    virtual antlrcpp::Any visitAggregation_time_duration(SiddhiqlParser::Aggregation_time_durationContext *context) = 0;

    virtual antlrcpp::Any visitAggregation_time_range(SiddhiqlParser::Aggregation_time_rangeContext *context) = 0;

    virtual antlrcpp::Any visitAggregation_time_interval(SiddhiqlParser::Aggregation_time_intervalContext *context) = 0;

    virtual antlrcpp::Any visitAnnotation(SiddhiqlParser::AnnotationContext *context) = 0;

    virtual antlrcpp::Any visitApp_annotation(SiddhiqlParser::App_annotationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotation_element(SiddhiqlParser::Annotation_elementContext *context) = 0;

    virtual antlrcpp::Any visitPartition(SiddhiqlParser::PartitionContext *context) = 0;

    virtual antlrcpp::Any visitPartition_final(SiddhiqlParser::Partition_finalContext *context) = 0;

    virtual antlrcpp::Any visitPartition_with_stream(SiddhiqlParser::Partition_with_streamContext *context) = 0;

    virtual antlrcpp::Any visitCondition_ranges(SiddhiqlParser::Condition_rangesContext *context) = 0;

    virtual antlrcpp::Any visitCondition_range(SiddhiqlParser::Condition_rangeContext *context) = 0;

    virtual antlrcpp::Any visitQuery_final(SiddhiqlParser::Query_finalContext *context) = 0;

    virtual antlrcpp::Any visitQuery(SiddhiqlParser::QueryContext *context) = 0;

    virtual antlrcpp::Any visitQuery_input(SiddhiqlParser::Query_inputContext *context) = 0;

    virtual antlrcpp::Any visitStandard_stream(SiddhiqlParser::Standard_streamContext *context) = 0;

    virtual antlrcpp::Any visitJoin_stream(SiddhiqlParser::Join_streamContext *context) = 0;

    virtual antlrcpp::Any visitJoin_source(SiddhiqlParser::Join_sourceContext *context) = 0;

    virtual antlrcpp::Any visitPattern_stream(SiddhiqlParser::Pattern_streamContext *context) = 0;

    virtual antlrcpp::Any visitEvery_pattern_source_chain(SiddhiqlParser::Every_pattern_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitPattern_source_chain(SiddhiqlParser::Pattern_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitAbsent_pattern_source_chain(SiddhiqlParser::Absent_pattern_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitLeft_absent_pattern_source(SiddhiqlParser::Left_absent_pattern_sourceContext *context) = 0;

    virtual antlrcpp::Any visitRight_absent_pattern_source(SiddhiqlParser::Right_absent_pattern_sourceContext *context) = 0;

    virtual antlrcpp::Any visitPattern_source(SiddhiqlParser::Pattern_sourceContext *context) = 0;

    virtual antlrcpp::Any visitLogical_stateful_source(SiddhiqlParser::Logical_stateful_sourceContext *context) = 0;

    virtual antlrcpp::Any visitLogical_absent_stateful_source(SiddhiqlParser::Logical_absent_stateful_sourceContext *context) = 0;

    virtual antlrcpp::Any visitEvery_absent_pattern_source(SiddhiqlParser::Every_absent_pattern_sourceContext *context) = 0;

    virtual antlrcpp::Any visitBasic_absent_pattern_source(SiddhiqlParser::Basic_absent_pattern_sourceContext *context) = 0;

    virtual antlrcpp::Any visitPattern_collection_stateful_source(SiddhiqlParser::Pattern_collection_stateful_sourceContext *context) = 0;

    virtual antlrcpp::Any visitStandard_stateful_source(SiddhiqlParser::Standard_stateful_sourceContext *context) = 0;

    virtual antlrcpp::Any visitBasic_source(SiddhiqlParser::Basic_sourceContext *context) = 0;

    virtual antlrcpp::Any visitBasic_source_stream_handlers(SiddhiqlParser::Basic_source_stream_handlersContext *context) = 0;

    virtual antlrcpp::Any visitBasic_source_stream_handler(SiddhiqlParser::Basic_source_stream_handlerContext *context) = 0;

    virtual antlrcpp::Any visitSequence_stream(SiddhiqlParser::Sequence_streamContext *context) = 0;

    virtual antlrcpp::Any visitEvery_sequence_source_chain(SiddhiqlParser::Every_sequence_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitEvery_absent_sequence_source_chain(SiddhiqlParser::Every_absent_sequence_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitAbsent_sequence_source_chain(SiddhiqlParser::Absent_sequence_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitLeft_absent_sequence_source(SiddhiqlParser::Left_absent_sequence_sourceContext *context) = 0;

    virtual antlrcpp::Any visitRight_absent_sequence_source(SiddhiqlParser::Right_absent_sequence_sourceContext *context) = 0;

    virtual antlrcpp::Any visitSequence_source_chain(SiddhiqlParser::Sequence_source_chainContext *context) = 0;

    virtual antlrcpp::Any visitSequence_source(SiddhiqlParser::Sequence_sourceContext *context) = 0;

    virtual antlrcpp::Any visitSequence_collection_stateful_source(SiddhiqlParser::Sequence_collection_stateful_sourceContext *context) = 0;

    virtual antlrcpp::Any visitAnonymous_stream(SiddhiqlParser::Anonymous_streamContext *context) = 0;

    virtual antlrcpp::Any visitFilter(SiddhiqlParser::FilterContext *context) = 0;

    virtual antlrcpp::Any visitStream_function(SiddhiqlParser::Stream_functionContext *context) = 0;

    virtual antlrcpp::Any visitWindow(SiddhiqlParser::WindowContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_query_selection(SiddhiqlParser::Group_by_query_selectionContext *context) = 0;

    virtual antlrcpp::Any visitQuery_section(SiddhiqlParser::Query_sectionContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by(SiddhiqlParser::Group_byContext *context) = 0;

    virtual antlrcpp::Any visitHaving(SiddhiqlParser::HavingContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by(SiddhiqlParser::Order_byContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_reference(SiddhiqlParser::Order_by_referenceContext *context) = 0;

    virtual antlrcpp::Any visitOrder(SiddhiqlParser::OrderContext *context) = 0;

    virtual antlrcpp::Any visitLimit(SiddhiqlParser::LimitContext *context) = 0;

    virtual antlrcpp::Any visitOffset(SiddhiqlParser::OffsetContext *context) = 0;

    virtual antlrcpp::Any visitQuery_output(SiddhiqlParser::Query_outputContext *context) = 0;

    virtual antlrcpp::Any visitStore_query_output(SiddhiqlParser::Store_query_outputContext *context) = 0;

    virtual antlrcpp::Any visitSet_clause(SiddhiqlParser::Set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSet_assignment(SiddhiqlParser::Set_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitOutput_event_type(SiddhiqlParser::Output_event_typeContext *context) = 0;

    virtual antlrcpp::Any visitOutput_rate(SiddhiqlParser::Output_rateContext *context) = 0;

    virtual antlrcpp::Any visitOutput_rate_type(SiddhiqlParser::Output_rate_typeContext *context) = 0;

    virtual antlrcpp::Any visitFor_time(SiddhiqlParser::For_timeContext *context) = 0;

    virtual antlrcpp::Any visitWithin_time(SiddhiqlParser::Within_timeContext *context) = 0;

    virtual antlrcpp::Any visitWithin_time_range(SiddhiqlParser::Within_time_rangeContext *context) = 0;

    virtual antlrcpp::Any visitPer(SiddhiqlParser::PerContext *context) = 0;

    virtual antlrcpp::Any visitOutput_attribute(SiddhiqlParser::Output_attributeContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(SiddhiqlParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SiddhiqlParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplication_math_operation(SiddhiqlParser::Multiplication_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitGreaterthan_lessthan_math_operation(SiddhiqlParser::Greaterthan_lessthan_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitBasic_math_operation(SiddhiqlParser::Basic_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitIn_math_operation(SiddhiqlParser::In_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitAddition_math_operation(SiddhiqlParser::Addition_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitAnd_math_operation(SiddhiqlParser::And_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitOr_math_operation(SiddhiqlParser::Or_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitEquality_math_operation(SiddhiqlParser::Equality_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitNot_math_operation(SiddhiqlParser::Not_math_operationContext *context) = 0;

    virtual antlrcpp::Any visitFunction_operation(SiddhiqlParser::Function_operationContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_list(SiddhiqlParser::Attribute_listContext *context) = 0;

    virtual antlrcpp::Any visitNull_check(SiddhiqlParser::Null_checkContext *context) = 0;

    virtual antlrcpp::Any visitStream_reference(SiddhiqlParser::Stream_referenceContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_reference(SiddhiqlParser::Attribute_referenceContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_index(SiddhiqlParser::Attribute_indexContext *context) = 0;

    virtual antlrcpp::Any visitFunction_id(SiddhiqlParser::Function_idContext *context) = 0;

    virtual antlrcpp::Any visitFunction_namespace(SiddhiqlParser::Function_namespaceContext *context) = 0;

    virtual antlrcpp::Any visitStream_id(SiddhiqlParser::Stream_idContext *context) = 0;

    virtual antlrcpp::Any visitSource_id(SiddhiqlParser::Source_idContext *context) = 0;

    virtual antlrcpp::Any visitAlias(SiddhiqlParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitProperty_name(SiddhiqlParser::Property_nameContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_name(SiddhiqlParser::Attribute_nameContext *context) = 0;

    virtual antlrcpp::Any visitType(SiddhiqlParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitProperty_value(SiddhiqlParser::Property_valueContext *context) = 0;

    virtual antlrcpp::Any visitProperty_separator(SiddhiqlParser::Property_separatorContext *context) = 0;

    virtual antlrcpp::Any visitSource(SiddhiqlParser::SourceContext *context) = 0;

    virtual antlrcpp::Any visitTarget(SiddhiqlParser::TargetContext *context) = 0;

    virtual antlrcpp::Any visitEvent(SiddhiqlParser::EventContext *context) = 0;

    virtual antlrcpp::Any visitName(SiddhiqlParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitCollect(SiddhiqlParser::CollectContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_type(SiddhiqlParser::Attribute_typeContext *context) = 0;

    virtual antlrcpp::Any visitJoin(SiddhiqlParser::JoinContext *context) = 0;

    virtual antlrcpp::Any visitConstant_value(SiddhiqlParser::Constant_valueContext *context) = 0;

    virtual antlrcpp::Any visitId(SiddhiqlParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(SiddhiqlParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitTime_value(SiddhiqlParser::Time_valueContext *context) = 0;

    virtual antlrcpp::Any visitYear_value(SiddhiqlParser::Year_valueContext *context) = 0;

    virtual antlrcpp::Any visitMonth_value(SiddhiqlParser::Month_valueContext *context) = 0;

    virtual antlrcpp::Any visitWeek_value(SiddhiqlParser::Week_valueContext *context) = 0;

    virtual antlrcpp::Any visitDay_value(SiddhiqlParser::Day_valueContext *context) = 0;

    virtual antlrcpp::Any visitHour_value(SiddhiqlParser::Hour_valueContext *context) = 0;

    virtual antlrcpp::Any visitMinute_value(SiddhiqlParser::Minute_valueContext *context) = 0;

    virtual antlrcpp::Any visitSecond_value(SiddhiqlParser::Second_valueContext *context) = 0;

    virtual antlrcpp::Any visitMillisecond_value(SiddhiqlParser::Millisecond_valueContext *context) = 0;

    virtual antlrcpp::Any visitSigned_double_value(SiddhiqlParser::Signed_double_valueContext *context) = 0;

    virtual antlrcpp::Any visitSigned_long_value(SiddhiqlParser::Signed_long_valueContext *context) = 0;

    virtual antlrcpp::Any visitSigned_float_value(SiddhiqlParser::Signed_float_valueContext *context) = 0;

    virtual antlrcpp::Any visitSigned_int_value(SiddhiqlParser::Signed_int_valueContext *context) = 0;

    virtual antlrcpp::Any visitBool_value(SiddhiqlParser::Bool_valueContext *context) = 0;

    virtual antlrcpp::Any visitString_value(SiddhiqlParser::String_valueContext *context) = 0;


};

