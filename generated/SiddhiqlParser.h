
	//import org.wso2.siddhi.query.compiler.exception.SiddhiParserException;


// Generated from Siddhiql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SiddhiqlParser : public antlr4::Parser {
public:
  enum {
    INT_LITERAL = 1, LONG_LITERAL = 2, FLOAT_LITERAL = 3, DOUBLE_LITERAL = 4, 
    COL = 5, SCOL = 6, DOT = 7, TRIPLE_DOT = 8, OPEN_PAR = 9, CLOSE_PAR = 10, 
    OPEN_SQUARE_BRACKETS = 11, CLOSE_SQUARE_BRACKETS = 12, COMMA = 13, ASSIGN = 14, 
    STAR = 15, PLUS = 16, QUESTION = 17, MINUS = 18, DIV = 19, MOD = 20, 
    LT = 21, LT_EQ = 22, GT = 23, GT_EQ = 24, EQ = 25, NOT_EQ = 26, AT_SYMBOL = 27, 
    FOLLOWED_BY = 28, HASH = 29, STREAM = 30, DEFINE = 31, FUNCTION = 32, 
    TRIGGER = 33, TABLE = 34, APP = 35, FROM = 36, PARTITION = 37, WINDOW = 38, 
    SELECT = 39, GROUP = 40, BY = 41, ORDER = 42, LIMIT = 43, OFFSET = 44, 
    ASC = 45, DESC = 46, HAVING = 47, INSERT = 48, DELETE = 49, UPDATE = 50, 
    SET = 51, RETURN = 52, EVENTS = 53, INTO = 54, OUTPUT = 55, EXPIRED = 56, 
    CURRENT = 57, SNAPSHOT = 58, FOR = 59, RAW = 60, OF = 61, AS = 62, AT = 63, 
    OR = 64, AND = 65, IN = 66, ON = 67, IS = 68, NOT = 69, WITHIN = 70, 
    WITH = 71, BEGIN = 72, END = 73, NUL = 74, EVERY = 75, LAST = 76, ALL = 77, 
    FIRST = 78, JOIN = 79, INNER = 80, OUTER = 81, RIGHT = 82, LEFT = 83, 
    FULL = 84, UNIDIRECTIONAL = 85, YEARS = 86, MONTHS = 87, WEEKS = 88, 
    DAYS = 89, HOURS = 90, MINUTES = 91, SECONDS = 92, MILLISECONDS = 93, 
    FALSE = 94, TRUE = 95, STRING = 96, INT = 97, LONG = 98, FLOAT = 99, 
    DOUBLE = 100, BOOL = 101, OBJECT = 102, AGGREGATION = 103, AGGREGATE = 104, 
    PER = 105, ID_QUOTES = 106, ID = 107, STRING_LITERAL = 108, SINGLE_LINE_COMMENT = 109, 
    MULTILINE_COMMENT = 110, SPACES = 111, UNEXPECTED_CHAR = 112, SCRIPT = 113
  };

  enum {
    RuleParse = 0, RuleError = 1, RuleSiddhi_app = 2, RuleExecution_element = 3, 
    RuleDefinition_stream_final = 4, RuleDefinition_stream = 5, RuleDefinition_table_final = 6, 
    RuleDefinition_table = 7, RuleDefinition_window_final = 8, RuleDefinition_window = 9, 
    RuleStore_query_final = 10, RuleStore_query = 11, RuleStore_input = 12, 
    RuleDefinition_function_final = 13, RuleDefinition_function = 14, RuleFunction_name = 15, 
    RuleLanguage_name = 16, RuleFunction_body = 17, RuleDefinition_trigger_final = 18, 
    RuleDefinition_trigger = 19, RuleTrigger_name = 20, RuleDefinition_aggregation_final = 21, 
    RuleDefinition_aggregation = 22, RuleAggregation_name = 23, RuleAggregation_time = 24, 
    RuleAggregation_time_duration = 25, RuleAggregation_time_range = 26, 
    RuleAggregation_time_interval = 27, RuleAnnotation = 28, RuleApp_annotation = 29, 
    RuleAnnotation_element = 30, RulePartition = 31, RulePartition_final = 32, 
    RulePartition_with_stream = 33, RuleCondition_ranges = 34, RuleCondition_range = 35, 
    RuleQuery_final = 36, RuleQuery = 37, RuleQuery_input = 38, RuleStandard_stream = 39, 
    RuleJoin_stream = 40, RuleJoin_source = 41, RulePattern_stream = 42, 
    RuleEvery_pattern_source_chain = 43, RulePattern_source_chain = 44, 
    RuleAbsent_pattern_source_chain = 45, RuleLeft_absent_pattern_source = 46, 
    RuleRight_absent_pattern_source = 47, RulePattern_source = 48, RuleLogical_stateful_source = 49, 
    RuleLogical_absent_stateful_source = 50, RuleEvery_absent_pattern_source = 51, 
    RuleBasic_absent_pattern_source = 52, RulePattern_collection_stateful_source = 53, 
    RuleStandard_stateful_source = 54, RuleBasic_source = 55, RuleBasic_source_stream_handlers = 56, 
    RuleBasic_source_stream_handler = 57, RuleSequence_stream = 58, RuleEvery_sequence_source_chain = 59, 
    RuleEvery_absent_sequence_source_chain = 60, RuleAbsent_sequence_source_chain = 61, 
    RuleLeft_absent_sequence_source = 62, RuleRight_absent_sequence_source = 63, 
    RuleSequence_source_chain = 64, RuleSequence_source = 65, RuleSequence_collection_stateful_source = 66, 
    RuleAnonymous_stream = 67, RuleFilter = 68, RuleStream_function = 69, 
    RuleWindow = 70, RuleGroup_by_query_selection = 71, RuleQuery_section = 72, 
    RuleGroup_by = 73, RuleHaving = 74, RuleOrder_by = 75, RuleOrder_by_reference = 76, 
    RuleOrder = 77, RuleLimit = 78, RuleOffset = 79, RuleQuery_output = 80, 
    RuleStore_query_output = 81, RuleSet_clause = 82, RuleSet_assignment = 83, 
    RuleOutput_event_type = 84, RuleOutput_rate = 85, RuleOutput_rate_type = 86, 
    RuleFor_time = 87, RuleWithin_time = 88, RuleWithin_time_range = 89, 
    RulePer = 90, RuleOutput_attribute = 91, RuleAttribute = 92, RuleExpression = 93, 
    RuleMath_operation = 94, RuleFunction_operation = 95, RuleAttribute_list = 96, 
    RuleNull_check = 97, RuleStream_reference = 98, RuleAttribute_reference = 99, 
    RuleAttribute_index = 100, RuleFunction_id = 101, RuleFunction_namespace = 102, 
    RuleStream_id = 103, RuleSource_id = 104, RuleAlias = 105, RuleProperty_name = 106, 
    RuleAttribute_name = 107, RuleType = 108, RuleProperty_value = 109, 
    RuleProperty_separator = 110, RuleSource = 111, RuleTarget = 112, RuleEvent = 113, 
    RuleName = 114, RuleCollect = 115, RuleAttribute_type = 116, RuleJoin = 117, 
    RuleConstant_value = 118, RuleId = 119, RuleKeyword = 120, RuleTime_value = 121, 
    RuleYear_value = 122, RuleMonth_value = 123, RuleWeek_value = 124, RuleDay_value = 125, 
    RuleHour_value = 126, RuleMinute_value = 127, RuleSecond_value = 128, 
    RuleMillisecond_value = 129, RuleSigned_double_value = 130, RuleSigned_long_value = 131, 
    RuleSigned_float_value = 132, RuleSigned_int_value = 133, RuleBool_value = 134, 
    RuleString_value = 135
  };

  SiddhiqlParser(antlr4::TokenStream *input);
  ~SiddhiqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ParseContext;
  class ErrorContext;
  class Siddhi_appContext;
  class Execution_elementContext;
  class Definition_stream_finalContext;
  class Definition_streamContext;
  class Definition_table_finalContext;
  class Definition_tableContext;
  class Definition_window_finalContext;
  class Definition_windowContext;
  class Store_query_finalContext;
  class Store_queryContext;
  class Store_inputContext;
  class Definition_function_finalContext;
  class Definition_functionContext;
  class Function_nameContext;
  class Language_nameContext;
  class Function_bodyContext;
  class Definition_trigger_finalContext;
  class Definition_triggerContext;
  class Trigger_nameContext;
  class Definition_aggregation_finalContext;
  class Definition_aggregationContext;
  class Aggregation_nameContext;
  class Aggregation_timeContext;
  class Aggregation_time_durationContext;
  class Aggregation_time_rangeContext;
  class Aggregation_time_intervalContext;
  class AnnotationContext;
  class App_annotationContext;
  class Annotation_elementContext;
  class PartitionContext;
  class Partition_finalContext;
  class Partition_with_streamContext;
  class Condition_rangesContext;
  class Condition_rangeContext;
  class Query_finalContext;
  class QueryContext;
  class Query_inputContext;
  class Standard_streamContext;
  class Join_streamContext;
  class Join_sourceContext;
  class Pattern_streamContext;
  class Every_pattern_source_chainContext;
  class Pattern_source_chainContext;
  class Absent_pattern_source_chainContext;
  class Left_absent_pattern_sourceContext;
  class Right_absent_pattern_sourceContext;
  class Pattern_sourceContext;
  class Logical_stateful_sourceContext;
  class Logical_absent_stateful_sourceContext;
  class Every_absent_pattern_sourceContext;
  class Basic_absent_pattern_sourceContext;
  class Pattern_collection_stateful_sourceContext;
  class Standard_stateful_sourceContext;
  class Basic_sourceContext;
  class Basic_source_stream_handlersContext;
  class Basic_source_stream_handlerContext;
  class Sequence_streamContext;
  class Every_sequence_source_chainContext;
  class Every_absent_sequence_source_chainContext;
  class Absent_sequence_source_chainContext;
  class Left_absent_sequence_sourceContext;
  class Right_absent_sequence_sourceContext;
  class Sequence_source_chainContext;
  class Sequence_sourceContext;
  class Sequence_collection_stateful_sourceContext;
  class Anonymous_streamContext;
  class FilterContext;
  class Stream_functionContext;
  class WindowContext;
  class Group_by_query_selectionContext;
  class Query_sectionContext;
  class Group_byContext;
  class HavingContext;
  class Order_byContext;
  class Order_by_referenceContext;
  class OrderContext;
  class LimitContext;
  class OffsetContext;
  class Query_outputContext;
  class Store_query_outputContext;
  class Set_clauseContext;
  class Set_assignmentContext;
  class Output_event_typeContext;
  class Output_rateContext;
  class Output_rate_typeContext;
  class For_timeContext;
  class Within_timeContext;
  class Within_time_rangeContext;
  class PerContext;
  class Output_attributeContext;
  class AttributeContext;
  class ExpressionContext;
  class Math_operationContext;
  class Function_operationContext;
  class Attribute_listContext;
  class Null_checkContext;
  class Stream_referenceContext;
  class Attribute_referenceContext;
  class Attribute_indexContext;
  class Function_idContext;
  class Function_namespaceContext;
  class Stream_idContext;
  class Source_idContext;
  class AliasContext;
  class Property_nameContext;
  class Attribute_nameContext;
  class TypeContext;
  class Property_valueContext;
  class Property_separatorContext;
  class SourceContext;
  class TargetContext;
  class EventContext;
  class NameContext;
  class CollectContext;
  class Attribute_typeContext;
  class JoinContext;
  class Constant_valueContext;
  class IdContext;
  class KeywordContext;
  class Time_valueContext;
  class Year_valueContext;
  class Month_valueContext;
  class Week_valueContext;
  class Day_valueContext;
  class Hour_valueContext;
  class Minute_valueContext;
  class Second_valueContext;
  class Millisecond_valueContext;
  class Signed_double_valueContext;
  class Signed_long_valueContext;
  class Signed_float_valueContext;
  class Signed_int_valueContext;
  class Bool_valueContext;
  class String_valueContext; 

  class  ParseContext : public antlr4::ParserRuleContext {
  public:
    ParseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Siddhi_appContext *siddhi_app();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParseContext* parse();

  class  ErrorContext : public antlr4::ParserRuleContext {
  public:
    ErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNEXPECTED_CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorContext* error();

  class  Siddhi_appContext : public antlr4::ParserRuleContext {
  public:
    Siddhi_appContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Definition_streamContext *> definition_stream();
    Definition_streamContext* definition_stream(size_t i);
    std::vector<Definition_tableContext *> definition_table();
    Definition_tableContext* definition_table(size_t i);
    std::vector<Definition_triggerContext *> definition_trigger();
    Definition_triggerContext* definition_trigger(size_t i);
    std::vector<Definition_functionContext *> definition_function();
    Definition_functionContext* definition_function(size_t i);
    std::vector<Definition_windowContext *> definition_window();
    Definition_windowContext* definition_window(size_t i);
    std::vector<Definition_aggregationContext *> definition_aggregation();
    Definition_aggregationContext* definition_aggregation(size_t i);
    std::vector<ErrorContext *> error();
    ErrorContext* error(size_t i);
    std::vector<App_annotationContext *> app_annotation();
    App_annotationContext* app_annotation(size_t i);
    std::vector<Execution_elementContext *> execution_element();
    Execution_elementContext* execution_element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Siddhi_appContext* siddhi_app();

  class  Execution_elementContext : public antlr4::ParserRuleContext {
  public:
    Execution_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    PartitionContext *partition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execution_elementContext* execution_element();

  class  Definition_stream_finalContext : public antlr4::ParserRuleContext {
  public:
    Definition_stream_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_streamContext *definition_stream();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_stream_finalContext* definition_stream_final();

  class  Definition_streamContext : public antlr4::ParserRuleContext {
  public:
    Definition_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *STREAM();
    SourceContext *source();
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);
    std::vector<Attribute_typeContext *> attribute_type();
    Attribute_typeContext* attribute_type(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_streamContext* definition_stream();

  class  Definition_table_finalContext : public antlr4::ParserRuleContext {
  public:
    Definition_table_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_tableContext *definition_table();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_table_finalContext* definition_table_final();

  class  Definition_tableContext : public antlr4::ParserRuleContext {
  public:
    Definition_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *TABLE();
    SourceContext *source();
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);
    std::vector<Attribute_typeContext *> attribute_type();
    Attribute_typeContext* attribute_type(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_tableContext* definition_table();

  class  Definition_window_finalContext : public antlr4::ParserRuleContext {
  public:
    Definition_window_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_windowContext *definition_window();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_window_finalContext* definition_window_final();

  class  Definition_windowContext : public antlr4::ParserRuleContext {
  public:
    Definition_windowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *WINDOW();
    SourceContext *source();
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);
    std::vector<Attribute_typeContext *> attribute_type();
    Attribute_typeContext* attribute_type(size_t i);
    Function_operationContext *function_operation();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();
    Output_event_typeContext *output_event_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_windowContext* definition_window();

  class  Store_query_finalContext : public antlr4::ParserRuleContext {
  public:
    Store_query_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Store_queryContext *store_query();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Store_query_finalContext* store_query_final();

  class  Store_queryContext : public antlr4::ParserRuleContext {
  public:
    Store_queryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    Store_inputContext *store_input();
    Query_sectionContext *query_section();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    TargetContext *target();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    Set_clauseContext *set_clause();
    Store_query_outputContext *store_query_output();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Store_queryContext* store_query();

  class  Store_inputContext : public antlr4::ParserRuleContext {
  public:
    Store_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Source_idContext *source_id();
    antlr4::tree::TerminalNode *AS();
    AliasContext *alias();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    Within_time_rangeContext *within_time_range();
    PerContext *per();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Store_inputContext* store_input();

  class  Definition_function_finalContext : public antlr4::ParserRuleContext {
  public:
    Definition_function_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_functionContext *definition_function();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_function_finalContext* definition_function_final();

  class  Definition_functionContext : public antlr4::ParserRuleContext {
  public:
    Definition_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    Language_nameContext *language_name();
    antlr4::tree::TerminalNode *RETURN();
    Attribute_typeContext *attribute_type();
    Function_bodyContext *function_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_functionContext* definition_function();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Language_nameContext : public antlr4::ParserRuleContext {
  public:
    Language_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Language_nameContext* language_name();

  class  Function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCRIPT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_bodyContext* function_body();

  class  Definition_trigger_finalContext : public antlr4::ParserRuleContext {
  public:
    Definition_trigger_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_triggerContext *definition_trigger();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_trigger_finalContext* definition_trigger_final();

  class  Definition_triggerContext : public antlr4::ParserRuleContext {
  public:
    Definition_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *EVERY();
    Time_valueContext *time_value();
    String_valueContext *string_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_triggerContext* definition_trigger();

  class  Trigger_nameContext : public antlr4::ParserRuleContext {
  public:
    Trigger_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_nameContext* trigger_name();

  class  Definition_aggregation_finalContext : public antlr4::ParserRuleContext {
  public:
    Definition_aggregation_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_aggregationContext *definition_aggregation();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_aggregation_finalContext* definition_aggregation_final();

  class  Definition_aggregationContext : public antlr4::ParserRuleContext {
  public:
    Definition_aggregationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *AGGREGATION();
    Aggregation_nameContext *aggregation_name();
    antlr4::tree::TerminalNode *FROM();
    Standard_streamContext *standard_stream();
    Group_by_query_selectionContext *group_by_query_selection();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *EVERY();
    Aggregation_timeContext *aggregation_time();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *BY();
    Attribute_referenceContext *attribute_reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_aggregationContext* definition_aggregation();

  class  Aggregation_nameContext : public antlr4::ParserRuleContext {
  public:
    Aggregation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregation_nameContext* aggregation_name();

  class  Aggregation_timeContext : public antlr4::ParserRuleContext {
  public:
    Aggregation_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Aggregation_time_rangeContext *aggregation_time_range();
    Aggregation_time_intervalContext *aggregation_time_interval();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregation_timeContext* aggregation_time();

  class  Aggregation_time_durationContext : public antlr4::ParserRuleContext {
  public:
    Aggregation_time_durationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *WEEKS();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *YEARS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregation_time_durationContext* aggregation_time_duration();

  class  Aggregation_time_rangeContext : public antlr4::ParserRuleContext {
  public:
    Aggregation_time_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Aggregation_time_durationContext *> aggregation_time_duration();
    Aggregation_time_durationContext* aggregation_time_duration(size_t i);
    antlr4::tree::TerminalNode *TRIPLE_DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregation_time_rangeContext* aggregation_time_range();

  class  Aggregation_time_intervalContext : public antlr4::ParserRuleContext {
  public:
    Aggregation_time_intervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Aggregation_time_durationContext *> aggregation_time_duration();
    Aggregation_time_durationContext* aggregation_time_duration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregation_time_intervalContext* aggregation_time_interval();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    std::vector<Annotation_elementContext *> annotation_element();
    Annotation_elementContext* annotation_element(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationContext* annotation();

  class  App_annotationContext : public antlr4::ParserRuleContext {
  public:
    App_annotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APP();
    NameContext *name();
    std::vector<Annotation_elementContext *> annotation_element();
    Annotation_elementContext* annotation_element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  App_annotationContext* app_annotation();

  class  Annotation_elementContext : public antlr4::ParserRuleContext {
  public:
    Annotation_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_valueContext *property_value();
    Property_nameContext *property_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Annotation_elementContext* annotation_element();

  class  PartitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *WITH();
    std::vector<Partition_with_streamContext *> partition_with_stream();
    Partition_with_streamContext* partition_with_stream(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<QueryContext *> query();
    QueryContext* query(size_t i);
    std::vector<ErrorContext *> error();
    ErrorContext* error(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionContext* partition();

  class  Partition_finalContext : public antlr4::ParserRuleContext {
  public:
    Partition_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionContext *partition();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_finalContext* partition_final();

  class  Partition_with_streamContext : public antlr4::ParserRuleContext {
  public:
    Partition_with_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *OF();
    Stream_idContext *stream_id();
    Condition_rangesContext *condition_ranges();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_with_streamContext* partition_with_stream();

  class  Condition_rangesContext : public antlr4::ParserRuleContext {
  public:
    Condition_rangesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Condition_rangeContext *> condition_range();
    Condition_rangeContext* condition_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_rangesContext* condition_ranges();

  class  Condition_rangeContext : public antlr4::ParserRuleContext {
  public:
    Condition_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    String_valueContext *string_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_rangeContext* condition_range();

  class  Query_finalContext : public antlr4::ParserRuleContext {
  public:
    Query_finalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_finalContext* query_final();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    Query_inputContext *query_input();
    Query_outputContext *query_output();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    Query_sectionContext *query_section();
    Output_rateContext *output_rate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  Query_inputContext : public antlr4::ParserRuleContext {
  public:
    Query_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Standard_streamContext *standard_stream();
    Join_streamContext *join_stream();
    Pattern_streamContext *pattern_stream();
    Sequence_streamContext *sequence_stream();
    Anonymous_streamContext *anonymous_stream();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_inputContext* query_input();

  class  Standard_streamContext : public antlr4::ParserRuleContext {
  public:
    SiddhiqlParser::Basic_source_stream_handlersContext *pre_window_handlers = nullptr;;
    SiddhiqlParser::Basic_source_stream_handlersContext *post_window_handlers = nullptr;;
    Standard_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    WindowContext *window();
    std::vector<Basic_source_stream_handlersContext *> basic_source_stream_handlers();
    Basic_source_stream_handlersContext* basic_source_stream_handlers(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Standard_streamContext* standard_stream();

  class  Join_streamContext : public antlr4::ParserRuleContext {
  public:
    SiddhiqlParser::Join_sourceContext *left_source = nullptr;;
    SiddhiqlParser::Join_sourceContext *right_source = nullptr;;
    antlr4::Token *right_unidirectional = nullptr;;
    antlr4::Token *left_unidirectional = nullptr;;
    Join_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Join_sourceContext *> join_source();
    Join_sourceContext* join_source(size_t i);
    JoinContext *join();
    antlr4::tree::TerminalNode *UNIDIRECTIONAL();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    Within_time_rangeContext *within_time_range();
    PerContext *per();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_streamContext* join_stream();

  class  Join_sourceContext : public antlr4::ParserRuleContext {
  public:
    Join_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    Basic_source_stream_handlersContext *basic_source_stream_handlers();
    WindowContext *window();
    antlr4::tree::TerminalNode *AS();
    AliasContext *alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_sourceContext* join_source();

  class  Pattern_streamContext : public antlr4::ParserRuleContext {
  public:
    Pattern_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Every_pattern_source_chainContext *every_pattern_source_chain();
    Absent_pattern_source_chainContext *absent_pattern_source_chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pattern_streamContext* pattern_stream();

  class  Every_pattern_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Every_pattern_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Every_pattern_source_chainContext *> every_pattern_source_chain();
    Every_pattern_source_chainContext* every_pattern_source_chain(size_t i);
    Within_timeContext *within_time();
    antlr4::tree::TerminalNode *EVERY();
    Pattern_source_chainContext *pattern_source_chain();
    Pattern_sourceContext *pattern_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Every_pattern_source_chainContext* every_pattern_source_chain();
  Every_pattern_source_chainContext* every_pattern_source_chain(int precedence);
  class  Pattern_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Pattern_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pattern_source_chainContext *> pattern_source_chain();
    Pattern_source_chainContext* pattern_source_chain(size_t i);
    Within_timeContext *within_time();
    Pattern_sourceContext *pattern_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pattern_source_chainContext* pattern_source_chain();
  Pattern_source_chainContext* pattern_source_chain(int precedence);
  class  Absent_pattern_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Absent_pattern_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Absent_pattern_source_chainContext *absent_pattern_source_chain();
    antlr4::tree::TerminalNode *EVERY();
    Within_timeContext *within_time();
    Every_absent_pattern_sourceContext *every_absent_pattern_source();
    Left_absent_pattern_sourceContext *left_absent_pattern_source();
    Right_absent_pattern_sourceContext *right_absent_pattern_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Absent_pattern_source_chainContext* absent_pattern_source_chain();

  class  Left_absent_pattern_sourceContext : public antlr4::ParserRuleContext {
  public:
    Left_absent_pattern_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Left_absent_pattern_sourceContext *> left_absent_pattern_source();
    Left_absent_pattern_sourceContext* left_absent_pattern_source(size_t i);
    antlr4::tree::TerminalNode *EVERY();
    Within_timeContext *within_time();
    Every_absent_pattern_sourceContext *every_absent_pattern_source();
    Every_pattern_source_chainContext *every_pattern_source_chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Left_absent_pattern_sourceContext* left_absent_pattern_source();
  Left_absent_pattern_sourceContext* left_absent_pattern_source(int precedence);
  class  Right_absent_pattern_sourceContext : public antlr4::ParserRuleContext {
  public:
    Right_absent_pattern_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Right_absent_pattern_sourceContext *> right_absent_pattern_source();
    Right_absent_pattern_sourceContext* right_absent_pattern_source(size_t i);
    antlr4::tree::TerminalNode *EVERY();
    Within_timeContext *within_time();
    Every_pattern_source_chainContext *every_pattern_source_chain();
    Every_absent_pattern_sourceContext *every_absent_pattern_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Right_absent_pattern_sourceContext* right_absent_pattern_source();
  Right_absent_pattern_sourceContext* right_absent_pattern_source(int precedence);
  class  Pattern_sourceContext : public antlr4::ParserRuleContext {
  public:
    Pattern_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_stateful_sourceContext *logical_stateful_source();
    Pattern_collection_stateful_sourceContext *pattern_collection_stateful_source();
    Standard_stateful_sourceContext *standard_stateful_source();
    Logical_absent_stateful_sourceContext *logical_absent_stateful_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pattern_sourceContext* pattern_source();

  class  Logical_stateful_sourceContext : public antlr4::ParserRuleContext {
  public:
    Logical_stateful_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Standard_stateful_sourceContext *> standard_stateful_source();
    Standard_stateful_sourceContext* standard_stateful_source(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_stateful_sourceContext* logical_stateful_source();

  class  Logical_absent_stateful_sourceContext : public antlr4::ParserRuleContext {
  public:
    Logical_absent_stateful_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_absent_stateful_sourceContext *logical_absent_stateful_source();
    Standard_stateful_sourceContext *standard_stateful_source();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();
    Basic_sourceContext *basic_source();
    std::vector<Basic_absent_pattern_sourceContext *> basic_absent_pattern_source();
    Basic_absent_pattern_sourceContext* basic_absent_pattern_source(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_absent_stateful_sourceContext* logical_absent_stateful_source();

  class  Every_absent_pattern_sourceContext : public antlr4::ParserRuleContext {
  public:
    Every_absent_pattern_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_absent_pattern_sourceContext *basic_absent_pattern_source();
    antlr4::tree::TerminalNode *EVERY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Every_absent_pattern_sourceContext* every_absent_pattern_source();

  class  Basic_absent_pattern_sourceContext : public antlr4::ParserRuleContext {
  public:
    Basic_absent_pattern_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    Basic_sourceContext *basic_source();
    For_timeContext *for_time();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_absent_pattern_sourceContext* basic_absent_pattern_source();

  class  Pattern_collection_stateful_sourceContext : public antlr4::ParserRuleContext {
  public:
    Pattern_collection_stateful_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Standard_stateful_sourceContext *standard_stateful_source();
    CollectContext *collect();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pattern_collection_stateful_sourceContext* pattern_collection_stateful_source();

  class  Standard_stateful_sourceContext : public antlr4::ParserRuleContext {
  public:
    Standard_stateful_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_sourceContext *basic_source();
    EventContext *event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Standard_stateful_sourceContext* standard_stateful_source();

  class  Basic_sourceContext : public antlr4::ParserRuleContext {
  public:
    Basic_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    Basic_source_stream_handlersContext *basic_source_stream_handlers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_sourceContext* basic_source();

  class  Basic_source_stream_handlersContext : public antlr4::ParserRuleContext {
  public:
    Basic_source_stream_handlersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Basic_source_stream_handlerContext *> basic_source_stream_handler();
    Basic_source_stream_handlerContext* basic_source_stream_handler(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_source_stream_handlersContext* basic_source_stream_handlers();

  class  Basic_source_stream_handlerContext : public antlr4::ParserRuleContext {
  public:
    Basic_source_stream_handlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FilterContext *filter();
    Stream_functionContext *stream_function();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_source_stream_handlerContext* basic_source_stream_handler();

  class  Sequence_streamContext : public antlr4::ParserRuleContext {
  public:
    Sequence_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Every_sequence_source_chainContext *every_sequence_source_chain();
    Every_absent_sequence_source_chainContext *every_absent_sequence_source_chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_streamContext* sequence_stream();

  class  Every_sequence_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Every_sequence_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_sourceContext *sequence_source();
    Sequence_source_chainContext *sequence_source_chain();
    antlr4::tree::TerminalNode *EVERY();
    Within_timeContext *within_time();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Every_sequence_source_chainContext* every_sequence_source_chain();

  class  Every_absent_sequence_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Every_absent_sequence_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Absent_sequence_source_chainContext *absent_sequence_source_chain();
    Sequence_source_chainContext *sequence_source_chain();
    antlr4::tree::TerminalNode *EVERY();
    Within_timeContext *within_time();
    Sequence_sourceContext *sequence_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Every_absent_sequence_source_chainContext* every_absent_sequence_source_chain();

  class  Absent_sequence_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Absent_sequence_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Absent_sequence_source_chainContext *absent_sequence_source_chain();
    Within_timeContext *within_time();
    Basic_absent_pattern_sourceContext *basic_absent_pattern_source();
    Left_absent_sequence_sourceContext *left_absent_sequence_source();
    Right_absent_sequence_sourceContext *right_absent_sequence_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Absent_sequence_source_chainContext* absent_sequence_source_chain();

  class  Left_absent_sequence_sourceContext : public antlr4::ParserRuleContext {
  public:
    Left_absent_sequence_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Left_absent_sequence_sourceContext *> left_absent_sequence_source();
    Left_absent_sequence_sourceContext* left_absent_sequence_source(size_t i);
    Within_timeContext *within_time();
    Basic_absent_pattern_sourceContext *basic_absent_pattern_source();
    Sequence_source_chainContext *sequence_source_chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Left_absent_sequence_sourceContext* left_absent_sequence_source();
  Left_absent_sequence_sourceContext* left_absent_sequence_source(int precedence);
  class  Right_absent_sequence_sourceContext : public antlr4::ParserRuleContext {
  public:
    Right_absent_sequence_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Right_absent_sequence_sourceContext *> right_absent_sequence_source();
    Right_absent_sequence_sourceContext* right_absent_sequence_source(size_t i);
    Within_timeContext *within_time();
    Sequence_source_chainContext *sequence_source_chain();
    Basic_absent_pattern_sourceContext *basic_absent_pattern_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Right_absent_sequence_sourceContext* right_absent_sequence_source();
  Right_absent_sequence_sourceContext* right_absent_sequence_source(int precedence);
  class  Sequence_source_chainContext : public antlr4::ParserRuleContext {
  public:
    Sequence_source_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_source_chainContext *> sequence_source_chain();
    Sequence_source_chainContext* sequence_source_chain(size_t i);
    Within_timeContext *within_time();
    Sequence_sourceContext *sequence_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_source_chainContext* sequence_source_chain();
  Sequence_source_chainContext* sequence_source_chain(int precedence);
  class  Sequence_sourceContext : public antlr4::ParserRuleContext {
  public:
    Sequence_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_stateful_sourceContext *logical_stateful_source();
    Sequence_collection_stateful_sourceContext *sequence_collection_stateful_source();
    Standard_stateful_sourceContext *standard_stateful_source();
    Logical_absent_stateful_sourceContext *logical_absent_stateful_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_sourceContext* sequence_source();

  class  Sequence_collection_stateful_sourceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *zero_or_more = nullptr;;
    antlr4::Token *zero_or_one = nullptr;;
    antlr4::Token *one_or_more = nullptr;;
    Sequence_collection_stateful_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Standard_stateful_sourceContext *standard_stateful_source();
    CollectContext *collect();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_collection_stateful_sourceContext* sequence_collection_stateful_source();

  class  Anonymous_streamContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_streamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Anonymous_streamContext *anonymous_stream();
    antlr4::tree::TerminalNode *FROM();
    Query_inputContext *query_input();
    antlr4::tree::TerminalNode *RETURN();
    Query_sectionContext *query_section();
    Output_rateContext *output_rate();
    Output_event_typeContext *output_event_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anonymous_streamContext* anonymous_stream();

  class  FilterContext : public antlr4::ParserRuleContext {
  public:
    FilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterContext* filter();

  class  Stream_functionContext : public antlr4::ParserRuleContext {
  public:
    Stream_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_operationContext *function_operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_functionContext* stream_function();

  class  WindowContext : public antlr4::ParserRuleContext {
  public:
    WindowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW();
    Function_operationContext *function_operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowContext* window();

  class  Group_by_query_selectionContext : public antlr4::ParserRuleContext {
  public:
    Group_by_query_selectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Group_byContext *group_by();
    std::vector<Output_attributeContext *> output_attribute();
    Output_attributeContext* output_attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_query_selectionContext* group_by_query_selection();

  class  Query_sectionContext : public antlr4::ParserRuleContext {
  public:
    Query_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Group_byContext *group_by();
    HavingContext *having();
    Order_byContext *order_by();
    LimitContext *limit();
    OffsetContext *offset();
    std::vector<Output_attributeContext *> output_attribute();
    Output_attributeContext* output_attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_sectionContext* query_section();

  class  Group_byContext : public antlr4::ParserRuleContext {
  public:
    Group_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<Attribute_referenceContext *> attribute_reference();
    Attribute_referenceContext* attribute_reference(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_byContext* group_by();

  class  HavingContext : public antlr4::ParserRuleContext {
  public:
    HavingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingContext* having();

  class  Order_byContext : public antlr4::ParserRuleContext {
  public:
    Order_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Order_by_referenceContext *> order_by_reference();
    Order_by_referenceContext* order_by_reference(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_byContext* order_by();

  class  Order_by_referenceContext : public antlr4::ParserRuleContext {
  public:
    Order_by_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_referenceContext *attribute_reference();
    OrderContext *order();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_referenceContext* order_by_reference();

  class  OrderContext : public antlr4::ParserRuleContext {
  public:
    OrderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderContext* order();

  class  LimitContext : public antlr4::ParserRuleContext {
  public:
    LimitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitContext* limit();

  class  OffsetContext : public antlr4::ParserRuleContext {
  public:
    OffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFFSET();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OffsetContext* offset();

  class  Query_outputContext : public antlr4::ParserRuleContext {
  public:
    Query_outputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    TargetContext *target();
    Output_event_typeContext *output_event_type();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OR();
    Set_clauseContext *set_clause();
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_outputContext* query_output();

  class  Store_query_outputContext : public antlr4::ParserRuleContext {
  public:
    Store_query_outputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    TargetContext *target();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *UPDATE();
    Set_clauseContext *set_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Store_query_outputContext* store_query_output();

  class  Set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<Set_assignmentContext *> set_assignment();
    Set_assignmentContext* set_assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_clauseContext* set_clause();

  class  Set_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Set_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_referenceContext *attribute_reference();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_assignmentContext* set_assignment();

  class  Output_event_typeContext : public antlr4::ParserRuleContext {
  public:
    Output_event_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *EXPIRED();
    antlr4::tree::TerminalNode *CURRENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_event_typeContext* output_event_type();

  class  Output_rateContext : public antlr4::ParserRuleContext {
  public:
    Output_rateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *EVERY();
    Time_valueContext *time_value();
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *EVENTS();
    Output_rate_typeContext *output_rate_type();
    antlr4::tree::TerminalNode *SNAPSHOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_rateContext* output_rate();

  class  Output_rate_typeContext : public antlr4::ParserRuleContext {
  public:
    Output_rate_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *FIRST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_rate_typeContext* output_rate_type();

  class  For_timeContext : public antlr4::ParserRuleContext {
  public:
    For_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Time_valueContext *time_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_timeContext* for_time();

  class  Within_timeContext : public antlr4::ParserRuleContext {
  public:
    Within_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHIN();
    Time_valueContext *time_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Within_timeContext* within_time();

  class  Within_time_rangeContext : public antlr4::ParserRuleContext {
  public:
    SiddhiqlParser::ExpressionContext *start_pattern = nullptr;;
    SiddhiqlParser::ExpressionContext *end_pattern = nullptr;;
    Within_time_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHIN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Within_time_rangeContext* within_time_range();

  class  PerContext : public antlr4::ParserRuleContext {
  public:
    PerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PER();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PerContext* per();

  class  Output_attributeContext : public antlr4::ParserRuleContext {
  public:
    Output_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *AS();
    Attribute_nameContext *attribute_name();
    Attribute_referenceContext *attribute_reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_attributeContext* output_attribute();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Math_operationContext *math_operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Math_operationContext *math_operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Math_operationContext : public antlr4::ParserRuleContext {
  public:
    Math_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Math_operationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Math_operationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Multiplication_math_operationContext : public Math_operationContext {
  public:
    Multiplication_math_operationContext(Math_operationContext *ctx);

    antlr4::Token *multiply = nullptr;
    antlr4::Token *devide = nullptr;
    antlr4::Token *mod = nullptr;
    std::vector<Math_operationContext *> math_operation();
    Math_operationContext* math_operation(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Greaterthan_lessthan_math_operationContext : public Math_operationContext {
  public:
    Greaterthan_lessthan_math_operationContext(Math_operationContext *ctx);

    antlr4::Token *gt_eq = nullptr;
    antlr4::Token *lt_eq = nullptr;
    antlr4::Token *gt = nullptr;
    antlr4::Token *lt = nullptr;
    std::vector<Math_operationContext *> math_operation();
    Math_operationContext* math_operation(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Basic_math_operationContext : public Math_operationContext {
  public:
    Basic_math_operationContext(Math_operationContext *ctx);

    Math_operationContext *math_operation();
    Null_checkContext *null_check();
    Function_operationContext *function_operation();
    Constant_valueContext *constant_value();
    Attribute_referenceContext *attribute_reference();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  In_math_operationContext : public Math_operationContext {
  public:
    In_math_operationContext(Math_operationContext *ctx);

    Math_operationContext *math_operation();
    antlr4::tree::TerminalNode *IN();
    NameContext *name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Addition_math_operationContext : public Math_operationContext {
  public:
    Addition_math_operationContext(Math_operationContext *ctx);

    antlr4::Token *add = nullptr;
    antlr4::Token *substract = nullptr;
    std::vector<Math_operationContext *> math_operation();
    Math_operationContext* math_operation(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  And_math_operationContext : public Math_operationContext {
  public:
    And_math_operationContext(Math_operationContext *ctx);

    std::vector<Math_operationContext *> math_operation();
    Math_operationContext* math_operation(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Or_math_operationContext : public Math_operationContext {
  public:
    Or_math_operationContext(Math_operationContext *ctx);

    std::vector<Math_operationContext *> math_operation();
    Math_operationContext* math_operation(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Equality_math_operationContext : public Math_operationContext {
  public:
    Equality_math_operationContext(Math_operationContext *ctx);

    antlr4::Token *eq = nullptr;
    antlr4::Token *not_equal = nullptr;
    std::vector<Math_operationContext *> math_operation();
    Math_operationContext* math_operation(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Not_math_operationContext : public Math_operationContext {
  public:
    Not_math_operationContext(Math_operationContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    Math_operationContext *math_operation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Math_operationContext* math_operation();
  Math_operationContext* math_operation(int precedence);
  class  Function_operationContext : public antlr4::ParserRuleContext {
  public:
    Function_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_idContext *function_id();
    Function_namespaceContext *function_namespace();
    Attribute_listContext *attribute_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_operationContext* function_operation();

  class  Attribute_listContext : public antlr4::ParserRuleContext {
  public:
    Attribute_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_listContext* attribute_list();

  class  Null_checkContext : public antlr4::ParserRuleContext {
  public:
    Null_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NUL();
    Stream_referenceContext *stream_reference();
    Attribute_referenceContext *attribute_reference();
    Function_operationContext *function_operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_checkContext* null_check();

  class  Stream_referenceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *hash = nullptr;;
    Stream_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Attribute_indexContext *attribute_index();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_referenceContext* stream_reference();

  class  Attribute_referenceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *hash1 = nullptr;;
    SiddhiqlParser::NameContext *name1 = nullptr;;
    SiddhiqlParser::Attribute_indexContext *attribute_index1 = nullptr;;
    antlr4::Token *hash2 = nullptr;;
    SiddhiqlParser::NameContext *name2 = nullptr;;
    SiddhiqlParser::Attribute_indexContext *attribute_index2 = nullptr;;
    Attribute_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_nameContext *attribute_name();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<Attribute_indexContext *> attribute_index();
    Attribute_indexContext* attribute_index(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_referenceContext* attribute_reference();

  class  Attribute_indexContext : public antlr4::ParserRuleContext {
  public:
    Attribute_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_indexContext* attribute_index();

  class  Function_idContext : public antlr4::ParserRuleContext {
  public:
    Function_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_idContext* function_id();

  class  Function_namespaceContext : public antlr4::ParserRuleContext {
  public:
    Function_namespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_namespaceContext* function_namespace();

  class  Stream_idContext : public antlr4::ParserRuleContext {
  public:
    Stream_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_idContext* stream_id();

  class  Source_idContext : public antlr4::ParserRuleContext {
  public:
    Source_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_idContext* source_id();

  class  AliasContext : public antlr4::ParserRuleContext {
  public:
    AliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasContext* alias();

  class  Property_nameContext : public antlr4::ParserRuleContext {
  public:
    Property_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<Property_separatorContext *> property_separator();
    Property_separatorContext* property_separator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_nameContext* property_name();

  class  Attribute_nameContext : public antlr4::ParserRuleContext {
  public:
    Attribute_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_nameContext* attribute_name();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Property_valueContext : public antlr4::ParserRuleContext {
  public:
    Property_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_valueContext *string_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_valueContext* property_value();

  class  Property_separatorContext : public antlr4::ParserRuleContext {
  public:
    Property_separatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *COL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_separatorContext* property_separator();

  class  SourceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *inner = nullptr;;
    SourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Stream_idContext *stream_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceContext* source();

  class  TargetContext : public antlr4::ParserRuleContext {
  public:
    TargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetContext* target();

  class  EventContext : public antlr4::ParserRuleContext {
  public:
    EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventContext* event();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    KeywordContext *keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  CollectContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *start = nullptr;;
    antlr4::Token *end = nullptr;;
    CollectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT_LITERAL();
    antlr4::tree::TerminalNode* INT_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollectContext* collect();

  class  Attribute_typeContext : public antlr4::ParserRuleContext {
  public:
    Attribute_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *OBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_typeContext* attribute_type();

  class  JoinContext : public antlr4::ParserRuleContext {
  public:
    JoinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *INNER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinContext* join();

  class  Constant_valueContext : public antlr4::ParserRuleContext {
  public:
    Constant_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_valueContext *bool_value();
    Signed_double_valueContext *signed_double_value();
    Signed_float_valueContext *signed_float_value();
    Signed_long_valueContext *signed_long_value();
    Signed_int_valueContext *signed_int_value();
    Time_valueContext *time_value();
    String_valueContext *string_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_valueContext* constant_value();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_QUOTES();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdContext* id();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APP();
    antlr4::tree::TerminalNode *STREAM();
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *EXPIRED();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *RAW();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *NUL();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *UNIDIRECTIONAL();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *WEEKS();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *OBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  Time_valueContext : public antlr4::ParserRuleContext {
  public:
    Time_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Year_valueContext *year_value();
    Month_valueContext *month_value();
    Week_valueContext *week_value();
    Day_valueContext *day_value();
    Hour_valueContext *hour_value();
    Minute_valueContext *minute_value();
    Second_valueContext *second_value();
    Millisecond_valueContext *millisecond_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_valueContext* time_value();

  class  Year_valueContext : public antlr4::ParserRuleContext {
  public:
    Year_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *YEARS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Year_valueContext* year_value();

  class  Month_valueContext : public antlr4::ParserRuleContext {
  public:
    Month_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *MONTHS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Month_valueContext* month_value();

  class  Week_valueContext : public antlr4::ParserRuleContext {
  public:
    Week_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *WEEKS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Week_valueContext* week_value();

  class  Day_valueContext : public antlr4::ParserRuleContext {
  public:
    Day_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *DAYS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Day_valueContext* day_value();

  class  Hour_valueContext : public antlr4::ParserRuleContext {
  public:
    Hour_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *HOURS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hour_valueContext* hour_value();

  class  Minute_valueContext : public antlr4::ParserRuleContext {
  public:
    Minute_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *MINUTES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Minute_valueContext* minute_value();

  class  Second_valueContext : public antlr4::ParserRuleContext {
  public:
    Second_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *SECONDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Second_valueContext* second_value();

  class  Millisecond_valueContext : public antlr4::ParserRuleContext {
  public:
    Millisecond_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *MILLISECONDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Millisecond_valueContext* millisecond_value();

  class  Signed_double_valueContext : public antlr4::ParserRuleContext {
  public:
    Signed_double_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_double_valueContext* signed_double_value();

  class  Signed_long_valueContext : public antlr4::ParserRuleContext {
  public:
    Signed_long_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LONG_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_long_valueContext* signed_long_value();

  class  Signed_float_valueContext : public antlr4::ParserRuleContext {
  public:
    Signed_float_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_float_valueContext* signed_float_value();

  class  Signed_int_valueContext : public antlr4::ParserRuleContext {
  public:
    Signed_int_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_int_valueContext* signed_int_value();

  class  Bool_valueContext : public antlr4::ParserRuleContext {
  public:
    Bool_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_valueContext* bool_value();

  class  String_valueContext : public antlr4::ParserRuleContext {
  public:
    String_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_valueContext* string_value();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool every_pattern_source_chainSempred(Every_pattern_source_chainContext *_localctx, size_t predicateIndex);
  bool pattern_source_chainSempred(Pattern_source_chainContext *_localctx, size_t predicateIndex);
  bool left_absent_pattern_sourceSempred(Left_absent_pattern_sourceContext *_localctx, size_t predicateIndex);
  bool right_absent_pattern_sourceSempred(Right_absent_pattern_sourceContext *_localctx, size_t predicateIndex);
  bool left_absent_sequence_sourceSempred(Left_absent_sequence_sourceContext *_localctx, size_t predicateIndex);
  bool right_absent_sequence_sourceSempred(Right_absent_sequence_sourceContext *_localctx, size_t predicateIndex);
  bool sequence_source_chainSempred(Sequence_source_chainContext *_localctx, size_t predicateIndex);
  bool math_operationSempred(Math_operationContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

