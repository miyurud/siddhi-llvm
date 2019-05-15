
	//import org.wso2.siddhi.query.compiler.exception.SiddhiParserException;


// Generated from Siddhiql.g4 by ANTLR 4.7.1


#include "SiddhiqlVisitor.h"

#include "SiddhiqlParser.h"


using namespace antlrcpp;
using namespace antlr4;

SiddhiqlParser::SiddhiqlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SiddhiqlParser::~SiddhiqlParser() {
  delete _interpreter;
}

std::string SiddhiqlParser::getGrammarFileName() const {
  return "Siddhiql.g4";
}

const std::vector<std::string>& SiddhiqlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SiddhiqlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParseContext ------------------------------------------------------------------

SiddhiqlParser::ParseContext::ParseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Siddhi_appContext* SiddhiqlParser::ParseContext::siddhi_app() {
  return getRuleContext<SiddhiqlParser::Siddhi_appContext>(0);
}

tree::TerminalNode* SiddhiqlParser::ParseContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::ParseContext::getRuleIndex() const {
  return SiddhiqlParser::RuleParse;
}

antlrcpp::Any SiddhiqlParser::ParseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitParse(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::ParseContext* SiddhiqlParser::parse() {
  ParseContext *_localctx = _tracker.createInstance<ParseContext>(_ctx, getState());
  enterRule(_localctx, 0, SiddhiqlParser::RuleParse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    siddhi_app();
    setState(287);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorContext ------------------------------------------------------------------

SiddhiqlParser::ErrorContext::ErrorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::ErrorContext::UNEXPECTED_CHAR() {
  return getToken(SiddhiqlParser::UNEXPECTED_CHAR, 0);
}


size_t SiddhiqlParser::ErrorContext::getRuleIndex() const {
  return SiddhiqlParser::RuleError;
}

antlrcpp::Any SiddhiqlParser::ErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitError(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::ErrorContext* SiddhiqlParser::error() {
  ErrorContext *_localctx = _tracker.createInstance<ErrorContext>(_ctx, getState());
  enterRule(_localctx, 2, SiddhiqlParser::RuleError);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(SiddhiqlParser::UNEXPECTED_CHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Siddhi_appContext ------------------------------------------------------------------

SiddhiqlParser::Siddhi_appContext::Siddhi_appContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Definition_streamContext *> SiddhiqlParser::Siddhi_appContext::definition_stream() {
  return getRuleContexts<SiddhiqlParser::Definition_streamContext>();
}

SiddhiqlParser::Definition_streamContext* SiddhiqlParser::Siddhi_appContext::definition_stream(size_t i) {
  return getRuleContext<SiddhiqlParser::Definition_streamContext>(i);
}

std::vector<SiddhiqlParser::Definition_tableContext *> SiddhiqlParser::Siddhi_appContext::definition_table() {
  return getRuleContexts<SiddhiqlParser::Definition_tableContext>();
}

SiddhiqlParser::Definition_tableContext* SiddhiqlParser::Siddhi_appContext::definition_table(size_t i) {
  return getRuleContext<SiddhiqlParser::Definition_tableContext>(i);
}

std::vector<SiddhiqlParser::Definition_triggerContext *> SiddhiqlParser::Siddhi_appContext::definition_trigger() {
  return getRuleContexts<SiddhiqlParser::Definition_triggerContext>();
}

SiddhiqlParser::Definition_triggerContext* SiddhiqlParser::Siddhi_appContext::definition_trigger(size_t i) {
  return getRuleContext<SiddhiqlParser::Definition_triggerContext>(i);
}

std::vector<SiddhiqlParser::Definition_functionContext *> SiddhiqlParser::Siddhi_appContext::definition_function() {
  return getRuleContexts<SiddhiqlParser::Definition_functionContext>();
}

SiddhiqlParser::Definition_functionContext* SiddhiqlParser::Siddhi_appContext::definition_function(size_t i) {
  return getRuleContext<SiddhiqlParser::Definition_functionContext>(i);
}

std::vector<SiddhiqlParser::Definition_windowContext *> SiddhiqlParser::Siddhi_appContext::definition_window() {
  return getRuleContexts<SiddhiqlParser::Definition_windowContext>();
}

SiddhiqlParser::Definition_windowContext* SiddhiqlParser::Siddhi_appContext::definition_window(size_t i) {
  return getRuleContext<SiddhiqlParser::Definition_windowContext>(i);
}

std::vector<SiddhiqlParser::Definition_aggregationContext *> SiddhiqlParser::Siddhi_appContext::definition_aggregation() {
  return getRuleContexts<SiddhiqlParser::Definition_aggregationContext>();
}

SiddhiqlParser::Definition_aggregationContext* SiddhiqlParser::Siddhi_appContext::definition_aggregation(size_t i) {
  return getRuleContext<SiddhiqlParser::Definition_aggregationContext>(i);
}

std::vector<SiddhiqlParser::ErrorContext *> SiddhiqlParser::Siddhi_appContext::error() {
  return getRuleContexts<SiddhiqlParser::ErrorContext>();
}

SiddhiqlParser::ErrorContext* SiddhiqlParser::Siddhi_appContext::error(size_t i) {
  return getRuleContext<SiddhiqlParser::ErrorContext>(i);
}

std::vector<SiddhiqlParser::App_annotationContext *> SiddhiqlParser::Siddhi_appContext::app_annotation() {
  return getRuleContexts<SiddhiqlParser::App_annotationContext>();
}

SiddhiqlParser::App_annotationContext* SiddhiqlParser::Siddhi_appContext::app_annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::App_annotationContext>(i);
}

std::vector<SiddhiqlParser::Execution_elementContext *> SiddhiqlParser::Siddhi_appContext::execution_element() {
  return getRuleContexts<SiddhiqlParser::Execution_elementContext>();
}

SiddhiqlParser::Execution_elementContext* SiddhiqlParser::Siddhi_appContext::execution_element(size_t i) {
  return getRuleContext<SiddhiqlParser::Execution_elementContext>(i);
}


size_t SiddhiqlParser::Siddhi_appContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSiddhi_app;
}

antlrcpp::Any SiddhiqlParser::Siddhi_appContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSiddhi_app(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Siddhi_appContext* SiddhiqlParser::siddhi_app() {
  Siddhi_appContext *_localctx = _tracker.createInstance<Siddhi_appContext>(_ctx, getState());
  enterRule(_localctx, 4, SiddhiqlParser::RuleSiddhi_app);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(293);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SiddhiqlParser::AT_SYMBOL: {
            setState(291);
            app_annotation();
            break;
          }

          case SiddhiqlParser::UNEXPECTED_CHAR: {
            setState(292);
            error();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(297);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(298);
      definition_stream();
      break;
    }

    case 2: {
      setState(299);
      definition_table();
      break;
    }

    case 3: {
      setState(300);
      definition_trigger();
      break;
    }

    case 4: {
      setState(301);
      definition_function();
      break;
    }

    case 5: {
      setState(302);
      definition_window();
      break;
    }

    case 6: {
      setState(303);
      definition_aggregation();
      break;
    }

    case 7: {
      setState(304);
      error();
      break;
    }

    }
    setState(319);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(307);
        match(SiddhiqlParser::SCOL);
        setState(315);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(308);
          definition_stream();
          break;
        }

        case 2: {
          setState(309);
          definition_table();
          break;
        }

        case 3: {
          setState(310);
          definition_trigger();
          break;
        }

        case 4: {
          setState(311);
          definition_function();
          break;
        }

        case 5: {
          setState(312);
          definition_window();
          break;
        }

        case 6: {
          setState(313);
          definition_aggregation();
          break;
        }

        case 7: {
          setState(314);
          error();
          break;
        }

        } 
      }
      setState(321);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(329);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(322);
        match(SiddhiqlParser::SCOL);
        setState(325);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SiddhiqlParser::AT_SYMBOL:
          case SiddhiqlParser::FROM:
          case SiddhiqlParser::PARTITION: {
            setState(323);
            execution_element();
            break;
          }

          case SiddhiqlParser::UNEXPECTED_CHAR: {
            setState(324);
            error();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(331);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(332);
      match(SiddhiqlParser::SCOL);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Execution_elementContext ------------------------------------------------------------------

SiddhiqlParser::Execution_elementContext::Execution_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::QueryContext* SiddhiqlParser::Execution_elementContext::query() {
  return getRuleContext<SiddhiqlParser::QueryContext>(0);
}

SiddhiqlParser::PartitionContext* SiddhiqlParser::Execution_elementContext::partition() {
  return getRuleContext<SiddhiqlParser::PartitionContext>(0);
}


size_t SiddhiqlParser::Execution_elementContext::getRuleIndex() const {
  return SiddhiqlParser::RuleExecution_element;
}

antlrcpp::Any SiddhiqlParser::Execution_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitExecution_element(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Execution_elementContext* SiddhiqlParser::execution_element() {
  Execution_elementContext *_localctx = _tracker.createInstance<Execution_elementContext>(_ctx, getState());
  enterRule(_localctx, 6, SiddhiqlParser::RuleExecution_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(337);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(335);
      query();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(336);
      partition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_stream_finalContext ------------------------------------------------------------------

SiddhiqlParser::Definition_stream_finalContext::Definition_stream_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Definition_streamContext* SiddhiqlParser::Definition_stream_finalContext::definition_stream() {
  return getRuleContext<SiddhiqlParser::Definition_streamContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_stream_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Definition_stream_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_stream_final;
}

antlrcpp::Any SiddhiqlParser::Definition_stream_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_stream_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_stream_finalContext* SiddhiqlParser::definition_stream_final() {
  Definition_stream_finalContext *_localctx = _tracker.createInstance<Definition_stream_finalContext>(_ctx, getState());
  enterRule(_localctx, 8, SiddhiqlParser::RuleDefinition_stream_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    definition_stream();
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(340);
      match(SiddhiqlParser::SCOL);
    }
    setState(343);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_streamContext ------------------------------------------------------------------

SiddhiqlParser::Definition_streamContext::Definition_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Definition_streamContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_streamContext::STREAM() {
  return getToken(SiddhiqlParser::STREAM, 0);
}

SiddhiqlParser::SourceContext* SiddhiqlParser::Definition_streamContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}

std::vector<SiddhiqlParser::Attribute_name_typeContext *> SiddhiqlParser::Definition_streamContext::attribute_name_type() {
  return getRuleContexts<SiddhiqlParser::Attribute_name_typeContext>();
}

SiddhiqlParser::Attribute_name_typeContext* SiddhiqlParser::Definition_streamContext::attribute_name_type(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_name_typeContext>(i);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::Definition_streamContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::Definition_streamContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}


size_t SiddhiqlParser::Definition_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_stream;
}

antlrcpp::Any SiddhiqlParser::Definition_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_streamContext* SiddhiqlParser::definition_stream() {
  Definition_streamContext *_localctx = _tracker.createInstance<Definition_streamContext>(_ctx, getState());
  enterRule(_localctx, 10, SiddhiqlParser::RuleDefinition_stream);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::AT_SYMBOL) {
      setState(345);
      annotation();
      setState(350);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(351);
    match(SiddhiqlParser::DEFINE);
    setState(352);
    match(SiddhiqlParser::STREAM);
    setState(353);
    source();
    setState(354);
    match(SiddhiqlParser::OPEN_PAR);
    setState(355);
    attribute_name_type();
    setState(360);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(356);
      match(SiddhiqlParser::COMMA);
      setState(357);
      attribute_name_type();
      setState(362);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(363);
    match(SiddhiqlParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_name_typeContext ------------------------------------------------------------------

SiddhiqlParser::Attribute_name_typeContext::Attribute_name_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::Attribute_name_typeContext::attribute_name() {
  return getRuleContext<SiddhiqlParser::Attribute_nameContext>(0);
}

SiddhiqlParser::Attribute_typeContext* SiddhiqlParser::Attribute_name_typeContext::attribute_type() {
  return getRuleContext<SiddhiqlParser::Attribute_typeContext>(0);
}


size_t SiddhiqlParser::Attribute_name_typeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute_name_type;
}

antlrcpp::Any SiddhiqlParser::Attribute_name_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute_name_type(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Attribute_name_typeContext* SiddhiqlParser::attribute_name_type() {
  Attribute_name_typeContext *_localctx = _tracker.createInstance<Attribute_name_typeContext>(_ctx, getState());
  enterRule(_localctx, 12, SiddhiqlParser::RuleAttribute_name_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    attribute_name();
    setState(366);
    attribute_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_table_finalContext ------------------------------------------------------------------

SiddhiqlParser::Definition_table_finalContext::Definition_table_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Definition_tableContext* SiddhiqlParser::Definition_table_finalContext::definition_table() {
  return getRuleContext<SiddhiqlParser::Definition_tableContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_table_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Definition_table_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_table_final;
}

antlrcpp::Any SiddhiqlParser::Definition_table_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_table_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_table_finalContext* SiddhiqlParser::definition_table_final() {
  Definition_table_finalContext *_localctx = _tracker.createInstance<Definition_table_finalContext>(_ctx, getState());
  enterRule(_localctx, 14, SiddhiqlParser::RuleDefinition_table_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    definition_table();
    setState(370);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(369);
      match(SiddhiqlParser::SCOL);
    }
    setState(372);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_tableContext ------------------------------------------------------------------

SiddhiqlParser::Definition_tableContext::Definition_tableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Definition_tableContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_tableContext::TABLE() {
  return getToken(SiddhiqlParser::TABLE, 0);
}

SiddhiqlParser::SourceContext* SiddhiqlParser::Definition_tableContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}

std::vector<SiddhiqlParser::Attribute_nameContext *> SiddhiqlParser::Definition_tableContext::attribute_name() {
  return getRuleContexts<SiddhiqlParser::Attribute_nameContext>();
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::Definition_tableContext::attribute_name(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_nameContext>(i);
}

std::vector<SiddhiqlParser::Attribute_typeContext *> SiddhiqlParser::Definition_tableContext::attribute_type() {
  return getRuleContexts<SiddhiqlParser::Attribute_typeContext>();
}

SiddhiqlParser::Attribute_typeContext* SiddhiqlParser::Definition_tableContext::attribute_type(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_typeContext>(i);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::Definition_tableContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::Definition_tableContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}


size_t SiddhiqlParser::Definition_tableContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_table;
}

antlrcpp::Any SiddhiqlParser::Definition_tableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_table(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_tableContext* SiddhiqlParser::definition_table() {
  Definition_tableContext *_localctx = _tracker.createInstance<Definition_tableContext>(_ctx, getState());
  enterRule(_localctx, 16, SiddhiqlParser::RuleDefinition_table);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::AT_SYMBOL) {
      setState(374);
      annotation();
      setState(379);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(380);
    match(SiddhiqlParser::DEFINE);
    setState(381);
    match(SiddhiqlParser::TABLE);
    setState(382);
    source();
    setState(383);
    match(SiddhiqlParser::OPEN_PAR);
    setState(384);
    attribute_name();
    setState(385);
    attribute_type();
    setState(392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(386);
      match(SiddhiqlParser::COMMA);
      setState(387);
      attribute_name();
      setState(388);
      attribute_type();
      setState(394);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(395);
    match(SiddhiqlParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_window_finalContext ------------------------------------------------------------------

SiddhiqlParser::Definition_window_finalContext::Definition_window_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Definition_windowContext* SiddhiqlParser::Definition_window_finalContext::definition_window() {
  return getRuleContext<SiddhiqlParser::Definition_windowContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_window_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Definition_window_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_window_final;
}

antlrcpp::Any SiddhiqlParser::Definition_window_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_window_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_window_finalContext* SiddhiqlParser::definition_window_final() {
  Definition_window_finalContext *_localctx = _tracker.createInstance<Definition_window_finalContext>(_ctx, getState());
  enterRule(_localctx, 18, SiddhiqlParser::RuleDefinition_window_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    definition_window();
    setState(399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(398);
      match(SiddhiqlParser::SCOL);
    }
    setState(401);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_windowContext ------------------------------------------------------------------

SiddhiqlParser::Definition_windowContext::Definition_windowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Definition_windowContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_windowContext::WINDOW() {
  return getToken(SiddhiqlParser::WINDOW, 0);
}

SiddhiqlParser::SourceContext* SiddhiqlParser::Definition_windowContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}

std::vector<SiddhiqlParser::Attribute_nameContext *> SiddhiqlParser::Definition_windowContext::attribute_name() {
  return getRuleContexts<SiddhiqlParser::Attribute_nameContext>();
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::Definition_windowContext::attribute_name(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_nameContext>(i);
}

std::vector<SiddhiqlParser::Attribute_typeContext *> SiddhiqlParser::Definition_windowContext::attribute_type() {
  return getRuleContexts<SiddhiqlParser::Attribute_typeContext>();
}

SiddhiqlParser::Attribute_typeContext* SiddhiqlParser::Definition_windowContext::attribute_type(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_typeContext>(i);
}

SiddhiqlParser::Function_operationContext* SiddhiqlParser::Definition_windowContext::function_operation() {
  return getRuleContext<SiddhiqlParser::Function_operationContext>(0);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::Definition_windowContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::Definition_windowContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Definition_windowContext::OUTPUT() {
  return getToken(SiddhiqlParser::OUTPUT, 0);
}

SiddhiqlParser::Output_event_typeContext* SiddhiqlParser::Definition_windowContext::output_event_type() {
  return getRuleContext<SiddhiqlParser::Output_event_typeContext>(0);
}


size_t SiddhiqlParser::Definition_windowContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_window;
}

antlrcpp::Any SiddhiqlParser::Definition_windowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_window(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_windowContext* SiddhiqlParser::definition_window() {
  Definition_windowContext *_localctx = _tracker.createInstance<Definition_windowContext>(_ctx, getState());
  enterRule(_localctx, 20, SiddhiqlParser::RuleDefinition_window);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::AT_SYMBOL) {
      setState(403);
      annotation();
      setState(408);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(409);
    match(SiddhiqlParser::DEFINE);
    setState(410);
    match(SiddhiqlParser::WINDOW);
    setState(411);
    source();
    setState(412);
    match(SiddhiqlParser::OPEN_PAR);
    setState(413);
    attribute_name();
    setState(414);
    attribute_type();
    setState(421);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(415);
      match(SiddhiqlParser::COMMA);
      setState(416);
      attribute_name();
      setState(417);
      attribute_type();
      setState(423);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(424);
    match(SiddhiqlParser::CLOSE_PAR);
    setState(425);
    function_operation();
    setState(428);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OUTPUT) {
      setState(426);
      match(SiddhiqlParser::OUTPUT);
      setState(427);
      output_event_type();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Store_query_finalContext ------------------------------------------------------------------

SiddhiqlParser::Store_query_finalContext::Store_query_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Store_queryContext* SiddhiqlParser::Store_query_finalContext::store_query() {
  return getRuleContext<SiddhiqlParser::Store_queryContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Store_query_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Store_query_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStore_query_final;
}

antlrcpp::Any SiddhiqlParser::Store_query_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStore_query_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Store_query_finalContext* SiddhiqlParser::store_query_final() {
  Store_query_finalContext *_localctx = _tracker.createInstance<Store_query_finalContext>(_ctx, getState());
  enterRule(_localctx, 22, SiddhiqlParser::RuleStore_query_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    store_query();
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(431);
      match(SiddhiqlParser::SCOL);
    }
    setState(434);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Store_queryContext ------------------------------------------------------------------

SiddhiqlParser::Store_queryContext::Store_queryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Store_queryContext::FROM() {
  return getToken(SiddhiqlParser::FROM, 0);
}

SiddhiqlParser::Store_inputContext* SiddhiqlParser::Store_queryContext::store_input() {
  return getRuleContext<SiddhiqlParser::Store_inputContext>(0);
}

SiddhiqlParser::Query_sectionContext* SiddhiqlParser::Store_queryContext::query_section() {
  return getRuleContext<SiddhiqlParser::Query_sectionContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Store_queryContext::INSERT() {
  return getToken(SiddhiqlParser::INSERT, 0);
}

tree::TerminalNode* SiddhiqlParser::Store_queryContext::INTO() {
  return getToken(SiddhiqlParser::INTO, 0);
}

SiddhiqlParser::TargetContext* SiddhiqlParser::Store_queryContext::target() {
  return getRuleContext<SiddhiqlParser::TargetContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Store_queryContext::UPDATE() {
  return getToken(SiddhiqlParser::UPDATE, 0);
}

tree::TerminalNode* SiddhiqlParser::Store_queryContext::OR() {
  return getToken(SiddhiqlParser::OR, 0);
}

tree::TerminalNode* SiddhiqlParser::Store_queryContext::ON() {
  return getToken(SiddhiqlParser::ON, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Store_queryContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}

SiddhiqlParser::Set_clauseContext* SiddhiqlParser::Store_queryContext::set_clause() {
  return getRuleContext<SiddhiqlParser::Set_clauseContext>(0);
}

SiddhiqlParser::Store_query_outputContext* SiddhiqlParser::Store_queryContext::store_query_output() {
  return getRuleContext<SiddhiqlParser::Store_query_outputContext>(0);
}


size_t SiddhiqlParser::Store_queryContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStore_query;
}

antlrcpp::Any SiddhiqlParser::Store_queryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStore_query(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Store_queryContext* SiddhiqlParser::store_query() {
  Store_queryContext *_localctx = _tracker.createInstance<Store_queryContext>(_ctx, getState());
  enterRule(_localctx, 24, SiddhiqlParser::RuleStore_query);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(462);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(436);
      match(SiddhiqlParser::FROM);
      setState(437);
      store_input();
      setState(439);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::SELECT) {
        setState(438);
        query_section();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(441);
      query_section();
      setState(442);
      match(SiddhiqlParser::INSERT);
      setState(443);
      match(SiddhiqlParser::INTO);
      setState(444);
      target();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(446);
      query_section();
      setState(447);
      match(SiddhiqlParser::UPDATE);
      setState(448);
      match(SiddhiqlParser::OR);
      setState(449);
      match(SiddhiqlParser::INSERT);
      setState(450);
      match(SiddhiqlParser::INTO);
      setState(451);
      target();
      setState(453);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::SET) {
        setState(452);
        set_clause();
      }
      setState(455);
      match(SiddhiqlParser::ON);
      setState(456);
      expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(459);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::SELECT) {
        setState(458);
        query_section();
      }
      setState(461);
      store_query_output();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Store_inputContext ------------------------------------------------------------------

SiddhiqlParser::Store_inputContext::Store_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Source_idContext* SiddhiqlParser::Store_inputContext::source_id() {
  return getRuleContext<SiddhiqlParser::Source_idContext>(0);
}

SiddhiqlParser::AsContext* SiddhiqlParser::Store_inputContext::as() {
  return getRuleContext<SiddhiqlParser::AsContext>(0);
}

SiddhiqlParser::AliasContext* SiddhiqlParser::Store_inputContext::alias() {
  return getRuleContext<SiddhiqlParser::AliasContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Store_inputContext::ON() {
  return getToken(SiddhiqlParser::ON, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Store_inputContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}

SiddhiqlParser::Within_time_rangeContext* SiddhiqlParser::Store_inputContext::within_time_range() {
  return getRuleContext<SiddhiqlParser::Within_time_rangeContext>(0);
}

SiddhiqlParser::PerContext* SiddhiqlParser::Store_inputContext::per() {
  return getRuleContext<SiddhiqlParser::PerContext>(0);
}


size_t SiddhiqlParser::Store_inputContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStore_input;
}

antlrcpp::Any SiddhiqlParser::Store_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStore_input(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Store_inputContext* SiddhiqlParser::store_input() {
  Store_inputContext *_localctx = _tracker.createInstance<Store_inputContext>(_ctx, getState());
  enterRule(_localctx, 26, SiddhiqlParser::RuleStore_input);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    source_id();
    setState(468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::AS) {
      setState(465);
      as();
      setState(466);
      alias();
    }
    setState(472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::ON) {
      setState(470);
      match(SiddhiqlParser::ON);
      setState(471);
      expression();
    }
    setState(477);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::WITHIN) {
      setState(474);
      within_time_range();
      setState(475);
      per();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_function_finalContext ------------------------------------------------------------------

SiddhiqlParser::Definition_function_finalContext::Definition_function_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Definition_functionContext* SiddhiqlParser::Definition_function_finalContext::definition_function() {
  return getRuleContext<SiddhiqlParser::Definition_functionContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_function_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Definition_function_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_function_final;
}

antlrcpp::Any SiddhiqlParser::Definition_function_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_function_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_function_finalContext* SiddhiqlParser::definition_function_final() {
  Definition_function_finalContext *_localctx = _tracker.createInstance<Definition_function_finalContext>(_ctx, getState());
  enterRule(_localctx, 28, SiddhiqlParser::RuleDefinition_function_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    definition_function();
    setState(481);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(480);
      match(SiddhiqlParser::SCOL);
    }
    setState(483);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_functionContext ------------------------------------------------------------------

SiddhiqlParser::Definition_functionContext::Definition_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Definition_functionContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_functionContext::FUNCTION() {
  return getToken(SiddhiqlParser::FUNCTION, 0);
}

SiddhiqlParser::Function_nameContext* SiddhiqlParser::Definition_functionContext::function_name() {
  return getRuleContext<SiddhiqlParser::Function_nameContext>(0);
}

SiddhiqlParser::Language_nameContext* SiddhiqlParser::Definition_functionContext::language_name() {
  return getRuleContext<SiddhiqlParser::Language_nameContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_functionContext::RETURN() {
  return getToken(SiddhiqlParser::RETURN, 0);
}

SiddhiqlParser::Attribute_typeContext* SiddhiqlParser::Definition_functionContext::attribute_type() {
  return getRuleContext<SiddhiqlParser::Attribute_typeContext>(0);
}

SiddhiqlParser::Function_bodyContext* SiddhiqlParser::Definition_functionContext::function_body() {
  return getRuleContext<SiddhiqlParser::Function_bodyContext>(0);
}


size_t SiddhiqlParser::Definition_functionContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_function;
}

antlrcpp::Any SiddhiqlParser::Definition_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_function(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_functionContext* SiddhiqlParser::definition_function() {
  Definition_functionContext *_localctx = _tracker.createInstance<Definition_functionContext>(_ctx, getState());
  enterRule(_localctx, 30, SiddhiqlParser::RuleDefinition_function);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(SiddhiqlParser::DEFINE);
    setState(486);
    match(SiddhiqlParser::FUNCTION);
    setState(487);
    function_name();
    setState(488);
    match(SiddhiqlParser::OPEN_SQUARE_BRACKETS);
    setState(489);
    language_name();
    setState(490);
    match(SiddhiqlParser::CLOSE_SQUARE_BRACKETS);
    setState(491);
    match(SiddhiqlParser::RETURN);
    setState(492);
    attribute_type();
    setState(493);
    function_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

SiddhiqlParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::IdContext* SiddhiqlParser::Function_nameContext::id() {
  return getRuleContext<SiddhiqlParser::IdContext>(0);
}


size_t SiddhiqlParser::Function_nameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFunction_name;
}

antlrcpp::Any SiddhiqlParser::Function_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFunction_name(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Function_nameContext* SiddhiqlParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 32, SiddhiqlParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Language_nameContext ------------------------------------------------------------------

SiddhiqlParser::Language_nameContext::Language_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::IdContext* SiddhiqlParser::Language_nameContext::id() {
  return getRuleContext<SiddhiqlParser::IdContext>(0);
}


size_t SiddhiqlParser::Language_nameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleLanguage_name;
}

antlrcpp::Any SiddhiqlParser::Language_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitLanguage_name(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Language_nameContext* SiddhiqlParser::language_name() {
  Language_nameContext *_localctx = _tracker.createInstance<Language_nameContext>(_ctx, getState());
  enterRule(_localctx, 34, SiddhiqlParser::RuleLanguage_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_bodyContext ------------------------------------------------------------------

SiddhiqlParser::Function_bodyContext::Function_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Function_bodyContext::SCRIPT() {
  return getToken(SiddhiqlParser::SCRIPT, 0);
}


size_t SiddhiqlParser::Function_bodyContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFunction_body;
}

antlrcpp::Any SiddhiqlParser::Function_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFunction_body(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Function_bodyContext* SiddhiqlParser::function_body() {
  Function_bodyContext *_localctx = _tracker.createInstance<Function_bodyContext>(_ctx, getState());
  enterRule(_localctx, 36, SiddhiqlParser::RuleFunction_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(SiddhiqlParser::SCRIPT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_trigger_finalContext ------------------------------------------------------------------

SiddhiqlParser::Definition_trigger_finalContext::Definition_trigger_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Definition_triggerContext* SiddhiqlParser::Definition_trigger_finalContext::definition_trigger() {
  return getRuleContext<SiddhiqlParser::Definition_triggerContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_trigger_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Definition_trigger_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_trigger_final;
}

antlrcpp::Any SiddhiqlParser::Definition_trigger_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_trigger_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_trigger_finalContext* SiddhiqlParser::definition_trigger_final() {
  Definition_trigger_finalContext *_localctx = _tracker.createInstance<Definition_trigger_finalContext>(_ctx, getState());
  enterRule(_localctx, 38, SiddhiqlParser::RuleDefinition_trigger_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    definition_trigger();
    setState(503);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(502);
      match(SiddhiqlParser::SCOL);
    }
    setState(505);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_triggerContext ------------------------------------------------------------------

SiddhiqlParser::Definition_triggerContext::Definition_triggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Definition_triggerContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_triggerContext::TRIGGER() {
  return getToken(SiddhiqlParser::TRIGGER, 0);
}

SiddhiqlParser::Trigger_nameContext* SiddhiqlParser::Definition_triggerContext::trigger_name() {
  return getRuleContext<SiddhiqlParser::Trigger_nameContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_triggerContext::AT() {
  return getToken(SiddhiqlParser::AT, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_triggerContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Time_valueContext* SiddhiqlParser::Definition_triggerContext::time_value() {
  return getRuleContext<SiddhiqlParser::Time_valueContext>(0);
}

SiddhiqlParser::String_valueContext* SiddhiqlParser::Definition_triggerContext::string_value() {
  return getRuleContext<SiddhiqlParser::String_valueContext>(0);
}


size_t SiddhiqlParser::Definition_triggerContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_trigger;
}

antlrcpp::Any SiddhiqlParser::Definition_triggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_trigger(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_triggerContext* SiddhiqlParser::definition_trigger() {
  Definition_triggerContext *_localctx = _tracker.createInstance<Definition_triggerContext>(_ctx, getState());
  enterRule(_localctx, 40, SiddhiqlParser::RuleDefinition_trigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(SiddhiqlParser::DEFINE);
    setState(508);
    match(SiddhiqlParser::TRIGGER);
    setState(509);
    trigger_name();
    setState(510);
    match(SiddhiqlParser::AT);
    setState(514);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::EVERY: {
        setState(511);
        match(SiddhiqlParser::EVERY);
        setState(512);
        time_value();
        break;
      }

      case SiddhiqlParser::STRING_LITERAL: {
        setState(513);
        string_value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Trigger_nameContext ------------------------------------------------------------------

SiddhiqlParser::Trigger_nameContext::Trigger_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::IdContext* SiddhiqlParser::Trigger_nameContext::id() {
  return getRuleContext<SiddhiqlParser::IdContext>(0);
}


size_t SiddhiqlParser::Trigger_nameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleTrigger_name;
}

antlrcpp::Any SiddhiqlParser::Trigger_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitTrigger_name(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Trigger_nameContext* SiddhiqlParser::trigger_name() {
  Trigger_nameContext *_localctx = _tracker.createInstance<Trigger_nameContext>(_ctx, getState());
  enterRule(_localctx, 42, SiddhiqlParser::RuleTrigger_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_aggregation_finalContext ------------------------------------------------------------------

SiddhiqlParser::Definition_aggregation_finalContext::Definition_aggregation_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Definition_aggregationContext* SiddhiqlParser::Definition_aggregation_finalContext::definition_aggregation() {
  return getRuleContext<SiddhiqlParser::Definition_aggregationContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregation_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Definition_aggregation_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_aggregation_final;
}

antlrcpp::Any SiddhiqlParser::Definition_aggregation_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_aggregation_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_aggregation_finalContext* SiddhiqlParser::definition_aggregation_final() {
  Definition_aggregation_finalContext *_localctx = _tracker.createInstance<Definition_aggregation_finalContext>(_ctx, getState());
  enterRule(_localctx, 44, SiddhiqlParser::RuleDefinition_aggregation_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    definition_aggregation();
    setState(520);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(519);
      match(SiddhiqlParser::SCOL);
    }
    setState(522);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_aggregationContext ------------------------------------------------------------------

SiddhiqlParser::Definition_aggregationContext::Definition_aggregationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregationContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregationContext::AGGREGATION() {
  return getToken(SiddhiqlParser::AGGREGATION, 0);
}

SiddhiqlParser::Aggregation_nameContext* SiddhiqlParser::Definition_aggregationContext::aggregation_name() {
  return getRuleContext<SiddhiqlParser::Aggregation_nameContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregationContext::FROM() {
  return getToken(SiddhiqlParser::FROM, 0);
}

SiddhiqlParser::Standard_streamContext* SiddhiqlParser::Definition_aggregationContext::standard_stream() {
  return getRuleContext<SiddhiqlParser::Standard_streamContext>(0);
}

SiddhiqlParser::Group_by_query_selectionContext* SiddhiqlParser::Definition_aggregationContext::group_by_query_selection() {
  return getRuleContext<SiddhiqlParser::Group_by_query_selectionContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregationContext::AGGREGATE() {
  return getToken(SiddhiqlParser::AGGREGATE, 0);
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregationContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Aggregation_timeContext* SiddhiqlParser::Definition_aggregationContext::aggregation_time() {
  return getRuleContext<SiddhiqlParser::Aggregation_timeContext>(0);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::Definition_aggregationContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::Definition_aggregationContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Definition_aggregationContext::BY() {
  return getToken(SiddhiqlParser::BY, 0);
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Definition_aggregationContext::attribute_reference() {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(0);
}


size_t SiddhiqlParser::Definition_aggregationContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDefinition_aggregation;
}

antlrcpp::Any SiddhiqlParser::Definition_aggregationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDefinition_aggregation(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Definition_aggregationContext* SiddhiqlParser::definition_aggregation() {
  Definition_aggregationContext *_localctx = _tracker.createInstance<Definition_aggregationContext>(_ctx, getState());
  enterRule(_localctx, 46, SiddhiqlParser::RuleDefinition_aggregation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(527);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::AT_SYMBOL) {
      setState(524);
      annotation();
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(530);
    match(SiddhiqlParser::DEFINE);
    setState(531);
    match(SiddhiqlParser::AGGREGATION);
    setState(532);
    aggregation_name();
    setState(533);
    match(SiddhiqlParser::FROM);
    setState(534);
    standard_stream();
    setState(535);
    group_by_query_selection();
    setState(536);
    match(SiddhiqlParser::AGGREGATE);
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::BY) {
      setState(537);
      match(SiddhiqlParser::BY);
      setState(538);
      attribute_reference();
    }
    setState(541);
    match(SiddhiqlParser::EVERY);
    setState(542);
    aggregation_time();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Aggregation_nameContext ------------------------------------------------------------------

SiddhiqlParser::Aggregation_nameContext::Aggregation_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::IdContext* SiddhiqlParser::Aggregation_nameContext::id() {
  return getRuleContext<SiddhiqlParser::IdContext>(0);
}


size_t SiddhiqlParser::Aggregation_nameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAggregation_name;
}

antlrcpp::Any SiddhiqlParser::Aggregation_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAggregation_name(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Aggregation_nameContext* SiddhiqlParser::aggregation_name() {
  Aggregation_nameContext *_localctx = _tracker.createInstance<Aggregation_nameContext>(_ctx, getState());
  enterRule(_localctx, 48, SiddhiqlParser::RuleAggregation_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Aggregation_timeContext ------------------------------------------------------------------

SiddhiqlParser::Aggregation_timeContext::Aggregation_timeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Aggregation_time_rangeContext* SiddhiqlParser::Aggregation_timeContext::aggregation_time_range() {
  return getRuleContext<SiddhiqlParser::Aggregation_time_rangeContext>(0);
}

SiddhiqlParser::Aggregation_time_intervalContext* SiddhiqlParser::Aggregation_timeContext::aggregation_time_interval() {
  return getRuleContext<SiddhiqlParser::Aggregation_time_intervalContext>(0);
}


size_t SiddhiqlParser::Aggregation_timeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAggregation_time;
}

antlrcpp::Any SiddhiqlParser::Aggregation_timeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAggregation_time(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Aggregation_timeContext* SiddhiqlParser::aggregation_time() {
  Aggregation_timeContext *_localctx = _tracker.createInstance<Aggregation_timeContext>(_ctx, getState());
  enterRule(_localctx, 50, SiddhiqlParser::RuleAggregation_time);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(548);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(546);
      aggregation_time_range();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(547);
      aggregation_time_interval();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Aggregation_time_durationContext ------------------------------------------------------------------

SiddhiqlParser::Aggregation_time_durationContext::Aggregation_time_durationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::SECONDS() {
  return getToken(SiddhiqlParser::SECONDS, 0);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::MINUTES() {
  return getToken(SiddhiqlParser::MINUTES, 0);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::HOURS() {
  return getToken(SiddhiqlParser::HOURS, 0);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::DAYS() {
  return getToken(SiddhiqlParser::DAYS, 0);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::WEEKS() {
  return getToken(SiddhiqlParser::WEEKS, 0);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::MONTHS() {
  return getToken(SiddhiqlParser::MONTHS, 0);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_durationContext::YEARS() {
  return getToken(SiddhiqlParser::YEARS, 0);
}


size_t SiddhiqlParser::Aggregation_time_durationContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAggregation_time_duration;
}

antlrcpp::Any SiddhiqlParser::Aggregation_time_durationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAggregation_time_duration(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Aggregation_time_durationContext* SiddhiqlParser::aggregation_time_duration() {
  Aggregation_time_durationContext *_localctx = _tracker.createInstance<Aggregation_time_durationContext>(_ctx, getState());
  enterRule(_localctx, 52, SiddhiqlParser::RuleAggregation_time_duration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    _la = _input->LA(1);
    if (!(((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (SiddhiqlParser::YEARS - 86))
      | (1ULL << (SiddhiqlParser::MONTHS - 86))
      | (1ULL << (SiddhiqlParser::WEEKS - 86))
      | (1ULL << (SiddhiqlParser::DAYS - 86))
      | (1ULL << (SiddhiqlParser::HOURS - 86))
      | (1ULL << (SiddhiqlParser::MINUTES - 86))
      | (1ULL << (SiddhiqlParser::SECONDS - 86)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Aggregation_time_rangeContext ------------------------------------------------------------------

SiddhiqlParser::Aggregation_time_rangeContext::Aggregation_time_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Aggregation_time_durationContext *> SiddhiqlParser::Aggregation_time_rangeContext::aggregation_time_duration() {
  return getRuleContexts<SiddhiqlParser::Aggregation_time_durationContext>();
}

SiddhiqlParser::Aggregation_time_durationContext* SiddhiqlParser::Aggregation_time_rangeContext::aggregation_time_duration(size_t i) {
  return getRuleContext<SiddhiqlParser::Aggregation_time_durationContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Aggregation_time_rangeContext::TRIPLE_DOT() {
  return getToken(SiddhiqlParser::TRIPLE_DOT, 0);
}


size_t SiddhiqlParser::Aggregation_time_rangeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAggregation_time_range;
}

antlrcpp::Any SiddhiqlParser::Aggregation_time_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAggregation_time_range(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Aggregation_time_rangeContext* SiddhiqlParser::aggregation_time_range() {
  Aggregation_time_rangeContext *_localctx = _tracker.createInstance<Aggregation_time_rangeContext>(_ctx, getState());
  enterRule(_localctx, 54, SiddhiqlParser::RuleAggregation_time_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    aggregation_time_duration();
    setState(553);
    match(SiddhiqlParser::TRIPLE_DOT);
    setState(554);
    aggregation_time_duration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Aggregation_time_intervalContext ------------------------------------------------------------------

SiddhiqlParser::Aggregation_time_intervalContext::Aggregation_time_intervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Aggregation_time_durationContext *> SiddhiqlParser::Aggregation_time_intervalContext::aggregation_time_duration() {
  return getRuleContexts<SiddhiqlParser::Aggregation_time_durationContext>();
}

SiddhiqlParser::Aggregation_time_durationContext* SiddhiqlParser::Aggregation_time_intervalContext::aggregation_time_duration(size_t i) {
  return getRuleContext<SiddhiqlParser::Aggregation_time_durationContext>(i);
}

std::vector<SiddhiqlParser::CommaContext *> SiddhiqlParser::Aggregation_time_intervalContext::comma() {
  return getRuleContexts<SiddhiqlParser::CommaContext>();
}

SiddhiqlParser::CommaContext* SiddhiqlParser::Aggregation_time_intervalContext::comma(size_t i) {
  return getRuleContext<SiddhiqlParser::CommaContext>(i);
}


size_t SiddhiqlParser::Aggregation_time_intervalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAggregation_time_interval;
}

antlrcpp::Any SiddhiqlParser::Aggregation_time_intervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAggregation_time_interval(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Aggregation_time_intervalContext* SiddhiqlParser::aggregation_time_interval() {
  Aggregation_time_intervalContext *_localctx = _tracker.createInstance<Aggregation_time_intervalContext>(_ctx, getState());
  enterRule(_localctx, 56, SiddhiqlParser::RuleAggregation_time_interval);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    aggregation_time_duration();
    setState(562);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(557);
      comma();
      setState(558);
      aggregation_time_duration();
      setState(564);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

SiddhiqlParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::AnnotationContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}

std::vector<SiddhiqlParser::Annotation_elementContext *> SiddhiqlParser::AnnotationContext::annotation_element() {
  return getRuleContexts<SiddhiqlParser::Annotation_elementContext>();
}

SiddhiqlParser::Annotation_elementContext* SiddhiqlParser::AnnotationContext::annotation_element(size_t i) {
  return getRuleContext<SiddhiqlParser::Annotation_elementContext>(i);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::AnnotationContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::AnnotationContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}


size_t SiddhiqlParser::AnnotationContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAnnotation;
}

antlrcpp::Any SiddhiqlParser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAnnotation(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 58, SiddhiqlParser::RuleAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    match(SiddhiqlParser::AT_SYMBOL);
    setState(566);
    name();
    setState(584);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OPEN_PAR) {
      setState(567);
      match(SiddhiqlParser::OPEN_PAR);
      setState(570);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SiddhiqlParser::STREAM:
        case SiddhiqlParser::DEFINE:
        case SiddhiqlParser::TABLE:
        case SiddhiqlParser::APP:
        case SiddhiqlParser::FROM:
        case SiddhiqlParser::PARTITION:
        case SiddhiqlParser::WINDOW:
        case SiddhiqlParser::SELECT:
        case SiddhiqlParser::GROUP:
        case SiddhiqlParser::BY:
        case SiddhiqlParser::ORDER:
        case SiddhiqlParser::LIMIT:
        case SiddhiqlParser::ASC:
        case SiddhiqlParser::DESC:
        case SiddhiqlParser::HAVING:
        case SiddhiqlParser::INSERT:
        case SiddhiqlParser::DELETE:
        case SiddhiqlParser::UPDATE:
        case SiddhiqlParser::RETURN:
        case SiddhiqlParser::EVENTS:
        case SiddhiqlParser::INTO:
        case SiddhiqlParser::OUTPUT:
        case SiddhiqlParser::EXPIRED:
        case SiddhiqlParser::CURRENT:
        case SiddhiqlParser::SNAPSHOT:
        case SiddhiqlParser::FOR:
        case SiddhiqlParser::RAW:
        case SiddhiqlParser::OF:
        case SiddhiqlParser::AS:
        case SiddhiqlParser::OR:
        case SiddhiqlParser::AND:
        case SiddhiqlParser::ON:
        case SiddhiqlParser::IS:
        case SiddhiqlParser::NOT:
        case SiddhiqlParser::WITHIN:
        case SiddhiqlParser::WITH:
        case SiddhiqlParser::BEGIN:
        case SiddhiqlParser::END:
        case SiddhiqlParser::NUL:
        case SiddhiqlParser::EVERY:
        case SiddhiqlParser::LAST:
        case SiddhiqlParser::ALL:
        case SiddhiqlParser::FIRST:
        case SiddhiqlParser::JOIN:
        case SiddhiqlParser::INNER:
        case SiddhiqlParser::OUTER:
        case SiddhiqlParser::RIGHT:
        case SiddhiqlParser::LEFT:
        case SiddhiqlParser::FULL:
        case SiddhiqlParser::UNIDIRECTIONAL:
        case SiddhiqlParser::YEARS:
        case SiddhiqlParser::MONTHS:
        case SiddhiqlParser::WEEKS:
        case SiddhiqlParser::DAYS:
        case SiddhiqlParser::HOURS:
        case SiddhiqlParser::MINUTES:
        case SiddhiqlParser::SECONDS:
        case SiddhiqlParser::MILLISECONDS:
        case SiddhiqlParser::FALSE:
        case SiddhiqlParser::TRUE:
        case SiddhiqlParser::STRING:
        case SiddhiqlParser::INT:
        case SiddhiqlParser::LONG:
        case SiddhiqlParser::FLOAT:
        case SiddhiqlParser::DOUBLE:
        case SiddhiqlParser::BOOL:
        case SiddhiqlParser::OBJECT:
        case SiddhiqlParser::ID_QUOTES:
        case SiddhiqlParser::ID:
        case SiddhiqlParser::STRING_LITERAL: {
          setState(568);
          annotation_element();
          break;
        }

        case SiddhiqlParser::AT_SYMBOL: {
          setState(569);
          annotation();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(579);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SiddhiqlParser::COMMA) {
        setState(572);
        match(SiddhiqlParser::COMMA);
        setState(575);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SiddhiqlParser::STREAM:
          case SiddhiqlParser::DEFINE:
          case SiddhiqlParser::TABLE:
          case SiddhiqlParser::APP:
          case SiddhiqlParser::FROM:
          case SiddhiqlParser::PARTITION:
          case SiddhiqlParser::WINDOW:
          case SiddhiqlParser::SELECT:
          case SiddhiqlParser::GROUP:
          case SiddhiqlParser::BY:
          case SiddhiqlParser::ORDER:
          case SiddhiqlParser::LIMIT:
          case SiddhiqlParser::ASC:
          case SiddhiqlParser::DESC:
          case SiddhiqlParser::HAVING:
          case SiddhiqlParser::INSERT:
          case SiddhiqlParser::DELETE:
          case SiddhiqlParser::UPDATE:
          case SiddhiqlParser::RETURN:
          case SiddhiqlParser::EVENTS:
          case SiddhiqlParser::INTO:
          case SiddhiqlParser::OUTPUT:
          case SiddhiqlParser::EXPIRED:
          case SiddhiqlParser::CURRENT:
          case SiddhiqlParser::SNAPSHOT:
          case SiddhiqlParser::FOR:
          case SiddhiqlParser::RAW:
          case SiddhiqlParser::OF:
          case SiddhiqlParser::AS:
          case SiddhiqlParser::OR:
          case SiddhiqlParser::AND:
          case SiddhiqlParser::ON:
          case SiddhiqlParser::IS:
          case SiddhiqlParser::NOT:
          case SiddhiqlParser::WITHIN:
          case SiddhiqlParser::WITH:
          case SiddhiqlParser::BEGIN:
          case SiddhiqlParser::END:
          case SiddhiqlParser::NUL:
          case SiddhiqlParser::EVERY:
          case SiddhiqlParser::LAST:
          case SiddhiqlParser::ALL:
          case SiddhiqlParser::FIRST:
          case SiddhiqlParser::JOIN:
          case SiddhiqlParser::INNER:
          case SiddhiqlParser::OUTER:
          case SiddhiqlParser::RIGHT:
          case SiddhiqlParser::LEFT:
          case SiddhiqlParser::FULL:
          case SiddhiqlParser::UNIDIRECTIONAL:
          case SiddhiqlParser::YEARS:
          case SiddhiqlParser::MONTHS:
          case SiddhiqlParser::WEEKS:
          case SiddhiqlParser::DAYS:
          case SiddhiqlParser::HOURS:
          case SiddhiqlParser::MINUTES:
          case SiddhiqlParser::SECONDS:
          case SiddhiqlParser::MILLISECONDS:
          case SiddhiqlParser::FALSE:
          case SiddhiqlParser::TRUE:
          case SiddhiqlParser::STRING:
          case SiddhiqlParser::INT:
          case SiddhiqlParser::LONG:
          case SiddhiqlParser::FLOAT:
          case SiddhiqlParser::DOUBLE:
          case SiddhiqlParser::BOOL:
          case SiddhiqlParser::OBJECT:
          case SiddhiqlParser::ID_QUOTES:
          case SiddhiqlParser::ID:
          case SiddhiqlParser::STRING_LITERAL: {
            setState(573);
            annotation_element();
            break;
          }

          case SiddhiqlParser::AT_SYMBOL: {
            setState(574);
            annotation();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(581);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(582);
      match(SiddhiqlParser::CLOSE_PAR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- App_annotationContext ------------------------------------------------------------------

SiddhiqlParser::App_annotationContext::App_annotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::App_annotationContext::APP() {
  return getToken(SiddhiqlParser::APP, 0);
}

SiddhiqlParser::NameContext* SiddhiqlParser::App_annotationContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}

std::vector<SiddhiqlParser::Annotation_elementContext *> SiddhiqlParser::App_annotationContext::annotation_element() {
  return getRuleContexts<SiddhiqlParser::Annotation_elementContext>();
}

SiddhiqlParser::Annotation_elementContext* SiddhiqlParser::App_annotationContext::annotation_element(size_t i) {
  return getRuleContext<SiddhiqlParser::Annotation_elementContext>(i);
}


size_t SiddhiqlParser::App_annotationContext::getRuleIndex() const {
  return SiddhiqlParser::RuleApp_annotation;
}

antlrcpp::Any SiddhiqlParser::App_annotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitApp_annotation(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::App_annotationContext* SiddhiqlParser::app_annotation() {
  App_annotationContext *_localctx = _tracker.createInstance<App_annotationContext>(_ctx, getState());
  enterRule(_localctx, 60, SiddhiqlParser::RuleApp_annotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    match(SiddhiqlParser::AT_SYMBOL);
    setState(587);
    match(SiddhiqlParser::APP);
    setState(588);
    match(SiddhiqlParser::COL);
    setState(589);
    name();
    setState(601);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OPEN_PAR) {
      setState(590);
      match(SiddhiqlParser::OPEN_PAR);
      setState(591);
      annotation_element();
      setState(596);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SiddhiqlParser::COMMA) {
        setState(592);
        match(SiddhiqlParser::COMMA);
        setState(593);
        annotation_element();
        setState(598);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(599);
      match(SiddhiqlParser::CLOSE_PAR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Annotation_elementContext ------------------------------------------------------------------

SiddhiqlParser::Annotation_elementContext::Annotation_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Property_valueContext* SiddhiqlParser::Annotation_elementContext::property_value() {
  return getRuleContext<SiddhiqlParser::Property_valueContext>(0);
}

SiddhiqlParser::Property_nameContext* SiddhiqlParser::Annotation_elementContext::property_name() {
  return getRuleContext<SiddhiqlParser::Property_nameContext>(0);
}


size_t SiddhiqlParser::Annotation_elementContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAnnotation_element;
}

antlrcpp::Any SiddhiqlParser::Annotation_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAnnotation_element(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Annotation_elementContext* SiddhiqlParser::annotation_element() {
  Annotation_elementContext *_localctx = _tracker.createInstance<Annotation_elementContext>(_ctx, getState());
  enterRule(_localctx, 62, SiddhiqlParser::RuleAnnotation_element);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SiddhiqlParser::STREAM)
      | (1ULL << SiddhiqlParser::DEFINE)
      | (1ULL << SiddhiqlParser::TABLE)
      | (1ULL << SiddhiqlParser::APP)
      | (1ULL << SiddhiqlParser::FROM)
      | (1ULL << SiddhiqlParser::PARTITION)
      | (1ULL << SiddhiqlParser::WINDOW)
      | (1ULL << SiddhiqlParser::SELECT)
      | (1ULL << SiddhiqlParser::GROUP)
      | (1ULL << SiddhiqlParser::BY)
      | (1ULL << SiddhiqlParser::ORDER)
      | (1ULL << SiddhiqlParser::LIMIT)
      | (1ULL << SiddhiqlParser::ASC)
      | (1ULL << SiddhiqlParser::DESC)
      | (1ULL << SiddhiqlParser::HAVING)
      | (1ULL << SiddhiqlParser::INSERT)
      | (1ULL << SiddhiqlParser::DELETE)
      | (1ULL << SiddhiqlParser::UPDATE)
      | (1ULL << SiddhiqlParser::RETURN)
      | (1ULL << SiddhiqlParser::EVENTS)
      | (1ULL << SiddhiqlParser::INTO)
      | (1ULL << SiddhiqlParser::OUTPUT)
      | (1ULL << SiddhiqlParser::EXPIRED)
      | (1ULL << SiddhiqlParser::CURRENT)
      | (1ULL << SiddhiqlParser::SNAPSHOT)
      | (1ULL << SiddhiqlParser::FOR)
      | (1ULL << SiddhiqlParser::RAW)
      | (1ULL << SiddhiqlParser::OF)
      | (1ULL << SiddhiqlParser::AS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SiddhiqlParser::OR - 64))
      | (1ULL << (SiddhiqlParser::AND - 64))
      | (1ULL << (SiddhiqlParser::ON - 64))
      | (1ULL << (SiddhiqlParser::IS - 64))
      | (1ULL << (SiddhiqlParser::NOT - 64))
      | (1ULL << (SiddhiqlParser::WITHIN - 64))
      | (1ULL << (SiddhiqlParser::WITH - 64))
      | (1ULL << (SiddhiqlParser::BEGIN - 64))
      | (1ULL << (SiddhiqlParser::END - 64))
      | (1ULL << (SiddhiqlParser::NUL - 64))
      | (1ULL << (SiddhiqlParser::EVERY - 64))
      | (1ULL << (SiddhiqlParser::LAST - 64))
      | (1ULL << (SiddhiqlParser::ALL - 64))
      | (1ULL << (SiddhiqlParser::FIRST - 64))
      | (1ULL << (SiddhiqlParser::JOIN - 64))
      | (1ULL << (SiddhiqlParser::INNER - 64))
      | (1ULL << (SiddhiqlParser::OUTER - 64))
      | (1ULL << (SiddhiqlParser::RIGHT - 64))
      | (1ULL << (SiddhiqlParser::LEFT - 64))
      | (1ULL << (SiddhiqlParser::FULL - 64))
      | (1ULL << (SiddhiqlParser::UNIDIRECTIONAL - 64))
      | (1ULL << (SiddhiqlParser::YEARS - 64))
      | (1ULL << (SiddhiqlParser::MONTHS - 64))
      | (1ULL << (SiddhiqlParser::WEEKS - 64))
      | (1ULL << (SiddhiqlParser::DAYS - 64))
      | (1ULL << (SiddhiqlParser::HOURS - 64))
      | (1ULL << (SiddhiqlParser::MINUTES - 64))
      | (1ULL << (SiddhiqlParser::SECONDS - 64))
      | (1ULL << (SiddhiqlParser::MILLISECONDS - 64))
      | (1ULL << (SiddhiqlParser::FALSE - 64))
      | (1ULL << (SiddhiqlParser::TRUE - 64))
      | (1ULL << (SiddhiqlParser::STRING - 64))
      | (1ULL << (SiddhiqlParser::INT - 64))
      | (1ULL << (SiddhiqlParser::LONG - 64))
      | (1ULL << (SiddhiqlParser::FLOAT - 64))
      | (1ULL << (SiddhiqlParser::DOUBLE - 64))
      | (1ULL << (SiddhiqlParser::BOOL - 64))
      | (1ULL << (SiddhiqlParser::OBJECT - 64))
      | (1ULL << (SiddhiqlParser::ID_QUOTES - 64))
      | (1ULL << (SiddhiqlParser::ID - 64)))) != 0)) {
      setState(603);
      property_name();
      setState(604);
      match(SiddhiqlParser::ASSIGN);
    }
    setState(608);
    property_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PartitionContext ------------------------------------------------------------------

SiddhiqlParser::PartitionContext::PartitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::PartitionContext::PARTITION() {
  return getToken(SiddhiqlParser::PARTITION, 0);
}

tree::TerminalNode* SiddhiqlParser::PartitionContext::WITH() {
  return getToken(SiddhiqlParser::WITH, 0);
}

std::vector<SiddhiqlParser::Partition_with_streamContext *> SiddhiqlParser::PartitionContext::partition_with_stream() {
  return getRuleContexts<SiddhiqlParser::Partition_with_streamContext>();
}

SiddhiqlParser::Partition_with_streamContext* SiddhiqlParser::PartitionContext::partition_with_stream(size_t i) {
  return getRuleContext<SiddhiqlParser::Partition_with_streamContext>(i);
}

tree::TerminalNode* SiddhiqlParser::PartitionContext::BEGIN() {
  return getToken(SiddhiqlParser::BEGIN, 0);
}

tree::TerminalNode* SiddhiqlParser::PartitionContext::END() {
  return getToken(SiddhiqlParser::END, 0);
}

std::vector<SiddhiqlParser::QueryContext *> SiddhiqlParser::PartitionContext::query() {
  return getRuleContexts<SiddhiqlParser::QueryContext>();
}

SiddhiqlParser::QueryContext* SiddhiqlParser::PartitionContext::query(size_t i) {
  return getRuleContext<SiddhiqlParser::QueryContext>(i);
}

std::vector<SiddhiqlParser::ErrorContext *> SiddhiqlParser::PartitionContext::error() {
  return getRuleContexts<SiddhiqlParser::ErrorContext>();
}

SiddhiqlParser::ErrorContext* SiddhiqlParser::PartitionContext::error(size_t i) {
  return getRuleContext<SiddhiqlParser::ErrorContext>(i);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::PartitionContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::PartitionContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}


size_t SiddhiqlParser::PartitionContext::getRuleIndex() const {
  return SiddhiqlParser::RulePartition;
}

antlrcpp::Any SiddhiqlParser::PartitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPartition(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::PartitionContext* SiddhiqlParser::partition() {
  PartitionContext *_localctx = _tracker.createInstance<PartitionContext>(_ctx, getState());
  enterRule(_localctx, 64, SiddhiqlParser::RulePartition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(613);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::AT_SYMBOL) {
      setState(610);
      annotation();
      setState(615);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(616);
    match(SiddhiqlParser::PARTITION);
    setState(617);
    match(SiddhiqlParser::WITH);
    setState(618);
    match(SiddhiqlParser::OPEN_PAR);
    setState(619);
    partition_with_stream();
    setState(624);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(620);
      match(SiddhiqlParser::COMMA);
      setState(621);
      partition_with_stream();
      setState(626);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(627);
    match(SiddhiqlParser::CLOSE_PAR);
    setState(628);
    match(SiddhiqlParser::BEGIN);
    setState(631);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::AT_SYMBOL:
      case SiddhiqlParser::FROM: {
        setState(629);
        query();
        break;
      }

      case SiddhiqlParser::UNEXPECTED_CHAR: {
        setState(630);
        error();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(640);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(633);
        match(SiddhiqlParser::SCOL);
        setState(636);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SiddhiqlParser::AT_SYMBOL:
          case SiddhiqlParser::FROM: {
            setState(634);
            query();
            break;
          }

          case SiddhiqlParser::UNEXPECTED_CHAR: {
            setState(635);
            error();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(642);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(644);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(643);
      match(SiddhiqlParser::SCOL);
    }
    setState(646);
    match(SiddhiqlParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partition_finalContext ------------------------------------------------------------------

SiddhiqlParser::Partition_finalContext::Partition_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::PartitionContext* SiddhiqlParser::Partition_finalContext::partition() {
  return getRuleContext<SiddhiqlParser::PartitionContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Partition_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Partition_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RulePartition_final;
}

antlrcpp::Any SiddhiqlParser::Partition_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPartition_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Partition_finalContext* SiddhiqlParser::partition_final() {
  Partition_finalContext *_localctx = _tracker.createInstance<Partition_finalContext>(_ctx, getState());
  enterRule(_localctx, 66, SiddhiqlParser::RulePartition_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    partition();
    setState(650);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(649);
      match(SiddhiqlParser::SCOL);
    }
    setState(652);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partition_with_streamContext ------------------------------------------------------------------

SiddhiqlParser::Partition_with_streamContext::Partition_with_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::AttributeContext* SiddhiqlParser::Partition_with_streamContext::attribute() {
  return getRuleContext<SiddhiqlParser::AttributeContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Partition_with_streamContext::OF() {
  return getToken(SiddhiqlParser::OF, 0);
}

SiddhiqlParser::Stream_idContext* SiddhiqlParser::Partition_with_streamContext::stream_id() {
  return getRuleContext<SiddhiqlParser::Stream_idContext>(0);
}

SiddhiqlParser::Condition_rangesContext* SiddhiqlParser::Partition_with_streamContext::condition_ranges() {
  return getRuleContext<SiddhiqlParser::Condition_rangesContext>(0);
}


size_t SiddhiqlParser::Partition_with_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RulePartition_with_stream;
}

antlrcpp::Any SiddhiqlParser::Partition_with_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPartition_with_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Partition_with_streamContext* SiddhiqlParser::partition_with_stream() {
  Partition_with_streamContext *_localctx = _tracker.createInstance<Partition_with_streamContext>(_ctx, getState());
  enterRule(_localctx, 68, SiddhiqlParser::RulePartition_with_stream);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(662);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(654);
      attribute();
      setState(655);
      match(SiddhiqlParser::OF);
      setState(656);
      stream_id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(658);
      condition_ranges();
      setState(659);
      match(SiddhiqlParser::OF);
      setState(660);
      stream_id();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_rangesContext ------------------------------------------------------------------

SiddhiqlParser::Condition_rangesContext::Condition_rangesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Condition_rangeContext *> SiddhiqlParser::Condition_rangesContext::condition_range() {
  return getRuleContexts<SiddhiqlParser::Condition_rangeContext>();
}

SiddhiqlParser::Condition_rangeContext* SiddhiqlParser::Condition_rangesContext::condition_range(size_t i) {
  return getRuleContext<SiddhiqlParser::Condition_rangeContext>(i);
}

std::vector<tree::TerminalNode *> SiddhiqlParser::Condition_rangesContext::OR() {
  return getTokens(SiddhiqlParser::OR);
}

tree::TerminalNode* SiddhiqlParser::Condition_rangesContext::OR(size_t i) {
  return getToken(SiddhiqlParser::OR, i);
}


size_t SiddhiqlParser::Condition_rangesContext::getRuleIndex() const {
  return SiddhiqlParser::RuleCondition_ranges;
}

antlrcpp::Any SiddhiqlParser::Condition_rangesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitCondition_ranges(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Condition_rangesContext* SiddhiqlParser::condition_ranges() {
  Condition_rangesContext *_localctx = _tracker.createInstance<Condition_rangesContext>(_ctx, getState());
  enterRule(_localctx, 70, SiddhiqlParser::RuleCondition_ranges);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(664);
    condition_range();
    setState(669);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::OR) {
      setState(665);
      match(SiddhiqlParser::OR);
      setState(666);
      condition_range();
      setState(671);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_rangeContext ------------------------------------------------------------------

SiddhiqlParser::Condition_rangeContext::Condition_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Condition_rangeContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}

SiddhiqlParser::AsContext* SiddhiqlParser::Condition_rangeContext::as() {
  return getRuleContext<SiddhiqlParser::AsContext>(0);
}

SiddhiqlParser::String_valueContext* SiddhiqlParser::Condition_rangeContext::string_value() {
  return getRuleContext<SiddhiqlParser::String_valueContext>(0);
}


size_t SiddhiqlParser::Condition_rangeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleCondition_range;
}

antlrcpp::Any SiddhiqlParser::Condition_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitCondition_range(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Condition_rangeContext* SiddhiqlParser::condition_range() {
  Condition_rangeContext *_localctx = _tracker.createInstance<Condition_rangeContext>(_ctx, getState());
  enterRule(_localctx, 72, SiddhiqlParser::RuleCondition_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(672);
    expression();
    setState(673);
    as();
    setState(674);
    string_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_finalContext ------------------------------------------------------------------

SiddhiqlParser::Query_finalContext::Query_finalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::QueryContext* SiddhiqlParser::Query_finalContext::query() {
  return getRuleContext<SiddhiqlParser::QueryContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Query_finalContext::EOF() {
  return getToken(SiddhiqlParser::EOF, 0);
}


size_t SiddhiqlParser::Query_finalContext::getRuleIndex() const {
  return SiddhiqlParser::RuleQuery_final;
}

antlrcpp::Any SiddhiqlParser::Query_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitQuery_final(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Query_finalContext* SiddhiqlParser::query_final() {
  Query_finalContext *_localctx = _tracker.createInstance<Query_finalContext>(_ctx, getState());
  enterRule(_localctx, 74, SiddhiqlParser::RuleQuery_final);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
    query();
    setState(678);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SCOL) {
      setState(677);
      match(SiddhiqlParser::SCOL);
    }
    setState(680);
    match(SiddhiqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

SiddhiqlParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::QueryContext::FROM() {
  return getToken(SiddhiqlParser::FROM, 0);
}

SiddhiqlParser::Query_inputContext* SiddhiqlParser::QueryContext::query_input() {
  return getRuleContext<SiddhiqlParser::Query_inputContext>(0);
}

SiddhiqlParser::Query_outputContext* SiddhiqlParser::QueryContext::query_output() {
  return getRuleContext<SiddhiqlParser::Query_outputContext>(0);
}

std::vector<SiddhiqlParser::AnnotationContext *> SiddhiqlParser::QueryContext::annotation() {
  return getRuleContexts<SiddhiqlParser::AnnotationContext>();
}

SiddhiqlParser::AnnotationContext* SiddhiqlParser::QueryContext::annotation(size_t i) {
  return getRuleContext<SiddhiqlParser::AnnotationContext>(i);
}

SiddhiqlParser::Query_sectionContext* SiddhiqlParser::QueryContext::query_section() {
  return getRuleContext<SiddhiqlParser::Query_sectionContext>(0);
}

SiddhiqlParser::Output_rateContext* SiddhiqlParser::QueryContext::output_rate() {
  return getRuleContext<SiddhiqlParser::Output_rateContext>(0);
}


size_t SiddhiqlParser::QueryContext::getRuleIndex() const {
  return SiddhiqlParser::RuleQuery;
}

antlrcpp::Any SiddhiqlParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::QueryContext* SiddhiqlParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 76, SiddhiqlParser::RuleQuery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(685);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::AT_SYMBOL) {
      setState(682);
      annotation();
      setState(687);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(688);
    match(SiddhiqlParser::FROM);
    setState(689);
    query_input();
    setState(691);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::SELECT) {
      setState(690);
      query_section();
    }
    setState(694);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OUTPUT) {
      setState(693);
      output_rate();
    }
    setState(696);
    query_output();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_inputContext ------------------------------------------------------------------

SiddhiqlParser::Query_inputContext::Query_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Standard_streamContext* SiddhiqlParser::Query_inputContext::standard_stream() {
  return getRuleContext<SiddhiqlParser::Standard_streamContext>(0);
}

SiddhiqlParser::Join_streamContext* SiddhiqlParser::Query_inputContext::join_stream() {
  return getRuleContext<SiddhiqlParser::Join_streamContext>(0);
}

SiddhiqlParser::Pattern_streamContext* SiddhiqlParser::Query_inputContext::pattern_stream() {
  return getRuleContext<SiddhiqlParser::Pattern_streamContext>(0);
}

SiddhiqlParser::Sequence_streamContext* SiddhiqlParser::Query_inputContext::sequence_stream() {
  return getRuleContext<SiddhiqlParser::Sequence_streamContext>(0);
}

SiddhiqlParser::Anonymous_streamContext* SiddhiqlParser::Query_inputContext::anonymous_stream() {
  return getRuleContext<SiddhiqlParser::Anonymous_streamContext>(0);
}


size_t SiddhiqlParser::Query_inputContext::getRuleIndex() const {
  return SiddhiqlParser::RuleQuery_input;
}

antlrcpp::Any SiddhiqlParser::Query_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitQuery_input(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Query_inputContext* SiddhiqlParser::query_input() {
  Query_inputContext *_localctx = _tracker.createInstance<Query_inputContext>(_ctx, getState());
  enterRule(_localctx, 78, SiddhiqlParser::RuleQuery_input);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(698);
      standard_stream();
      break;
    }

    case 2: {
      setState(699);
      join_stream();
      break;
    }

    case 3: {
      setState(700);
      pattern_stream();
      break;
    }

    case 4: {
      setState(701);
      sequence_stream();
      break;
    }

    case 5: {
      setState(702);
      anonymous_stream();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Standard_streamContext ------------------------------------------------------------------

SiddhiqlParser::Standard_streamContext::Standard_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::SourceContext* SiddhiqlParser::Standard_streamContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}

SiddhiqlParser::WindowContext* SiddhiqlParser::Standard_streamContext::window() {
  return getRuleContext<SiddhiqlParser::WindowContext>(0);
}

std::vector<SiddhiqlParser::Basic_source_stream_handlersContext *> SiddhiqlParser::Standard_streamContext::basic_source_stream_handlers() {
  return getRuleContexts<SiddhiqlParser::Basic_source_stream_handlersContext>();
}

SiddhiqlParser::Basic_source_stream_handlersContext* SiddhiqlParser::Standard_streamContext::basic_source_stream_handlers(size_t i) {
  return getRuleContext<SiddhiqlParser::Basic_source_stream_handlersContext>(i);
}


size_t SiddhiqlParser::Standard_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStandard_stream;
}

antlrcpp::Any SiddhiqlParser::Standard_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStandard_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Standard_streamContext* SiddhiqlParser::standard_stream() {
  Standard_streamContext *_localctx = _tracker.createInstance<Standard_streamContext>(_ctx, getState());
  enterRule(_localctx, 80, SiddhiqlParser::RuleStandard_stream);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    source();
    setState(707);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(706);
      dynamic_cast<Standard_streamContext *>(_localctx)->pre_window_handlers = basic_source_stream_handlers();
      break;
    }

    }
    setState(710);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(709);
      window();
      break;
    }

    }
    setState(713);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OPEN_SQUARE_BRACKETS

    || _la == SiddhiqlParser::HASH) {
      setState(712);
      dynamic_cast<Standard_streamContext *>(_localctx)->post_window_handlers = basic_source_stream_handlers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_streamContext ------------------------------------------------------------------

SiddhiqlParser::Join_streamContext::Join_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Join_sourceContext *> SiddhiqlParser::Join_streamContext::join_source() {
  return getRuleContexts<SiddhiqlParser::Join_sourceContext>();
}

SiddhiqlParser::Join_sourceContext* SiddhiqlParser::Join_streamContext::join_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Join_sourceContext>(i);
}

SiddhiqlParser::JoinContext* SiddhiqlParser::Join_streamContext::join() {
  return getRuleContext<SiddhiqlParser::JoinContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Join_streamContext::UNIDIRECTIONAL() {
  return getToken(SiddhiqlParser::UNIDIRECTIONAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Join_streamContext::ON() {
  return getToken(SiddhiqlParser::ON, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Join_streamContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}

SiddhiqlParser::Within_time_rangeContext* SiddhiqlParser::Join_streamContext::within_time_range() {
  return getRuleContext<SiddhiqlParser::Within_time_rangeContext>(0);
}

SiddhiqlParser::PerContext* SiddhiqlParser::Join_streamContext::per() {
  return getRuleContext<SiddhiqlParser::PerContext>(0);
}


size_t SiddhiqlParser::Join_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RuleJoin_stream;
}

antlrcpp::Any SiddhiqlParser::Join_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitJoin_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Join_streamContext* SiddhiqlParser::join_stream() {
  Join_streamContext *_localctx = _tracker.createInstance<Join_streamContext>(_ctx, getState());
  enterRule(_localctx, 82, SiddhiqlParser::RuleJoin_stream);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(715);
    dynamic_cast<Join_streamContext *>(_localctx)->left_source = join_source();
    setState(725);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::JOIN:
      case SiddhiqlParser::INNER:
      case SiddhiqlParser::OUTER:
      case SiddhiqlParser::RIGHT:
      case SiddhiqlParser::LEFT:
      case SiddhiqlParser::FULL: {
        setState(716);
        join();
        setState(717);
        dynamic_cast<Join_streamContext *>(_localctx)->right_source = join_source();
        setState(719);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::UNIDIRECTIONAL) {
          setState(718);
          dynamic_cast<Join_streamContext *>(_localctx)->right_unidirectional = match(SiddhiqlParser::UNIDIRECTIONAL);
        }
        break;
      }

      case SiddhiqlParser::UNIDIRECTIONAL: {
        setState(721);
        dynamic_cast<Join_streamContext *>(_localctx)->left_unidirectional = match(SiddhiqlParser::UNIDIRECTIONAL);
        setState(722);
        join();
        setState(723);
        dynamic_cast<Join_streamContext *>(_localctx)->right_source = join_source();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(729);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::ON) {
      setState(727);
      match(SiddhiqlParser::ON);
      setState(728);
      expression();
    }
    setState(734);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::WITHIN) {
      setState(731);
      within_time_range();
      setState(732);
      per();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Join_sourceContext::Join_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::SourceContext* SiddhiqlParser::Join_sourceContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}

SiddhiqlParser::Basic_source_stream_handlersContext* SiddhiqlParser::Join_sourceContext::basic_source_stream_handlers() {
  return getRuleContext<SiddhiqlParser::Basic_source_stream_handlersContext>(0);
}

SiddhiqlParser::WindowContext* SiddhiqlParser::Join_sourceContext::window() {
  return getRuleContext<SiddhiqlParser::WindowContext>(0);
}

SiddhiqlParser::AsContext* SiddhiqlParser::Join_sourceContext::as() {
  return getRuleContext<SiddhiqlParser::AsContext>(0);
}

SiddhiqlParser::AliasContext* SiddhiqlParser::Join_sourceContext::alias() {
  return getRuleContext<SiddhiqlParser::AliasContext>(0);
}


size_t SiddhiqlParser::Join_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleJoin_source;
}

antlrcpp::Any SiddhiqlParser::Join_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitJoin_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Join_sourceContext* SiddhiqlParser::join_source() {
  Join_sourceContext *_localctx = _tracker.createInstance<Join_sourceContext>(_ctx, getState());
  enterRule(_localctx, 84, SiddhiqlParser::RuleJoin_source);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
    source();
    setState(738);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(737);
      basic_source_stream_handlers();
      break;
    }

    }
    setState(741);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::HASH) {
      setState(740);
      window();
    }
    setState(746);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::AS) {
      setState(743);
      as();
      setState(744);
      alias();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pattern_streamContext ------------------------------------------------------------------

SiddhiqlParser::Pattern_streamContext::Pattern_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Every_pattern_source_chainContext* SiddhiqlParser::Pattern_streamContext::every_pattern_source_chain() {
  return getRuleContext<SiddhiqlParser::Every_pattern_source_chainContext>(0);
}

SiddhiqlParser::Absent_pattern_source_chainContext* SiddhiqlParser::Pattern_streamContext::absent_pattern_source_chain() {
  return getRuleContext<SiddhiqlParser::Absent_pattern_source_chainContext>(0);
}


size_t SiddhiqlParser::Pattern_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RulePattern_stream;
}

antlrcpp::Any SiddhiqlParser::Pattern_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPattern_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Pattern_streamContext* SiddhiqlParser::pattern_stream() {
  Pattern_streamContext *_localctx = _tracker.createInstance<Pattern_streamContext>(_ctx, getState());
  enterRule(_localctx, 86, SiddhiqlParser::RulePattern_stream);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(750);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(748);
      every_pattern_source_chain(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(749);
      absent_pattern_source_chain();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Every_pattern_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Every_pattern_source_chainContext::Every_pattern_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Every_pattern_source_chainContext *> SiddhiqlParser::Every_pattern_source_chainContext::every_pattern_source_chain() {
  return getRuleContexts<SiddhiqlParser::Every_pattern_source_chainContext>();
}

SiddhiqlParser::Every_pattern_source_chainContext* SiddhiqlParser::Every_pattern_source_chainContext::every_pattern_source_chain(size_t i) {
  return getRuleContext<SiddhiqlParser::Every_pattern_source_chainContext>(i);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Every_pattern_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Every_pattern_source_chainContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Pattern_source_chainContext* SiddhiqlParser::Every_pattern_source_chainContext::pattern_source_chain() {
  return getRuleContext<SiddhiqlParser::Pattern_source_chainContext>(0);
}

SiddhiqlParser::Pattern_sourceContext* SiddhiqlParser::Every_pattern_source_chainContext::pattern_source() {
  return getRuleContext<SiddhiqlParser::Pattern_sourceContext>(0);
}


size_t SiddhiqlParser::Every_pattern_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RuleEvery_pattern_source_chain;
}

antlrcpp::Any SiddhiqlParser::Every_pattern_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitEvery_pattern_source_chain(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Every_pattern_source_chainContext* SiddhiqlParser::every_pattern_source_chain() {
   return every_pattern_source_chain(0);
}

SiddhiqlParser::Every_pattern_source_chainContext* SiddhiqlParser::every_pattern_source_chain(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Every_pattern_source_chainContext *_localctx = _tracker.createInstance<Every_pattern_source_chainContext>(_ctx, parentState);
  SiddhiqlParser::Every_pattern_source_chainContext *previousContext = _localctx;
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, SiddhiqlParser::RuleEvery_pattern_source_chain, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(772);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(753);
      match(SiddhiqlParser::OPEN_PAR);
      setState(754);
      every_pattern_source_chain(0);
      setState(755);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(757);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(756);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(759);
      match(SiddhiqlParser::EVERY);
      setState(760);
      match(SiddhiqlParser::OPEN_PAR);
      setState(761);
      pattern_source_chain(0);
      setState(762);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(764);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(763);
        within_time();
        break;
      }

      }
      break;
    }

    case 3: {
      setState(766);
      pattern_source_chain(0);
      break;
    }

    case 4: {
      setState(767);
      match(SiddhiqlParser::EVERY);
      setState(768);
      pattern_source();
      setState(770);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(769);
        within_time();
        break;
      }

      }
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(779);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Every_pattern_source_chainContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEvery_pattern_source_chain);
        setState(774);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(775);
        match(SiddhiqlParser::FOLLOWED_BY);
        setState(776);
        every_pattern_source_chain(4); 
      }
      setState(781);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Pattern_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Pattern_source_chainContext::Pattern_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Pattern_source_chainContext *> SiddhiqlParser::Pattern_source_chainContext::pattern_source_chain() {
  return getRuleContexts<SiddhiqlParser::Pattern_source_chainContext>();
}

SiddhiqlParser::Pattern_source_chainContext* SiddhiqlParser::Pattern_source_chainContext::pattern_source_chain(size_t i) {
  return getRuleContext<SiddhiqlParser::Pattern_source_chainContext>(i);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Pattern_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Pattern_sourceContext* SiddhiqlParser::Pattern_source_chainContext::pattern_source() {
  return getRuleContext<SiddhiqlParser::Pattern_sourceContext>(0);
}


size_t SiddhiqlParser::Pattern_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RulePattern_source_chain;
}

antlrcpp::Any SiddhiqlParser::Pattern_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPattern_source_chain(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Pattern_source_chainContext* SiddhiqlParser::pattern_source_chain() {
   return pattern_source_chain(0);
}

SiddhiqlParser::Pattern_source_chainContext* SiddhiqlParser::pattern_source_chain(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Pattern_source_chainContext *_localctx = _tracker.createInstance<Pattern_source_chainContext>(_ctx, parentState);
  SiddhiqlParser::Pattern_source_chainContext *previousContext = _localctx;
  size_t startState = 90;
  enterRecursionRule(_localctx, 90, SiddhiqlParser::RulePattern_source_chain, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(793);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(783);
      match(SiddhiqlParser::OPEN_PAR);
      setState(784);
      pattern_source_chain(0);
      setState(785);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(787);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(786);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(789);
      pattern_source();
      setState(791);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(790);
        within_time();
        break;
      }

      }
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(800);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Pattern_source_chainContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePattern_source_chain);
        setState(795);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(796);
        match(SiddhiqlParser::FOLLOWED_BY);
        setState(797);
        pattern_source_chain(3); 
      }
      setState(802);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Absent_pattern_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Absent_pattern_source_chainContext::Absent_pattern_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Absent_pattern_source_chainContext* SiddhiqlParser::Absent_pattern_source_chainContext::absent_pattern_source_chain() {
  return getRuleContext<SiddhiqlParser::Absent_pattern_source_chainContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Absent_pattern_source_chainContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Absent_pattern_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Every_absent_pattern_sourceContext* SiddhiqlParser::Absent_pattern_source_chainContext::every_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Every_absent_pattern_sourceContext>(0);
}

SiddhiqlParser::Left_absent_pattern_sourceContext* SiddhiqlParser::Absent_pattern_source_chainContext::left_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Left_absent_pattern_sourceContext>(0);
}

SiddhiqlParser::Right_absent_pattern_sourceContext* SiddhiqlParser::Absent_pattern_source_chainContext::right_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Right_absent_pattern_sourceContext>(0);
}


size_t SiddhiqlParser::Absent_pattern_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAbsent_pattern_source_chain;
}

antlrcpp::Any SiddhiqlParser::Absent_pattern_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAbsent_pattern_source_chain(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Absent_pattern_source_chainContext* SiddhiqlParser::absent_pattern_source_chain() {
  Absent_pattern_source_chainContext *_localctx = _tracker.createInstance<Absent_pattern_source_chainContext>(_ctx, getState());
  enterRule(_localctx, 92, SiddhiqlParser::RuleAbsent_pattern_source_chain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(815);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(804);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::EVERY) {
        setState(803);
        match(SiddhiqlParser::EVERY);
      }
      setState(806);
      match(SiddhiqlParser::OPEN_PAR);
      setState(807);
      absent_pattern_source_chain();
      setState(808);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(810);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::WITHIN) {
        setState(809);
        within_time();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(812);
      every_absent_pattern_source();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(813);
      left_absent_pattern_source(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(814);
      right_absent_pattern_source(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Left_absent_pattern_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Left_absent_pattern_sourceContext::Left_absent_pattern_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Left_absent_pattern_sourceContext *> SiddhiqlParser::Left_absent_pattern_sourceContext::left_absent_pattern_source() {
  return getRuleContexts<SiddhiqlParser::Left_absent_pattern_sourceContext>();
}

SiddhiqlParser::Left_absent_pattern_sourceContext* SiddhiqlParser::Left_absent_pattern_sourceContext::left_absent_pattern_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Left_absent_pattern_sourceContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Left_absent_pattern_sourceContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Left_absent_pattern_sourceContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Every_absent_pattern_sourceContext* SiddhiqlParser::Left_absent_pattern_sourceContext::every_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Every_absent_pattern_sourceContext>(0);
}

SiddhiqlParser::Every_pattern_source_chainContext* SiddhiqlParser::Left_absent_pattern_sourceContext::every_pattern_source_chain() {
  return getRuleContext<SiddhiqlParser::Every_pattern_source_chainContext>(0);
}


size_t SiddhiqlParser::Left_absent_pattern_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleLeft_absent_pattern_source;
}

antlrcpp::Any SiddhiqlParser::Left_absent_pattern_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitLeft_absent_pattern_source(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Left_absent_pattern_sourceContext* SiddhiqlParser::left_absent_pattern_source() {
   return left_absent_pattern_source(0);
}

SiddhiqlParser::Left_absent_pattern_sourceContext* SiddhiqlParser::left_absent_pattern_source(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Left_absent_pattern_sourceContext *_localctx = _tracker.createInstance<Left_absent_pattern_sourceContext>(_ctx, parentState);
  SiddhiqlParser::Left_absent_pattern_sourceContext *previousContext = _localctx;
  size_t startState = 94;
  enterRecursionRule(_localctx, 94, SiddhiqlParser::RuleLeft_absent_pattern_source, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(835);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      setState(819);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::EVERY) {
        setState(818);
        match(SiddhiqlParser::EVERY);
      }
      setState(821);
      match(SiddhiqlParser::OPEN_PAR);
      setState(822);
      left_absent_pattern_source(0);
      setState(823);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(825);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
      case 1: {
        setState(824);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(827);
      every_absent_pattern_source();
      setState(828);
      match(SiddhiqlParser::FOLLOWED_BY);
      setState(829);
      every_pattern_source_chain(0);
      break;
    }

    case 3: {
      setState(831);
      every_pattern_source_chain(0);
      setState(832);
      match(SiddhiqlParser::FOLLOWED_BY);
      setState(833);
      left_absent_pattern_source(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(845);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(843);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Left_absent_pattern_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLeft_absent_pattern_source);
          setState(837);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(838);
          match(SiddhiqlParser::FOLLOWED_BY);
          setState(839);
          left_absent_pattern_source(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Left_absent_pattern_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLeft_absent_pattern_source);
          setState(840);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(841);
          match(SiddhiqlParser::FOLLOWED_BY);
          setState(842);
          every_absent_pattern_source();
          break;
        }

        } 
      }
      setState(847);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Right_absent_pattern_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Right_absent_pattern_sourceContext::Right_absent_pattern_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Right_absent_pattern_sourceContext *> SiddhiqlParser::Right_absent_pattern_sourceContext::right_absent_pattern_source() {
  return getRuleContexts<SiddhiqlParser::Right_absent_pattern_sourceContext>();
}

SiddhiqlParser::Right_absent_pattern_sourceContext* SiddhiqlParser::Right_absent_pattern_sourceContext::right_absent_pattern_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Right_absent_pattern_sourceContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Right_absent_pattern_sourceContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Right_absent_pattern_sourceContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Every_pattern_source_chainContext* SiddhiqlParser::Right_absent_pattern_sourceContext::every_pattern_source_chain() {
  return getRuleContext<SiddhiqlParser::Every_pattern_source_chainContext>(0);
}

SiddhiqlParser::Every_absent_pattern_sourceContext* SiddhiqlParser::Right_absent_pattern_sourceContext::every_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Every_absent_pattern_sourceContext>(0);
}


size_t SiddhiqlParser::Right_absent_pattern_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleRight_absent_pattern_source;
}

antlrcpp::Any SiddhiqlParser::Right_absent_pattern_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitRight_absent_pattern_source(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Right_absent_pattern_sourceContext* SiddhiqlParser::right_absent_pattern_source() {
   return right_absent_pattern_source(0);
}

SiddhiqlParser::Right_absent_pattern_sourceContext* SiddhiqlParser::right_absent_pattern_source(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Right_absent_pattern_sourceContext *_localctx = _tracker.createInstance<Right_absent_pattern_sourceContext>(_ctx, parentState);
  SiddhiqlParser::Right_absent_pattern_sourceContext *previousContext = _localctx;
  size_t startState = 96;
  enterRecursionRule(_localctx, 96, SiddhiqlParser::RuleRight_absent_pattern_source, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(866);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      setState(850);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::EVERY) {
        setState(849);
        match(SiddhiqlParser::EVERY);
      }
      setState(852);
      match(SiddhiqlParser::OPEN_PAR);
      setState(853);
      right_absent_pattern_source(0);
      setState(854);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(856);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
      case 1: {
        setState(855);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(858);
      every_pattern_source_chain(0);
      setState(859);
      match(SiddhiqlParser::FOLLOWED_BY);
      setState(860);
      every_absent_pattern_source();
      break;
    }

    case 3: {
      setState(862);
      every_absent_pattern_source();
      setState(863);
      match(SiddhiqlParser::FOLLOWED_BY);
      setState(864);
      right_absent_pattern_source(2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(876);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(874);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Right_absent_pattern_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRight_absent_pattern_source);
          setState(868);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(869);
          match(SiddhiqlParser::FOLLOWED_BY);
          setState(870);
          right_absent_pattern_source(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Right_absent_pattern_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRight_absent_pattern_source);
          setState(871);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(872);
          match(SiddhiqlParser::FOLLOWED_BY);
          setState(873);
          every_pattern_source_chain(0);
          break;
        }

        } 
      }
      setState(878);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Pattern_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Pattern_sourceContext::Pattern_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Logical_stateful_sourceContext* SiddhiqlParser::Pattern_sourceContext::logical_stateful_source() {
  return getRuleContext<SiddhiqlParser::Logical_stateful_sourceContext>(0);
}

SiddhiqlParser::Pattern_collection_stateful_sourceContext* SiddhiqlParser::Pattern_sourceContext::pattern_collection_stateful_source() {
  return getRuleContext<SiddhiqlParser::Pattern_collection_stateful_sourceContext>(0);
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::Pattern_sourceContext::standard_stateful_source() {
  return getRuleContext<SiddhiqlParser::Standard_stateful_sourceContext>(0);
}

SiddhiqlParser::Logical_absent_stateful_sourceContext* SiddhiqlParser::Pattern_sourceContext::logical_absent_stateful_source() {
  return getRuleContext<SiddhiqlParser::Logical_absent_stateful_sourceContext>(0);
}


size_t SiddhiqlParser::Pattern_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RulePattern_source;
}

antlrcpp::Any SiddhiqlParser::Pattern_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPattern_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Pattern_sourceContext* SiddhiqlParser::pattern_source() {
  Pattern_sourceContext *_localctx = _tracker.createInstance<Pattern_sourceContext>(_ctx, getState());
  enterRule(_localctx, 98, SiddhiqlParser::RulePattern_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(883);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(879);
      logical_stateful_source();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(880);
      pattern_collection_stateful_source();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(881);
      standard_stateful_source();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(882);
      logical_absent_stateful_source();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_stateful_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Logical_stateful_sourceContext::Logical_stateful_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Standard_stateful_sourceContext *> SiddhiqlParser::Logical_stateful_sourceContext::standard_stateful_source() {
  return getRuleContexts<SiddhiqlParser::Standard_stateful_sourceContext>();
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::Logical_stateful_sourceContext::standard_stateful_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Standard_stateful_sourceContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Logical_stateful_sourceContext::AND() {
  return getToken(SiddhiqlParser::AND, 0);
}

tree::TerminalNode* SiddhiqlParser::Logical_stateful_sourceContext::OR() {
  return getToken(SiddhiqlParser::OR, 0);
}


size_t SiddhiqlParser::Logical_stateful_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleLogical_stateful_source;
}

antlrcpp::Any SiddhiqlParser::Logical_stateful_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitLogical_stateful_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Logical_stateful_sourceContext* SiddhiqlParser::logical_stateful_source() {
  Logical_stateful_sourceContext *_localctx = _tracker.createInstance<Logical_stateful_sourceContext>(_ctx, getState());
  enterRule(_localctx, 100, SiddhiqlParser::RuleLogical_stateful_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(893);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(885);
      standard_stateful_source();
      setState(886);
      match(SiddhiqlParser::AND);
      setState(887);
      standard_stateful_source();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(889);
      standard_stateful_source();
      setState(890);
      match(SiddhiqlParser::OR);
      setState(891);
      standard_stateful_source();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_absent_stateful_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Logical_absent_stateful_sourceContext::Logical_absent_stateful_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Logical_absent_stateful_sourceContext* SiddhiqlParser::Logical_absent_stateful_sourceContext::logical_absent_stateful_source() {
  return getRuleContext<SiddhiqlParser::Logical_absent_stateful_sourceContext>(0);
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::Logical_absent_stateful_sourceContext::standard_stateful_source() {
  return getRuleContext<SiddhiqlParser::Standard_stateful_sourceContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Logical_absent_stateful_sourceContext::AND() {
  return getToken(SiddhiqlParser::AND, 0);
}

tree::TerminalNode* SiddhiqlParser::Logical_absent_stateful_sourceContext::NOT() {
  return getToken(SiddhiqlParser::NOT, 0);
}

SiddhiqlParser::Basic_sourceContext* SiddhiqlParser::Logical_absent_stateful_sourceContext::basic_source() {
  return getRuleContext<SiddhiqlParser::Basic_sourceContext>(0);
}

std::vector<SiddhiqlParser::Basic_absent_pattern_sourceContext *> SiddhiqlParser::Logical_absent_stateful_sourceContext::basic_absent_pattern_source() {
  return getRuleContexts<SiddhiqlParser::Basic_absent_pattern_sourceContext>();
}

SiddhiqlParser::Basic_absent_pattern_sourceContext* SiddhiqlParser::Logical_absent_stateful_sourceContext::basic_absent_pattern_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Basic_absent_pattern_sourceContext>(i);
}

tree::TerminalNode* SiddhiqlParser::Logical_absent_stateful_sourceContext::OR() {
  return getToken(SiddhiqlParser::OR, 0);
}


size_t SiddhiqlParser::Logical_absent_stateful_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleLogical_absent_stateful_source;
}

antlrcpp::Any SiddhiqlParser::Logical_absent_stateful_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitLogical_absent_stateful_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Logical_absent_stateful_sourceContext* SiddhiqlParser::logical_absent_stateful_source() {
  Logical_absent_stateful_sourceContext *_localctx = _tracker.createInstance<Logical_absent_stateful_sourceContext>(_ctx, getState());
  enterRule(_localctx, 102, SiddhiqlParser::RuleLogical_absent_stateful_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(933);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(895);
      match(SiddhiqlParser::OPEN_PAR);
      setState(896);
      logical_absent_stateful_source();
      setState(897);
      match(SiddhiqlParser::CLOSE_PAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(899);
      standard_stateful_source();
      setState(900);
      match(SiddhiqlParser::AND);
      setState(901);
      match(SiddhiqlParser::NOT);
      setState(902);
      basic_source();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(904);
      match(SiddhiqlParser::NOT);
      setState(905);
      basic_source();
      setState(906);
      match(SiddhiqlParser::AND);
      setState(907);
      standard_stateful_source();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(909);
      standard_stateful_source();
      setState(910);
      match(SiddhiqlParser::AND);
      setState(911);
      basic_absent_pattern_source();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(913);
      basic_absent_pattern_source();
      setState(914);
      match(SiddhiqlParser::AND);
      setState(915);
      standard_stateful_source();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(917);
      basic_absent_pattern_source();
      setState(918);
      match(SiddhiqlParser::AND);
      setState(919);
      basic_absent_pattern_source();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(921);
      standard_stateful_source();
      setState(922);
      match(SiddhiqlParser::OR);
      setState(923);
      basic_absent_pattern_source();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(925);
      basic_absent_pattern_source();
      setState(926);
      match(SiddhiqlParser::OR);
      setState(927);
      standard_stateful_source();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(929);
      basic_absent_pattern_source();
      setState(930);
      match(SiddhiqlParser::OR);
      setState(931);
      basic_absent_pattern_source();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Every_absent_pattern_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Every_absent_pattern_sourceContext::Every_absent_pattern_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Basic_absent_pattern_sourceContext* SiddhiqlParser::Every_absent_pattern_sourceContext::basic_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Basic_absent_pattern_sourceContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Every_absent_pattern_sourceContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}


size_t SiddhiqlParser::Every_absent_pattern_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleEvery_absent_pattern_source;
}

antlrcpp::Any SiddhiqlParser::Every_absent_pattern_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitEvery_absent_pattern_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Every_absent_pattern_sourceContext* SiddhiqlParser::every_absent_pattern_source() {
  Every_absent_pattern_sourceContext *_localctx = _tracker.createInstance<Every_absent_pattern_sourceContext>(_ctx, getState());
  enterRule(_localctx, 104, SiddhiqlParser::RuleEvery_absent_pattern_source);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(936);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::EVERY) {
      setState(935);
      match(SiddhiqlParser::EVERY);
    }
    setState(938);
    basic_absent_pattern_source();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_absent_pattern_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Basic_absent_pattern_sourceContext::Basic_absent_pattern_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Basic_absent_pattern_sourceContext::NOT() {
  return getToken(SiddhiqlParser::NOT, 0);
}

SiddhiqlParser::Basic_sourceContext* SiddhiqlParser::Basic_absent_pattern_sourceContext::basic_source() {
  return getRuleContext<SiddhiqlParser::Basic_sourceContext>(0);
}

SiddhiqlParser::For_timeContext* SiddhiqlParser::Basic_absent_pattern_sourceContext::for_time() {
  return getRuleContext<SiddhiqlParser::For_timeContext>(0);
}


size_t SiddhiqlParser::Basic_absent_pattern_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleBasic_absent_pattern_source;
}

antlrcpp::Any SiddhiqlParser::Basic_absent_pattern_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitBasic_absent_pattern_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Basic_absent_pattern_sourceContext* SiddhiqlParser::basic_absent_pattern_source() {
  Basic_absent_pattern_sourceContext *_localctx = _tracker.createInstance<Basic_absent_pattern_sourceContext>(_ctx, getState());
  enterRule(_localctx, 106, SiddhiqlParser::RuleBasic_absent_pattern_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(940);
    match(SiddhiqlParser::NOT);
    setState(941);
    basic_source();
    setState(942);
    for_time();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pattern_collection_stateful_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Pattern_collection_stateful_sourceContext::Pattern_collection_stateful_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::Pattern_collection_stateful_sourceContext::standard_stateful_source() {
  return getRuleContext<SiddhiqlParser::Standard_stateful_sourceContext>(0);
}

SiddhiqlParser::CollectContext* SiddhiqlParser::Pattern_collection_stateful_sourceContext::collect() {
  return getRuleContext<SiddhiqlParser::CollectContext>(0);
}


size_t SiddhiqlParser::Pattern_collection_stateful_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RulePattern_collection_stateful_source;
}

antlrcpp::Any SiddhiqlParser::Pattern_collection_stateful_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPattern_collection_stateful_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Pattern_collection_stateful_sourceContext* SiddhiqlParser::pattern_collection_stateful_source() {
  Pattern_collection_stateful_sourceContext *_localctx = _tracker.createInstance<Pattern_collection_stateful_sourceContext>(_ctx, getState());
  enterRule(_localctx, 108, SiddhiqlParser::RulePattern_collection_stateful_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(944);
    standard_stateful_source();
    setState(945);
    match(SiddhiqlParser::LT);
    setState(946);
    collect();
    setState(947);
    match(SiddhiqlParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Standard_stateful_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Standard_stateful_sourceContext::Standard_stateful_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Basic_sourceContext* SiddhiqlParser::Standard_stateful_sourceContext::basic_source() {
  return getRuleContext<SiddhiqlParser::Basic_sourceContext>(0);
}

SiddhiqlParser::EventContext* SiddhiqlParser::Standard_stateful_sourceContext::event() {
  return getRuleContext<SiddhiqlParser::EventContext>(0);
}


size_t SiddhiqlParser::Standard_stateful_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStandard_stateful_source;
}

antlrcpp::Any SiddhiqlParser::Standard_stateful_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStandard_stateful_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::standard_stateful_source() {
  Standard_stateful_sourceContext *_localctx = _tracker.createInstance<Standard_stateful_sourceContext>(_ctx, getState());
  enterRule(_localctx, 110, SiddhiqlParser::RuleStandard_stateful_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(952);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(949);
      event();
      setState(950);
      match(SiddhiqlParser::ASSIGN);
      break;
    }

    }
    setState(954);
    basic_source();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Basic_sourceContext::Basic_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::SourceContext* SiddhiqlParser::Basic_sourceContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}

SiddhiqlParser::Basic_source_stream_handlersContext* SiddhiqlParser::Basic_sourceContext::basic_source_stream_handlers() {
  return getRuleContext<SiddhiqlParser::Basic_source_stream_handlersContext>(0);
}


size_t SiddhiqlParser::Basic_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleBasic_source;
}

antlrcpp::Any SiddhiqlParser::Basic_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitBasic_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Basic_sourceContext* SiddhiqlParser::basic_source() {
  Basic_sourceContext *_localctx = _tracker.createInstance<Basic_sourceContext>(_ctx, getState());
  enterRule(_localctx, 112, SiddhiqlParser::RuleBasic_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(956);
    source();
    setState(958);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      setState(957);
      basic_source_stream_handlers();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_source_stream_handlersContext ------------------------------------------------------------------

SiddhiqlParser::Basic_source_stream_handlersContext::Basic_source_stream_handlersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Basic_source_stream_handlerContext *> SiddhiqlParser::Basic_source_stream_handlersContext::basic_source_stream_handler() {
  return getRuleContexts<SiddhiqlParser::Basic_source_stream_handlerContext>();
}

SiddhiqlParser::Basic_source_stream_handlerContext* SiddhiqlParser::Basic_source_stream_handlersContext::basic_source_stream_handler(size_t i) {
  return getRuleContext<SiddhiqlParser::Basic_source_stream_handlerContext>(i);
}


size_t SiddhiqlParser::Basic_source_stream_handlersContext::getRuleIndex() const {
  return SiddhiqlParser::RuleBasic_source_stream_handlers;
}

antlrcpp::Any SiddhiqlParser::Basic_source_stream_handlersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitBasic_source_stream_handlers(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Basic_source_stream_handlersContext* SiddhiqlParser::basic_source_stream_handlers() {
  Basic_source_stream_handlersContext *_localctx = _tracker.createInstance<Basic_source_stream_handlersContext>(_ctx, getState());
  enterRule(_localctx, 114, SiddhiqlParser::RuleBasic_source_stream_handlers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(961); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(960);
              basic_source_stream_handler();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(963); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_source_stream_handlerContext ------------------------------------------------------------------

SiddhiqlParser::Basic_source_stream_handlerContext::Basic_source_stream_handlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::FilterContext* SiddhiqlParser::Basic_source_stream_handlerContext::filter() {
  return getRuleContext<SiddhiqlParser::FilterContext>(0);
}

SiddhiqlParser::Stream_functionContext* SiddhiqlParser::Basic_source_stream_handlerContext::stream_function() {
  return getRuleContext<SiddhiqlParser::Stream_functionContext>(0);
}


size_t SiddhiqlParser::Basic_source_stream_handlerContext::getRuleIndex() const {
  return SiddhiqlParser::RuleBasic_source_stream_handler;
}

antlrcpp::Any SiddhiqlParser::Basic_source_stream_handlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitBasic_source_stream_handler(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Basic_source_stream_handlerContext* SiddhiqlParser::basic_source_stream_handler() {
  Basic_source_stream_handlerContext *_localctx = _tracker.createInstance<Basic_source_stream_handlerContext>(_ctx, getState());
  enterRule(_localctx, 116, SiddhiqlParser::RuleBasic_source_stream_handler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(967);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(965);
      filter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(966);
      stream_function();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sequence_streamContext ------------------------------------------------------------------

SiddhiqlParser::Sequence_streamContext::Sequence_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Every_sequence_source_chainContext* SiddhiqlParser::Sequence_streamContext::every_sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Every_sequence_source_chainContext>(0);
}

SiddhiqlParser::Every_absent_sequence_source_chainContext* SiddhiqlParser::Sequence_streamContext::every_absent_sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Every_absent_sequence_source_chainContext>(0);
}


size_t SiddhiqlParser::Sequence_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSequence_stream;
}

antlrcpp::Any SiddhiqlParser::Sequence_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSequence_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Sequence_streamContext* SiddhiqlParser::sequence_stream() {
  Sequence_streamContext *_localctx = _tracker.createInstance<Sequence_streamContext>(_ctx, getState());
  enterRule(_localctx, 118, SiddhiqlParser::RuleSequence_stream);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(971);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(969);
      every_sequence_source_chain();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(970);
      every_absent_sequence_source_chain();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Every_sequence_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Every_sequence_source_chainContext::Every_sequence_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Sequence_sourceContext* SiddhiqlParser::Every_sequence_source_chainContext::sequence_source() {
  return getRuleContext<SiddhiqlParser::Sequence_sourceContext>(0);
}

SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::Every_sequence_source_chainContext::sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Sequence_source_chainContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Every_sequence_source_chainContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Every_sequence_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}


size_t SiddhiqlParser::Every_sequence_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RuleEvery_sequence_source_chain;
}

antlrcpp::Any SiddhiqlParser::Every_sequence_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitEvery_sequence_source_chain(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Every_sequence_source_chainContext* SiddhiqlParser::every_sequence_source_chain() {
  Every_sequence_source_chainContext *_localctx = _tracker.createInstance<Every_sequence_source_chainContext>(_ctx, getState());
  enterRule(_localctx, 120, SiddhiqlParser::RuleEvery_sequence_source_chain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(974);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      setState(973);
      match(SiddhiqlParser::EVERY);
      break;
    }

    }
    setState(976);
    sequence_source();
    setState(978);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::WITHIN) {
      setState(977);
      within_time();
    }
    setState(980);
    match(SiddhiqlParser::COMMA);
    setState(981);
    sequence_source_chain(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Every_absent_sequence_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Every_absent_sequence_source_chainContext::Every_absent_sequence_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Absent_sequence_source_chainContext* SiddhiqlParser::Every_absent_sequence_source_chainContext::absent_sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Absent_sequence_source_chainContext>(0);
}

SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::Every_absent_sequence_source_chainContext::sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Sequence_source_chainContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Every_absent_sequence_source_chainContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Every_absent_sequence_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Sequence_sourceContext* SiddhiqlParser::Every_absent_sequence_source_chainContext::sequence_source() {
  return getRuleContext<SiddhiqlParser::Sequence_sourceContext>(0);
}


size_t SiddhiqlParser::Every_absent_sequence_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RuleEvery_absent_sequence_source_chain;
}

antlrcpp::Any SiddhiqlParser::Every_absent_sequence_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitEvery_absent_sequence_source_chain(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Every_absent_sequence_source_chainContext* SiddhiqlParser::every_absent_sequence_source_chain() {
  Every_absent_sequence_source_chainContext *_localctx = _tracker.createInstance<Every_absent_sequence_source_chainContext>(_ctx, getState());
  enterRule(_localctx, 122, SiddhiqlParser::RuleEvery_absent_sequence_source_chain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1003);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(984);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
      case 1: {
        setState(983);
        match(SiddhiqlParser::EVERY);
        break;
      }

      }
      setState(986);
      absent_sequence_source_chain();
      setState(988);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::WITHIN) {
        setState(987);
        within_time();
      }
      setState(990);
      match(SiddhiqlParser::COMMA);
      setState(991);
      sequence_source_chain(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(994);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
      case 1: {
        setState(993);
        match(SiddhiqlParser::EVERY);
        break;
      }

      }
      setState(996);
      sequence_source();
      setState(998);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::WITHIN) {
        setState(997);
        within_time();
      }
      setState(1000);
      match(SiddhiqlParser::COMMA);
      setState(1001);
      absent_sequence_source_chain();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Absent_sequence_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Absent_sequence_source_chainContext::Absent_sequence_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Absent_sequence_source_chainContext* SiddhiqlParser::Absent_sequence_source_chainContext::absent_sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Absent_sequence_source_chainContext>(0);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Absent_sequence_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Basic_absent_pattern_sourceContext* SiddhiqlParser::Absent_sequence_source_chainContext::basic_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Basic_absent_pattern_sourceContext>(0);
}

SiddhiqlParser::Left_absent_sequence_sourceContext* SiddhiqlParser::Absent_sequence_source_chainContext::left_absent_sequence_source() {
  return getRuleContext<SiddhiqlParser::Left_absent_sequence_sourceContext>(0);
}

SiddhiqlParser::Right_absent_sequence_sourceContext* SiddhiqlParser::Absent_sequence_source_chainContext::right_absent_sequence_source() {
  return getRuleContext<SiddhiqlParser::Right_absent_sequence_sourceContext>(0);
}


size_t SiddhiqlParser::Absent_sequence_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAbsent_sequence_source_chain;
}

antlrcpp::Any SiddhiqlParser::Absent_sequence_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAbsent_sequence_source_chain(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Absent_sequence_source_chainContext* SiddhiqlParser::absent_sequence_source_chain() {
  Absent_sequence_source_chainContext *_localctx = _tracker.createInstance<Absent_sequence_source_chainContext>(_ctx, getState());
  enterRule(_localctx, 124, SiddhiqlParser::RuleAbsent_sequence_source_chain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1014);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1005);
      match(SiddhiqlParser::OPEN_PAR);
      setState(1006);
      absent_sequence_source_chain();
      setState(1007);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(1009);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
      case 1: {
        setState(1008);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1011);
      basic_absent_pattern_source();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1012);
      left_absent_sequence_source(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1013);
      right_absent_sequence_source(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Left_absent_sequence_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Left_absent_sequence_sourceContext::Left_absent_sequence_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Left_absent_sequence_sourceContext *> SiddhiqlParser::Left_absent_sequence_sourceContext::left_absent_sequence_source() {
  return getRuleContexts<SiddhiqlParser::Left_absent_sequence_sourceContext>();
}

SiddhiqlParser::Left_absent_sequence_sourceContext* SiddhiqlParser::Left_absent_sequence_sourceContext::left_absent_sequence_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Left_absent_sequence_sourceContext>(i);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Left_absent_sequence_sourceContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Basic_absent_pattern_sourceContext* SiddhiqlParser::Left_absent_sequence_sourceContext::basic_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Basic_absent_pattern_sourceContext>(0);
}

SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::Left_absent_sequence_sourceContext::sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Sequence_source_chainContext>(0);
}


size_t SiddhiqlParser::Left_absent_sequence_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleLeft_absent_sequence_source;
}

antlrcpp::Any SiddhiqlParser::Left_absent_sequence_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitLeft_absent_sequence_source(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Left_absent_sequence_sourceContext* SiddhiqlParser::left_absent_sequence_source() {
   return left_absent_sequence_source(0);
}

SiddhiqlParser::Left_absent_sequence_sourceContext* SiddhiqlParser::left_absent_sequence_source(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Left_absent_sequence_sourceContext *_localctx = _tracker.createInstance<Left_absent_sequence_sourceContext>(_ctx, parentState);
  SiddhiqlParser::Left_absent_sequence_sourceContext *previousContext = _localctx;
  size_t startState = 126;
  enterRecursionRule(_localctx, 126, SiddhiqlParser::RuleLeft_absent_sequence_source, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1031);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      setState(1017);
      match(SiddhiqlParser::OPEN_PAR);
      setState(1018);
      left_absent_sequence_source(0);
      setState(1019);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(1021);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
      case 1: {
        setState(1020);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1023);
      basic_absent_pattern_source();
      setState(1024);
      match(SiddhiqlParser::COMMA);
      setState(1025);
      sequence_source_chain(0);
      break;
    }

    case 3: {
      setState(1027);
      sequence_source_chain(0);
      setState(1028);
      match(SiddhiqlParser::COMMA);
      setState(1029);
      left_absent_sequence_source(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1041);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1039);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Left_absent_sequence_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLeft_absent_sequence_source);
          setState(1033);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1034);
          match(SiddhiqlParser::COMMA);
          setState(1035);
          left_absent_sequence_source(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Left_absent_sequence_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLeft_absent_sequence_source);
          setState(1036);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1037);
          match(SiddhiqlParser::COMMA);
          setState(1038);
          basic_absent_pattern_source();
          break;
        }

        } 
      }
      setState(1043);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Right_absent_sequence_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Right_absent_sequence_sourceContext::Right_absent_sequence_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Right_absent_sequence_sourceContext *> SiddhiqlParser::Right_absent_sequence_sourceContext::right_absent_sequence_source() {
  return getRuleContexts<SiddhiqlParser::Right_absent_sequence_sourceContext>();
}

SiddhiqlParser::Right_absent_sequence_sourceContext* SiddhiqlParser::Right_absent_sequence_sourceContext::right_absent_sequence_source(size_t i) {
  return getRuleContext<SiddhiqlParser::Right_absent_sequence_sourceContext>(i);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Right_absent_sequence_sourceContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::Right_absent_sequence_sourceContext::sequence_source_chain() {
  return getRuleContext<SiddhiqlParser::Sequence_source_chainContext>(0);
}

SiddhiqlParser::Basic_absent_pattern_sourceContext* SiddhiqlParser::Right_absent_sequence_sourceContext::basic_absent_pattern_source() {
  return getRuleContext<SiddhiqlParser::Basic_absent_pattern_sourceContext>(0);
}


size_t SiddhiqlParser::Right_absent_sequence_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleRight_absent_sequence_source;
}

antlrcpp::Any SiddhiqlParser::Right_absent_sequence_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitRight_absent_sequence_source(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Right_absent_sequence_sourceContext* SiddhiqlParser::right_absent_sequence_source() {
   return right_absent_sequence_source(0);
}

SiddhiqlParser::Right_absent_sequence_sourceContext* SiddhiqlParser::right_absent_sequence_source(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Right_absent_sequence_sourceContext *_localctx = _tracker.createInstance<Right_absent_sequence_sourceContext>(_ctx, parentState);
  SiddhiqlParser::Right_absent_sequence_sourceContext *previousContext = _localctx;
  size_t startState = 128;
  enterRecursionRule(_localctx, 128, SiddhiqlParser::RuleRight_absent_sequence_source, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1059);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      setState(1045);
      match(SiddhiqlParser::OPEN_PAR);
      setState(1046);
      right_absent_sequence_source(0);
      setState(1047);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(1049);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
      case 1: {
        setState(1048);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1051);
      sequence_source_chain(0);
      setState(1052);
      match(SiddhiqlParser::COMMA);
      setState(1053);
      basic_absent_pattern_source();
      break;
    }

    case 3: {
      setState(1055);
      basic_absent_pattern_source();
      setState(1056);
      match(SiddhiqlParser::COMMA);
      setState(1057);
      right_absent_sequence_source(2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1069);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1067);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Right_absent_sequence_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRight_absent_sequence_source);
          setState(1061);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1062);
          match(SiddhiqlParser::COMMA);
          setState(1063);
          right_absent_sequence_source(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Right_absent_sequence_sourceContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRight_absent_sequence_source);
          setState(1064);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1065);
          match(SiddhiqlParser::COMMA);
          setState(1066);
          sequence_source_chain(0);
          break;
        }

        } 
      }
      setState(1071);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Sequence_source_chainContext ------------------------------------------------------------------

SiddhiqlParser::Sequence_source_chainContext::Sequence_source_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Sequence_source_chainContext *> SiddhiqlParser::Sequence_source_chainContext::sequence_source_chain() {
  return getRuleContexts<SiddhiqlParser::Sequence_source_chainContext>();
}

SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::Sequence_source_chainContext::sequence_source_chain(size_t i) {
  return getRuleContext<SiddhiqlParser::Sequence_source_chainContext>(i);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::Sequence_source_chainContext::within_time() {
  return getRuleContext<SiddhiqlParser::Within_timeContext>(0);
}

SiddhiqlParser::Sequence_sourceContext* SiddhiqlParser::Sequence_source_chainContext::sequence_source() {
  return getRuleContext<SiddhiqlParser::Sequence_sourceContext>(0);
}


size_t SiddhiqlParser::Sequence_source_chainContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSequence_source_chain;
}

antlrcpp::Any SiddhiqlParser::Sequence_source_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSequence_source_chain(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::sequence_source_chain() {
   return sequence_source_chain(0);
}

SiddhiqlParser::Sequence_source_chainContext* SiddhiqlParser::sequence_source_chain(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Sequence_source_chainContext *_localctx = _tracker.createInstance<Sequence_source_chainContext>(_ctx, parentState);
  SiddhiqlParser::Sequence_source_chainContext *previousContext = _localctx;
  size_t startState = 130;
  enterRecursionRule(_localctx, 130, SiddhiqlParser::RuleSequence_source_chain, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1083);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      setState(1073);
      match(SiddhiqlParser::OPEN_PAR);
      setState(1074);
      sequence_source_chain(0);
      setState(1075);
      match(SiddhiqlParser::CLOSE_PAR);
      setState(1077);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
      case 1: {
        setState(1076);
        within_time();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1079);
      sequence_source();
      setState(1081);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
      case 1: {
        setState(1080);
        within_time();
        break;
      }

      }
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1090);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Sequence_source_chainContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSequence_source_chain);
        setState(1085);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(1086);
        match(SiddhiqlParser::COMMA);
        setState(1087);
        sequence_source_chain(3); 
      }
      setState(1092);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Sequence_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Sequence_sourceContext::Sequence_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Logical_stateful_sourceContext* SiddhiqlParser::Sequence_sourceContext::logical_stateful_source() {
  return getRuleContext<SiddhiqlParser::Logical_stateful_sourceContext>(0);
}

SiddhiqlParser::Sequence_collection_stateful_sourceContext* SiddhiqlParser::Sequence_sourceContext::sequence_collection_stateful_source() {
  return getRuleContext<SiddhiqlParser::Sequence_collection_stateful_sourceContext>(0);
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::Sequence_sourceContext::standard_stateful_source() {
  return getRuleContext<SiddhiqlParser::Standard_stateful_sourceContext>(0);
}

SiddhiqlParser::Logical_absent_stateful_sourceContext* SiddhiqlParser::Sequence_sourceContext::logical_absent_stateful_source() {
  return getRuleContext<SiddhiqlParser::Logical_absent_stateful_sourceContext>(0);
}


size_t SiddhiqlParser::Sequence_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSequence_source;
}

antlrcpp::Any SiddhiqlParser::Sequence_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSequence_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Sequence_sourceContext* SiddhiqlParser::sequence_source() {
  Sequence_sourceContext *_localctx = _tracker.createInstance<Sequence_sourceContext>(_ctx, getState());
  enterRule(_localctx, 132, SiddhiqlParser::RuleSequence_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1097);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1093);
      logical_stateful_source();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1094);
      sequence_collection_stateful_source();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1095);
      standard_stateful_source();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1096);
      logical_absent_stateful_source();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sequence_collection_stateful_sourceContext ------------------------------------------------------------------

SiddhiqlParser::Sequence_collection_stateful_sourceContext::Sequence_collection_stateful_sourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Standard_stateful_sourceContext* SiddhiqlParser::Sequence_collection_stateful_sourceContext::standard_stateful_source() {
  return getRuleContext<SiddhiqlParser::Standard_stateful_sourceContext>(0);
}

SiddhiqlParser::CollectContext* SiddhiqlParser::Sequence_collection_stateful_sourceContext::collect() {
  return getRuleContext<SiddhiqlParser::CollectContext>(0);
}


size_t SiddhiqlParser::Sequence_collection_stateful_sourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSequence_collection_stateful_source;
}

antlrcpp::Any SiddhiqlParser::Sequence_collection_stateful_sourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSequence_collection_stateful_source(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Sequence_collection_stateful_sourceContext* SiddhiqlParser::sequence_collection_stateful_source() {
  Sequence_collection_stateful_sourceContext *_localctx = _tracker.createInstance<Sequence_collection_stateful_sourceContext>(_ctx, getState());
  enterRule(_localctx, 134, SiddhiqlParser::RuleSequence_collection_stateful_source);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1099);
    standard_stateful_source();
    setState(1107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::LT: {
        setState(1100);
        match(SiddhiqlParser::LT);
        setState(1101);
        collect();
        setState(1102);
        match(SiddhiqlParser::GT);
        break;
      }

      case SiddhiqlParser::STAR: {
        setState(1104);
        dynamic_cast<Sequence_collection_stateful_sourceContext *>(_localctx)->zero_or_more = match(SiddhiqlParser::STAR);
        break;
      }

      case SiddhiqlParser::QUESTION: {
        setState(1105);
        dynamic_cast<Sequence_collection_stateful_sourceContext *>(_localctx)->zero_or_one = match(SiddhiqlParser::QUESTION);
        break;
      }

      case SiddhiqlParser::PLUS: {
        setState(1106);
        dynamic_cast<Sequence_collection_stateful_sourceContext *>(_localctx)->one_or_more = match(SiddhiqlParser::PLUS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_streamContext ------------------------------------------------------------------

SiddhiqlParser::Anonymous_streamContext::Anonymous_streamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Anonymous_streamContext* SiddhiqlParser::Anonymous_streamContext::anonymous_stream() {
  return getRuleContext<SiddhiqlParser::Anonymous_streamContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Anonymous_streamContext::FROM() {
  return getToken(SiddhiqlParser::FROM, 0);
}

SiddhiqlParser::Query_inputContext* SiddhiqlParser::Anonymous_streamContext::query_input() {
  return getRuleContext<SiddhiqlParser::Query_inputContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Anonymous_streamContext::RETURN() {
  return getToken(SiddhiqlParser::RETURN, 0);
}

SiddhiqlParser::Query_sectionContext* SiddhiqlParser::Anonymous_streamContext::query_section() {
  return getRuleContext<SiddhiqlParser::Query_sectionContext>(0);
}

SiddhiqlParser::Output_rateContext* SiddhiqlParser::Anonymous_streamContext::output_rate() {
  return getRuleContext<SiddhiqlParser::Output_rateContext>(0);
}

SiddhiqlParser::Output_event_typeContext* SiddhiqlParser::Anonymous_streamContext::output_event_type() {
  return getRuleContext<SiddhiqlParser::Output_event_typeContext>(0);
}


size_t SiddhiqlParser::Anonymous_streamContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAnonymous_stream;
}

antlrcpp::Any SiddhiqlParser::Anonymous_streamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAnonymous_stream(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Anonymous_streamContext* SiddhiqlParser::anonymous_stream() {
  Anonymous_streamContext *_localctx = _tracker.createInstance<Anonymous_streamContext>(_ctx, getState());
  enterRule(_localctx, 136, SiddhiqlParser::RuleAnonymous_stream);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::OPEN_PAR: {
        enterOuterAlt(_localctx, 1);
        setState(1109);
        match(SiddhiqlParser::OPEN_PAR);
        setState(1110);
        anonymous_stream();
        setState(1111);
        match(SiddhiqlParser::CLOSE_PAR);
        break;
      }

      case SiddhiqlParser::FROM: {
        enterOuterAlt(_localctx, 2);
        setState(1113);
        match(SiddhiqlParser::FROM);
        setState(1114);
        query_input();
        setState(1116);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::SELECT) {
          setState(1115);
          query_section();
        }
        setState(1119);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::OUTPUT) {
          setState(1118);
          output_rate();
        }
        setState(1121);
        match(SiddhiqlParser::RETURN);
        setState(1123);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 53) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 53)) & ((1ULL << (SiddhiqlParser::EVENTS - 53))
          | (1ULL << (SiddhiqlParser::EXPIRED - 53))
          | (1ULL << (SiddhiqlParser::CURRENT - 53))
          | (1ULL << (SiddhiqlParser::ALL - 53)))) != 0)) {
          setState(1122);
          output_event_type();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterContext ------------------------------------------------------------------

SiddhiqlParser::FilterContext::FilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::FilterContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}


size_t SiddhiqlParser::FilterContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFilter;
}

antlrcpp::Any SiddhiqlParser::FilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFilter(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::FilterContext* SiddhiqlParser::filter() {
  FilterContext *_localctx = _tracker.createInstance<FilterContext>(_ctx, getState());
  enterRule(_localctx, 138, SiddhiqlParser::RuleFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::HASH) {
      setState(1127);
      match(SiddhiqlParser::HASH);
    }
    setState(1130);
    match(SiddhiqlParser::OPEN_SQUARE_BRACKETS);
    setState(1131);
    expression();
    setState(1132);
    match(SiddhiqlParser::CLOSE_SQUARE_BRACKETS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stream_functionContext ------------------------------------------------------------------

SiddhiqlParser::Stream_functionContext::Stream_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Function_operationContext* SiddhiqlParser::Stream_functionContext::function_operation() {
  return getRuleContext<SiddhiqlParser::Function_operationContext>(0);
}


size_t SiddhiqlParser::Stream_functionContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStream_function;
}

antlrcpp::Any SiddhiqlParser::Stream_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStream_function(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Stream_functionContext* SiddhiqlParser::stream_function() {
  Stream_functionContext *_localctx = _tracker.createInstance<Stream_functionContext>(_ctx, getState());
  enterRule(_localctx, 140, SiddhiqlParser::RuleStream_function);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1134);
    match(SiddhiqlParser::HASH);
    setState(1135);
    function_operation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WindowContext ------------------------------------------------------------------

SiddhiqlParser::WindowContext::WindowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::WindowContext::WINDOW() {
  return getToken(SiddhiqlParser::WINDOW, 0);
}

SiddhiqlParser::Function_operationContext* SiddhiqlParser::WindowContext::function_operation() {
  return getRuleContext<SiddhiqlParser::Function_operationContext>(0);
}


size_t SiddhiqlParser::WindowContext::getRuleIndex() const {
  return SiddhiqlParser::RuleWindow;
}

antlrcpp::Any SiddhiqlParser::WindowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitWindow(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::WindowContext* SiddhiqlParser::window() {
  WindowContext *_localctx = _tracker.createInstance<WindowContext>(_ctx, getState());
  enterRule(_localctx, 142, SiddhiqlParser::RuleWindow);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1137);
    match(SiddhiqlParser::HASH);
    setState(1138);
    match(SiddhiqlParser::WINDOW);
    setState(1139);
    match(SiddhiqlParser::DOT);
    setState(1140);
    function_operation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_by_query_selectionContext ------------------------------------------------------------------

SiddhiqlParser::Group_by_query_selectionContext::Group_by_query_selectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Group_by_query_selectionContext::SELECT() {
  return getToken(SiddhiqlParser::SELECT, 0);
}

SiddhiqlParser::Group_byContext* SiddhiqlParser::Group_by_query_selectionContext::group_by() {
  return getRuleContext<SiddhiqlParser::Group_byContext>(0);
}

std::vector<SiddhiqlParser::Output_attributeContext *> SiddhiqlParser::Group_by_query_selectionContext::output_attribute() {
  return getRuleContexts<SiddhiqlParser::Output_attributeContext>();
}

SiddhiqlParser::Output_attributeContext* SiddhiqlParser::Group_by_query_selectionContext::output_attribute(size_t i) {
  return getRuleContext<SiddhiqlParser::Output_attributeContext>(i);
}


size_t SiddhiqlParser::Group_by_query_selectionContext::getRuleIndex() const {
  return SiddhiqlParser::RuleGroup_by_query_selection;
}

antlrcpp::Any SiddhiqlParser::Group_by_query_selectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitGroup_by_query_selection(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Group_by_query_selectionContext* SiddhiqlParser::group_by_query_selection() {
  Group_by_query_selectionContext *_localctx = _tracker.createInstance<Group_by_query_selectionContext>(_ctx, getState());
  enterRule(_localctx, 144, SiddhiqlParser::RuleGroup_by_query_selection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1142);
    match(SiddhiqlParser::SELECT);
    setState(1152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::STAR: {
        setState(1143);
        match(SiddhiqlParser::STAR);
        break;
      }

      case SiddhiqlParser::INT_LITERAL:
      case SiddhiqlParser::LONG_LITERAL:
      case SiddhiqlParser::FLOAT_LITERAL:
      case SiddhiqlParser::DOUBLE_LITERAL:
      case SiddhiqlParser::OPEN_PAR:
      case SiddhiqlParser::PLUS:
      case SiddhiqlParser::MINUS:
      case SiddhiqlParser::HASH:
      case SiddhiqlParser::STREAM:
      case SiddhiqlParser::DEFINE:
      case SiddhiqlParser::TABLE:
      case SiddhiqlParser::APP:
      case SiddhiqlParser::FROM:
      case SiddhiqlParser::PARTITION:
      case SiddhiqlParser::WINDOW:
      case SiddhiqlParser::SELECT:
      case SiddhiqlParser::GROUP:
      case SiddhiqlParser::BY:
      case SiddhiqlParser::ORDER:
      case SiddhiqlParser::LIMIT:
      case SiddhiqlParser::ASC:
      case SiddhiqlParser::DESC:
      case SiddhiqlParser::HAVING:
      case SiddhiqlParser::INSERT:
      case SiddhiqlParser::DELETE:
      case SiddhiqlParser::UPDATE:
      case SiddhiqlParser::RETURN:
      case SiddhiqlParser::EVENTS:
      case SiddhiqlParser::INTO:
      case SiddhiqlParser::OUTPUT:
      case SiddhiqlParser::EXPIRED:
      case SiddhiqlParser::CURRENT:
      case SiddhiqlParser::SNAPSHOT:
      case SiddhiqlParser::FOR:
      case SiddhiqlParser::RAW:
      case SiddhiqlParser::OF:
      case SiddhiqlParser::AS:
      case SiddhiqlParser::OR:
      case SiddhiqlParser::AND:
      case SiddhiqlParser::ON:
      case SiddhiqlParser::IS:
      case SiddhiqlParser::NOT:
      case SiddhiqlParser::WITHIN:
      case SiddhiqlParser::WITH:
      case SiddhiqlParser::BEGIN:
      case SiddhiqlParser::END:
      case SiddhiqlParser::NUL:
      case SiddhiqlParser::EVERY:
      case SiddhiqlParser::LAST:
      case SiddhiqlParser::ALL:
      case SiddhiqlParser::FIRST:
      case SiddhiqlParser::JOIN:
      case SiddhiqlParser::INNER:
      case SiddhiqlParser::OUTER:
      case SiddhiqlParser::RIGHT:
      case SiddhiqlParser::LEFT:
      case SiddhiqlParser::FULL:
      case SiddhiqlParser::UNIDIRECTIONAL:
      case SiddhiqlParser::YEARS:
      case SiddhiqlParser::MONTHS:
      case SiddhiqlParser::WEEKS:
      case SiddhiqlParser::DAYS:
      case SiddhiqlParser::HOURS:
      case SiddhiqlParser::MINUTES:
      case SiddhiqlParser::SECONDS:
      case SiddhiqlParser::MILLISECONDS:
      case SiddhiqlParser::FALSE:
      case SiddhiqlParser::TRUE:
      case SiddhiqlParser::STRING:
      case SiddhiqlParser::INT:
      case SiddhiqlParser::LONG:
      case SiddhiqlParser::FLOAT:
      case SiddhiqlParser::DOUBLE:
      case SiddhiqlParser::BOOL:
      case SiddhiqlParser::OBJECT:
      case SiddhiqlParser::ID_QUOTES:
      case SiddhiqlParser::ID:
      case SiddhiqlParser::STRING_LITERAL: {
        setState(1144);
        output_attribute();
        setState(1149);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SiddhiqlParser::COMMA) {
          setState(1145);
          match(SiddhiqlParser::COMMA);
          setState(1146);
          output_attribute();
          setState(1151);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::GROUP) {
      setState(1154);
      group_by();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_sectionContext ------------------------------------------------------------------

SiddhiqlParser::Query_sectionContext::Query_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Query_sectionContext::SELECT() {
  return getToken(SiddhiqlParser::SELECT, 0);
}

SiddhiqlParser::Group_byContext* SiddhiqlParser::Query_sectionContext::group_by() {
  return getRuleContext<SiddhiqlParser::Group_byContext>(0);
}

SiddhiqlParser::HavingContext* SiddhiqlParser::Query_sectionContext::having() {
  return getRuleContext<SiddhiqlParser::HavingContext>(0);
}

SiddhiqlParser::Order_byContext* SiddhiqlParser::Query_sectionContext::order_by() {
  return getRuleContext<SiddhiqlParser::Order_byContext>(0);
}

SiddhiqlParser::LimitContext* SiddhiqlParser::Query_sectionContext::limit() {
  return getRuleContext<SiddhiqlParser::LimitContext>(0);
}

SiddhiqlParser::OffsetContext* SiddhiqlParser::Query_sectionContext::offset() {
  return getRuleContext<SiddhiqlParser::OffsetContext>(0);
}

std::vector<SiddhiqlParser::Output_attributeContext *> SiddhiqlParser::Query_sectionContext::output_attribute() {
  return getRuleContexts<SiddhiqlParser::Output_attributeContext>();
}

SiddhiqlParser::Output_attributeContext* SiddhiqlParser::Query_sectionContext::output_attribute(size_t i) {
  return getRuleContext<SiddhiqlParser::Output_attributeContext>(i);
}

std::vector<SiddhiqlParser::CommaContext *> SiddhiqlParser::Query_sectionContext::comma() {
  return getRuleContexts<SiddhiqlParser::CommaContext>();
}

SiddhiqlParser::CommaContext* SiddhiqlParser::Query_sectionContext::comma(size_t i) {
  return getRuleContext<SiddhiqlParser::CommaContext>(i);
}


size_t SiddhiqlParser::Query_sectionContext::getRuleIndex() const {
  return SiddhiqlParser::RuleQuery_section;
}

antlrcpp::Any SiddhiqlParser::Query_sectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitQuery_section(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Query_sectionContext* SiddhiqlParser::query_section() {
  Query_sectionContext *_localctx = _tracker.createInstance<Query_sectionContext>(_ctx, getState());
  enterRule(_localctx, 146, SiddhiqlParser::RuleQuery_section);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1157);
    match(SiddhiqlParser::SELECT);
    setState(1168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::STAR: {
        setState(1158);
        match(SiddhiqlParser::STAR);
        break;
      }

      case SiddhiqlParser::INT_LITERAL:
      case SiddhiqlParser::LONG_LITERAL:
      case SiddhiqlParser::FLOAT_LITERAL:
      case SiddhiqlParser::DOUBLE_LITERAL:
      case SiddhiqlParser::OPEN_PAR:
      case SiddhiqlParser::PLUS:
      case SiddhiqlParser::MINUS:
      case SiddhiqlParser::HASH:
      case SiddhiqlParser::STREAM:
      case SiddhiqlParser::DEFINE:
      case SiddhiqlParser::TABLE:
      case SiddhiqlParser::APP:
      case SiddhiqlParser::FROM:
      case SiddhiqlParser::PARTITION:
      case SiddhiqlParser::WINDOW:
      case SiddhiqlParser::SELECT:
      case SiddhiqlParser::GROUP:
      case SiddhiqlParser::BY:
      case SiddhiqlParser::ORDER:
      case SiddhiqlParser::LIMIT:
      case SiddhiqlParser::ASC:
      case SiddhiqlParser::DESC:
      case SiddhiqlParser::HAVING:
      case SiddhiqlParser::INSERT:
      case SiddhiqlParser::DELETE:
      case SiddhiqlParser::UPDATE:
      case SiddhiqlParser::RETURN:
      case SiddhiqlParser::EVENTS:
      case SiddhiqlParser::INTO:
      case SiddhiqlParser::OUTPUT:
      case SiddhiqlParser::EXPIRED:
      case SiddhiqlParser::CURRENT:
      case SiddhiqlParser::SNAPSHOT:
      case SiddhiqlParser::FOR:
      case SiddhiqlParser::RAW:
      case SiddhiqlParser::OF:
      case SiddhiqlParser::AS:
      case SiddhiqlParser::OR:
      case SiddhiqlParser::AND:
      case SiddhiqlParser::ON:
      case SiddhiqlParser::IS:
      case SiddhiqlParser::NOT:
      case SiddhiqlParser::WITHIN:
      case SiddhiqlParser::WITH:
      case SiddhiqlParser::BEGIN:
      case SiddhiqlParser::END:
      case SiddhiqlParser::NUL:
      case SiddhiqlParser::EVERY:
      case SiddhiqlParser::LAST:
      case SiddhiqlParser::ALL:
      case SiddhiqlParser::FIRST:
      case SiddhiqlParser::JOIN:
      case SiddhiqlParser::INNER:
      case SiddhiqlParser::OUTER:
      case SiddhiqlParser::RIGHT:
      case SiddhiqlParser::LEFT:
      case SiddhiqlParser::FULL:
      case SiddhiqlParser::UNIDIRECTIONAL:
      case SiddhiqlParser::YEARS:
      case SiddhiqlParser::MONTHS:
      case SiddhiqlParser::WEEKS:
      case SiddhiqlParser::DAYS:
      case SiddhiqlParser::HOURS:
      case SiddhiqlParser::MINUTES:
      case SiddhiqlParser::SECONDS:
      case SiddhiqlParser::MILLISECONDS:
      case SiddhiqlParser::FALSE:
      case SiddhiqlParser::TRUE:
      case SiddhiqlParser::STRING:
      case SiddhiqlParser::INT:
      case SiddhiqlParser::LONG:
      case SiddhiqlParser::FLOAT:
      case SiddhiqlParser::DOUBLE:
      case SiddhiqlParser::BOOL:
      case SiddhiqlParser::OBJECT:
      case SiddhiqlParser::ID_QUOTES:
      case SiddhiqlParser::ID:
      case SiddhiqlParser::STRING_LITERAL: {
        setState(1159);
        output_attribute();
        setState(1165);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SiddhiqlParser::COMMA) {
          setState(1160);
          comma();
          setState(1161);
          output_attribute();
          setState(1167);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::GROUP) {
      setState(1170);
      group_by();
    }
    setState(1174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::HAVING) {
      setState(1173);
      having();
    }
    setState(1177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::ORDER) {
      setState(1176);
      order_by();
    }
    setState(1180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::LIMIT) {
      setState(1179);
      limit();
    }
    setState(1183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OFFSET) {
      setState(1182);
      offset();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_byContext ------------------------------------------------------------------

SiddhiqlParser::Group_byContext::Group_byContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Group_byContext::GROUP() {
  return getToken(SiddhiqlParser::GROUP, 0);
}

tree::TerminalNode* SiddhiqlParser::Group_byContext::BY() {
  return getToken(SiddhiqlParser::BY, 0);
}

std::vector<SiddhiqlParser::Attribute_referenceContext *> SiddhiqlParser::Group_byContext::attribute_reference() {
  return getRuleContexts<SiddhiqlParser::Attribute_referenceContext>();
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Group_byContext::attribute_reference(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(i);
}


size_t SiddhiqlParser::Group_byContext::getRuleIndex() const {
  return SiddhiqlParser::RuleGroup_by;
}

antlrcpp::Any SiddhiqlParser::Group_byContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitGroup_by(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Group_byContext* SiddhiqlParser::group_by() {
  Group_byContext *_localctx = _tracker.createInstance<Group_byContext>(_ctx, getState());
  enterRule(_localctx, 148, SiddhiqlParser::RuleGroup_by);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1185);
    match(SiddhiqlParser::GROUP);
    setState(1186);
    match(SiddhiqlParser::BY);
    setState(1187);
    attribute_reference();
    setState(1192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(1188);
      match(SiddhiqlParser::COMMA);
      setState(1189);
      attribute_reference();
      setState(1194);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HavingContext ------------------------------------------------------------------

SiddhiqlParser::HavingContext::HavingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::HavingContext::HAVING() {
  return getToken(SiddhiqlParser::HAVING, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::HavingContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}


size_t SiddhiqlParser::HavingContext::getRuleIndex() const {
  return SiddhiqlParser::RuleHaving;
}

antlrcpp::Any SiddhiqlParser::HavingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitHaving(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::HavingContext* SiddhiqlParser::having() {
  HavingContext *_localctx = _tracker.createInstance<HavingContext>(_ctx, getState());
  enterRule(_localctx, 150, SiddhiqlParser::RuleHaving);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1195);
    match(SiddhiqlParser::HAVING);
    setState(1196);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Order_byContext ------------------------------------------------------------------

SiddhiqlParser::Order_byContext::Order_byContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Order_byContext::ORDER() {
  return getToken(SiddhiqlParser::ORDER, 0);
}

tree::TerminalNode* SiddhiqlParser::Order_byContext::BY() {
  return getToken(SiddhiqlParser::BY, 0);
}

std::vector<SiddhiqlParser::Order_by_referenceContext *> SiddhiqlParser::Order_byContext::order_by_reference() {
  return getRuleContexts<SiddhiqlParser::Order_by_referenceContext>();
}

SiddhiqlParser::Order_by_referenceContext* SiddhiqlParser::Order_byContext::order_by_reference(size_t i) {
  return getRuleContext<SiddhiqlParser::Order_by_referenceContext>(i);
}


size_t SiddhiqlParser::Order_byContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOrder_by;
}

antlrcpp::Any SiddhiqlParser::Order_byContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOrder_by(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Order_byContext* SiddhiqlParser::order_by() {
  Order_byContext *_localctx = _tracker.createInstance<Order_byContext>(_ctx, getState());
  enterRule(_localctx, 152, SiddhiqlParser::RuleOrder_by);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1198);
    match(SiddhiqlParser::ORDER);
    setState(1199);
    match(SiddhiqlParser::BY);
    setState(1200);
    order_by_reference();
    setState(1205);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(1201);
      match(SiddhiqlParser::COMMA);
      setState(1202);
      order_by_reference();
      setState(1207);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Order_by_referenceContext ------------------------------------------------------------------

SiddhiqlParser::Order_by_referenceContext::Order_by_referenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Order_by_referenceContext::attribute_reference() {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(0);
}

SiddhiqlParser::OrderContext* SiddhiqlParser::Order_by_referenceContext::order() {
  return getRuleContext<SiddhiqlParser::OrderContext>(0);
}


size_t SiddhiqlParser::Order_by_referenceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOrder_by_reference;
}

antlrcpp::Any SiddhiqlParser::Order_by_referenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOrder_by_reference(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Order_by_referenceContext* SiddhiqlParser::order_by_reference() {
  Order_by_referenceContext *_localctx = _tracker.createInstance<Order_by_referenceContext>(_ctx, getState());
  enterRule(_localctx, 154, SiddhiqlParser::RuleOrder_by_reference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1208);
    attribute_reference();
    setState(1210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::ASC

    || _la == SiddhiqlParser::DESC) {
      setState(1209);
      order();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderContext ------------------------------------------------------------------

SiddhiqlParser::OrderContext::OrderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::OrderContext::ASC() {
  return getToken(SiddhiqlParser::ASC, 0);
}

tree::TerminalNode* SiddhiqlParser::OrderContext::DESC() {
  return getToken(SiddhiqlParser::DESC, 0);
}


size_t SiddhiqlParser::OrderContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOrder;
}

antlrcpp::Any SiddhiqlParser::OrderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOrder(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::OrderContext* SiddhiqlParser::order() {
  OrderContext *_localctx = _tracker.createInstance<OrderContext>(_ctx, getState());
  enterRule(_localctx, 156, SiddhiqlParser::RuleOrder);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1212);
    _la = _input->LA(1);
    if (!(_la == SiddhiqlParser::ASC

    || _la == SiddhiqlParser::DESC)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitContext ------------------------------------------------------------------

SiddhiqlParser::LimitContext::LimitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::LimitContext::LIMIT() {
  return getToken(SiddhiqlParser::LIMIT, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::LimitContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}


size_t SiddhiqlParser::LimitContext::getRuleIndex() const {
  return SiddhiqlParser::RuleLimit;
}

antlrcpp::Any SiddhiqlParser::LimitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitLimit(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::LimitContext* SiddhiqlParser::limit() {
  LimitContext *_localctx = _tracker.createInstance<LimitContext>(_ctx, getState());
  enterRule(_localctx, 158, SiddhiqlParser::RuleLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1214);
    match(SiddhiqlParser::LIMIT);
    setState(1215);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OffsetContext ------------------------------------------------------------------

SiddhiqlParser::OffsetContext::OffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::OffsetContext::OFFSET() {
  return getToken(SiddhiqlParser::OFFSET, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::OffsetContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}


size_t SiddhiqlParser::OffsetContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOffset;
}

antlrcpp::Any SiddhiqlParser::OffsetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOffset(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::OffsetContext* SiddhiqlParser::offset() {
  OffsetContext *_localctx = _tracker.createInstance<OffsetContext>(_ctx, getState());
  enterRule(_localctx, 160, SiddhiqlParser::RuleOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1217);
    match(SiddhiqlParser::OFFSET);
    setState(1218);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_outputContext ------------------------------------------------------------------

SiddhiqlParser::Query_outputContext::Query_outputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::INSERT() {
  return getToken(SiddhiqlParser::INSERT, 0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::INTO() {
  return getToken(SiddhiqlParser::INTO, 0);
}

SiddhiqlParser::TargetContext* SiddhiqlParser::Query_outputContext::target() {
  return getRuleContext<SiddhiqlParser::TargetContext>(0);
}

SiddhiqlParser::Output_event_typeContext* SiddhiqlParser::Query_outputContext::output_event_type() {
  return getRuleContext<SiddhiqlParser::Output_event_typeContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::DELETE() {
  return getToken(SiddhiqlParser::DELETE, 0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::ON() {
  return getToken(SiddhiqlParser::ON, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Query_outputContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::FOR() {
  return getToken(SiddhiqlParser::FOR, 0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::UPDATE() {
  return getToken(SiddhiqlParser::UPDATE, 0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::OR() {
  return getToken(SiddhiqlParser::OR, 0);
}

SiddhiqlParser::Set_clauseContext* SiddhiqlParser::Query_outputContext::set_clause() {
  return getRuleContext<SiddhiqlParser::Set_clauseContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Query_outputContext::RETURN() {
  return getToken(SiddhiqlParser::RETURN, 0);
}


size_t SiddhiqlParser::Query_outputContext::getRuleIndex() const {
  return SiddhiqlParser::RuleQuery_output;
}

antlrcpp::Any SiddhiqlParser::Query_outputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitQuery_output(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Query_outputContext* SiddhiqlParser::query_output() {
  Query_outputContext *_localctx = _tracker.createInstance<Query_outputContext>(_ctx, getState());
  enterRule(_localctx, 162, SiddhiqlParser::RuleQuery_output);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1220);
      match(SiddhiqlParser::INSERT);
      setState(1222);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 53) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 53)) & ((1ULL << (SiddhiqlParser::EVENTS - 53))
        | (1ULL << (SiddhiqlParser::EXPIRED - 53))
        | (1ULL << (SiddhiqlParser::CURRENT - 53))
        | (1ULL << (SiddhiqlParser::ALL - 53)))) != 0)) {
        setState(1221);
        output_event_type();
      }
      setState(1224);
      match(SiddhiqlParser::INTO);
      setState(1225);
      target();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1226);
      match(SiddhiqlParser::DELETE);
      setState(1227);
      target();
      setState(1230);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::FOR) {
        setState(1228);
        match(SiddhiqlParser::FOR);
        setState(1229);
        output_event_type();
      }
      setState(1232);
      match(SiddhiqlParser::ON);
      setState(1233);
      expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1235);
      match(SiddhiqlParser::UPDATE);
      setState(1236);
      match(SiddhiqlParser::OR);
      setState(1237);
      match(SiddhiqlParser::INSERT);
      setState(1238);
      match(SiddhiqlParser::INTO);
      setState(1239);
      target();
      setState(1242);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::FOR) {
        setState(1240);
        match(SiddhiqlParser::FOR);
        setState(1241);
        output_event_type();
      }
      setState(1245);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::SET) {
        setState(1244);
        set_clause();
      }
      setState(1247);
      match(SiddhiqlParser::ON);
      setState(1248);
      expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1250);
      match(SiddhiqlParser::UPDATE);
      setState(1251);
      target();
      setState(1254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::FOR) {
        setState(1252);
        match(SiddhiqlParser::FOR);
        setState(1253);
        output_event_type();
      }
      setState(1257);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::SET) {
        setState(1256);
        set_clause();
      }
      setState(1259);
      match(SiddhiqlParser::ON);
      setState(1260);
      expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1262);
      match(SiddhiqlParser::RETURN);
      setState(1264);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 53) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 53)) & ((1ULL << (SiddhiqlParser::EVENTS - 53))
        | (1ULL << (SiddhiqlParser::EXPIRED - 53))
        | (1ULL << (SiddhiqlParser::CURRENT - 53))
        | (1ULL << (SiddhiqlParser::ALL - 53)))) != 0)) {
        setState(1263);
        output_event_type();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Store_query_outputContext ------------------------------------------------------------------

SiddhiqlParser::Store_query_outputContext::Store_query_outputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Store_query_outputContext::DELETE() {
  return getToken(SiddhiqlParser::DELETE, 0);
}

SiddhiqlParser::TargetContext* SiddhiqlParser::Store_query_outputContext::target() {
  return getRuleContext<SiddhiqlParser::TargetContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Store_query_outputContext::ON() {
  return getToken(SiddhiqlParser::ON, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Store_query_outputContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Store_query_outputContext::UPDATE() {
  return getToken(SiddhiqlParser::UPDATE, 0);
}

SiddhiqlParser::Set_clauseContext* SiddhiqlParser::Store_query_outputContext::set_clause() {
  return getRuleContext<SiddhiqlParser::Set_clauseContext>(0);
}


size_t SiddhiqlParser::Store_query_outputContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStore_query_output;
}

antlrcpp::Any SiddhiqlParser::Store_query_outputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStore_query_output(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Store_query_outputContext* SiddhiqlParser::store_query_output() {
  Store_query_outputContext *_localctx = _tracker.createInstance<Store_query_outputContext>(_ctx, getState());
  enterRule(_localctx, 164, SiddhiqlParser::RuleStore_query_output);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1281);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::DELETE: {
        enterOuterAlt(_localctx, 1);
        setState(1268);
        match(SiddhiqlParser::DELETE);
        setState(1269);
        target();
        setState(1270);
        match(SiddhiqlParser::ON);
        setState(1271);
        expression();
        break;
      }

      case SiddhiqlParser::UPDATE: {
        enterOuterAlt(_localctx, 2);
        setState(1273);
        match(SiddhiqlParser::UPDATE);
        setState(1274);
        target();
        setState(1276);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::SET) {
          setState(1275);
          set_clause();
        }
        setState(1278);
        match(SiddhiqlParser::ON);
        setState(1279);
        expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_clauseContext ------------------------------------------------------------------

SiddhiqlParser::Set_clauseContext::Set_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Set_clauseContext::SET() {
  return getToken(SiddhiqlParser::SET, 0);
}

std::vector<SiddhiqlParser::Set_assignmentContext *> SiddhiqlParser::Set_clauseContext::set_assignment() {
  return getRuleContexts<SiddhiqlParser::Set_assignmentContext>();
}

SiddhiqlParser::Set_assignmentContext* SiddhiqlParser::Set_clauseContext::set_assignment(size_t i) {
  return getRuleContext<SiddhiqlParser::Set_assignmentContext>(i);
}


size_t SiddhiqlParser::Set_clauseContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSet_clause;
}

antlrcpp::Any SiddhiqlParser::Set_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSet_clause(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Set_clauseContext* SiddhiqlParser::set_clause() {
  Set_clauseContext *_localctx = _tracker.createInstance<Set_clauseContext>(_ctx, getState());
  enterRule(_localctx, 166, SiddhiqlParser::RuleSet_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1283);
    match(SiddhiqlParser::SET);
    setState(1284);
    set_assignment();
    setState(1289);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(1285);
      match(SiddhiqlParser::COMMA);
      setState(1286);
      set_assignment();
      setState(1291);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_assignmentContext ------------------------------------------------------------------

SiddhiqlParser::Set_assignmentContext::Set_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Set_assignmentContext::attribute_reference() {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Set_assignmentContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}


size_t SiddhiqlParser::Set_assignmentContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSet_assignment;
}

antlrcpp::Any SiddhiqlParser::Set_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSet_assignment(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Set_assignmentContext* SiddhiqlParser::set_assignment() {
  Set_assignmentContext *_localctx = _tracker.createInstance<Set_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 168, SiddhiqlParser::RuleSet_assignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1292);
    attribute_reference();
    setState(1293);
    match(SiddhiqlParser::ASSIGN);
    setState(1294);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Output_event_typeContext ------------------------------------------------------------------

SiddhiqlParser::Output_event_typeContext::Output_event_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Output_event_typeContext::ALL() {
  return getToken(SiddhiqlParser::ALL, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_event_typeContext::EVENTS() {
  return getToken(SiddhiqlParser::EVENTS, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_event_typeContext::EXPIRED() {
  return getToken(SiddhiqlParser::EXPIRED, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_event_typeContext::CURRENT() {
  return getToken(SiddhiqlParser::CURRENT, 0);
}


size_t SiddhiqlParser::Output_event_typeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOutput_event_type;
}

antlrcpp::Any SiddhiqlParser::Output_event_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOutput_event_type(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Output_event_typeContext* SiddhiqlParser::output_event_type() {
  Output_event_typeContext *_localctx = _tracker.createInstance<Output_event_typeContext>(_ctx, getState());
  enterRule(_localctx, 170, SiddhiqlParser::RuleOutput_event_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::ALL: {
        enterOuterAlt(_localctx, 1);
        setState(1296);
        match(SiddhiqlParser::ALL);
        setState(1297);
        match(SiddhiqlParser::EVENTS);
        break;
      }

      case SiddhiqlParser::EXPIRED: {
        enterOuterAlt(_localctx, 2);
        setState(1298);
        match(SiddhiqlParser::EXPIRED);
        setState(1299);
        match(SiddhiqlParser::EVENTS);
        break;
      }

      case SiddhiqlParser::EVENTS:
      case SiddhiqlParser::CURRENT: {
        enterOuterAlt(_localctx, 3);
        setState(1301);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::CURRENT) {
          setState(1300);
          match(SiddhiqlParser::CURRENT);
        }
        setState(1303);
        match(SiddhiqlParser::EVENTS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Output_rateContext ------------------------------------------------------------------

SiddhiqlParser::Output_rateContext::Output_rateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Output_rateContext::OUTPUT() {
  return getToken(SiddhiqlParser::OUTPUT, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_rateContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

SiddhiqlParser::Time_valueContext* SiddhiqlParser::Output_rateContext::time_value() {
  return getRuleContext<SiddhiqlParser::Time_valueContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Output_rateContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_rateContext::EVENTS() {
  return getToken(SiddhiqlParser::EVENTS, 0);
}

SiddhiqlParser::Output_rate_typeContext* SiddhiqlParser::Output_rateContext::output_rate_type() {
  return getRuleContext<SiddhiqlParser::Output_rate_typeContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Output_rateContext::SNAPSHOT() {
  return getToken(SiddhiqlParser::SNAPSHOT, 0);
}


size_t SiddhiqlParser::Output_rateContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOutput_rate;
}

antlrcpp::Any SiddhiqlParser::Output_rateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOutput_rate(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Output_rateContext* SiddhiqlParser::output_rate() {
  Output_rateContext *_localctx = _tracker.createInstance<Output_rateContext>(_ctx, getState());
  enterRule(_localctx, 172, SiddhiqlParser::RuleOutput_rate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1306);
      match(SiddhiqlParser::OUTPUT);
      setState(1308);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 76) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 76)) & ((1ULL << (SiddhiqlParser::LAST - 76))
        | (1ULL << (SiddhiqlParser::ALL - 76))
        | (1ULL << (SiddhiqlParser::FIRST - 76)))) != 0)) {
        setState(1307);
        output_rate_type();
      }
      setState(1310);
      match(SiddhiqlParser::EVERY);
      setState(1314);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
      case 1: {
        setState(1311);
        time_value();
        break;
      }

      case 2: {
        setState(1312);
        match(SiddhiqlParser::INT_LITERAL);
        setState(1313);
        match(SiddhiqlParser::EVENTS);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1316);
      match(SiddhiqlParser::OUTPUT);
      setState(1317);
      match(SiddhiqlParser::SNAPSHOT);
      setState(1318);
      match(SiddhiqlParser::EVERY);
      setState(1319);
      time_value();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Output_rate_typeContext ------------------------------------------------------------------

SiddhiqlParser::Output_rate_typeContext::Output_rate_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Output_rate_typeContext::ALL() {
  return getToken(SiddhiqlParser::ALL, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_rate_typeContext::LAST() {
  return getToken(SiddhiqlParser::LAST, 0);
}

tree::TerminalNode* SiddhiqlParser::Output_rate_typeContext::FIRST() {
  return getToken(SiddhiqlParser::FIRST, 0);
}


size_t SiddhiqlParser::Output_rate_typeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOutput_rate_type;
}

antlrcpp::Any SiddhiqlParser::Output_rate_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOutput_rate_type(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Output_rate_typeContext* SiddhiqlParser::output_rate_type() {
  Output_rate_typeContext *_localctx = _tracker.createInstance<Output_rate_typeContext>(_ctx, getState());
  enterRule(_localctx, 174, SiddhiqlParser::RuleOutput_rate_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1322);
    _la = _input->LA(1);
    if (!(((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (SiddhiqlParser::LAST - 76))
      | (1ULL << (SiddhiqlParser::ALL - 76))
      | (1ULL << (SiddhiqlParser::FIRST - 76)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_timeContext ------------------------------------------------------------------

SiddhiqlParser::For_timeContext::For_timeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::For_timeContext::FOR() {
  return getToken(SiddhiqlParser::FOR, 0);
}

SiddhiqlParser::Time_valueContext* SiddhiqlParser::For_timeContext::time_value() {
  return getRuleContext<SiddhiqlParser::Time_valueContext>(0);
}


size_t SiddhiqlParser::For_timeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFor_time;
}

antlrcpp::Any SiddhiqlParser::For_timeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFor_time(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::For_timeContext* SiddhiqlParser::for_time() {
  For_timeContext *_localctx = _tracker.createInstance<For_timeContext>(_ctx, getState());
  enterRule(_localctx, 176, SiddhiqlParser::RuleFor_time);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1324);
    match(SiddhiqlParser::FOR);
    setState(1325);
    time_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Within_timeContext ------------------------------------------------------------------

SiddhiqlParser::Within_timeContext::Within_timeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Within_timeContext::WITHIN() {
  return getToken(SiddhiqlParser::WITHIN, 0);
}

SiddhiqlParser::Time_valueContext* SiddhiqlParser::Within_timeContext::time_value() {
  return getRuleContext<SiddhiqlParser::Time_valueContext>(0);
}


size_t SiddhiqlParser::Within_timeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleWithin_time;
}

antlrcpp::Any SiddhiqlParser::Within_timeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitWithin_time(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Within_timeContext* SiddhiqlParser::within_time() {
  Within_timeContext *_localctx = _tracker.createInstance<Within_timeContext>(_ctx, getState());
  enterRule(_localctx, 178, SiddhiqlParser::RuleWithin_time);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1327);
    match(SiddhiqlParser::WITHIN);
    setState(1328);
    time_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Within_time_rangeContext ------------------------------------------------------------------

SiddhiqlParser::Within_time_rangeContext::Within_time_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Within_time_rangeContext::WITHIN() {
  return getToken(SiddhiqlParser::WITHIN, 0);
}

std::vector<SiddhiqlParser::ExpressionContext *> SiddhiqlParser::Within_time_rangeContext::expression() {
  return getRuleContexts<SiddhiqlParser::ExpressionContext>();
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::Within_time_rangeContext::expression(size_t i) {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(i);
}


size_t SiddhiqlParser::Within_time_rangeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleWithin_time_range;
}

antlrcpp::Any SiddhiqlParser::Within_time_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitWithin_time_range(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Within_time_rangeContext* SiddhiqlParser::within_time_range() {
  Within_time_rangeContext *_localctx = _tracker.createInstance<Within_time_rangeContext>(_ctx, getState());
  enterRule(_localctx, 180, SiddhiqlParser::RuleWithin_time_range);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1330);
    match(SiddhiqlParser::WITHIN);
    setState(1331);
    dynamic_cast<Within_time_rangeContext *>(_localctx)->start_pattern = expression();
    setState(1334);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::COMMA) {
      setState(1332);
      match(SiddhiqlParser::COMMA);
      setState(1333);
      dynamic_cast<Within_time_rangeContext *>(_localctx)->end_pattern = expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PerContext ------------------------------------------------------------------

SiddhiqlParser::PerContext::PerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::PerContext::PER() {
  return getToken(SiddhiqlParser::PER, 0);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::PerContext::expression() {
  return getRuleContext<SiddhiqlParser::ExpressionContext>(0);
}


size_t SiddhiqlParser::PerContext::getRuleIndex() const {
  return SiddhiqlParser::RulePer;
}

antlrcpp::Any SiddhiqlParser::PerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitPer(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::PerContext* SiddhiqlParser::per() {
  PerContext *_localctx = _tracker.createInstance<PerContext>(_ctx, getState());
  enterRule(_localctx, 182, SiddhiqlParser::RulePer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1336);
    match(SiddhiqlParser::PER);
    setState(1337);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Output_attributeContext ------------------------------------------------------------------

SiddhiqlParser::Output_attributeContext::Output_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Function_stringContext* SiddhiqlParser::Output_attributeContext::function_string() {
  return getRuleContext<SiddhiqlParser::Function_stringContext>(0);
}

SiddhiqlParser::AsContext* SiddhiqlParser::Output_attributeContext::as() {
  return getRuleContext<SiddhiqlParser::AsContext>(0);
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::Output_attributeContext::attribute_name() {
  return getRuleContext<SiddhiqlParser::Attribute_nameContext>(0);
}

SiddhiqlParser::AttributeContext* SiddhiqlParser::Output_attributeContext::attribute() {
  return getRuleContext<SiddhiqlParser::AttributeContext>(0);
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Output_attributeContext::attribute_reference() {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(0);
}


size_t SiddhiqlParser::Output_attributeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleOutput_attribute;
}

antlrcpp::Any SiddhiqlParser::Output_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitOutput_attribute(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Output_attributeContext* SiddhiqlParser::output_attribute() {
  Output_attributeContext *_localctx = _tracker.createInstance<Output_attributeContext>(_ctx, getState());
  enterRule(_localctx, 184, SiddhiqlParser::RuleOutput_attribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1348);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1339);
      function_string();
      setState(1340);
      as();
      setState(1341);
      attribute_name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1343);
      attribute();
      setState(1344);
      as();
      setState(1345);
      attribute_name();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1347);
      attribute_reference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

SiddhiqlParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Math_operationContext* SiddhiqlParser::AttributeContext::math_operation() {
  return getRuleContext<SiddhiqlParser::Math_operationContext>(0);
}


size_t SiddhiqlParser::AttributeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute;
}

antlrcpp::Any SiddhiqlParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::AttributeContext* SiddhiqlParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 186, SiddhiqlParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1350);
    math_operation(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_stringContext ------------------------------------------------------------------

SiddhiqlParser::Function_stringContext::Function_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Param_stringContext* SiddhiqlParser::Function_stringContext::param_string() {
  return getRuleContext<SiddhiqlParser::Param_stringContext>(0);
}

SiddhiqlParser::Execution_string_areaContext* SiddhiqlParser::Function_stringContext::execution_string_area() {
  return getRuleContext<SiddhiqlParser::Execution_string_areaContext>(0);
}


size_t SiddhiqlParser::Function_stringContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFunction_string;
}

antlrcpp::Any SiddhiqlParser::Function_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFunction_string(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Function_stringContext* SiddhiqlParser::function_string() {
  Function_stringContext *_localctx = _tracker.createInstance<Function_stringContext>(_ctx, getState());
  enterRule(_localctx, 188, SiddhiqlParser::RuleFunction_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1352);
    param_string();
    setState(1353);
    execution_string_area();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_stringContext ------------------------------------------------------------------

SiddhiqlParser::Param_stringContext::Param_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Attribute_nameContext *> SiddhiqlParser::Param_stringContext::attribute_name() {
  return getRuleContexts<SiddhiqlParser::Attribute_nameContext>();
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::Param_stringContext::attribute_name(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_nameContext>(i);
}


size_t SiddhiqlParser::Param_stringContext::getRuleIndex() const {
  return SiddhiqlParser::RuleParam_string;
}

antlrcpp::Any SiddhiqlParser::Param_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitParam_string(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Param_stringContext* SiddhiqlParser::param_string() {
  Param_stringContext *_localctx = _tracker.createInstance<Param_stringContext>(_ctx, getState());
  enterRule(_localctx, 190, SiddhiqlParser::RuleParam_string);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1355);
    match(SiddhiqlParser::OPEN_PAR);
    setState(1356);
    attribute_name();
    setState(1361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SiddhiqlParser::COMMA) {
      setState(1357);
      match(SiddhiqlParser::COMMA);
      setState(1358);
      attribute_name();
      setState(1363);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1364);
    match(SiddhiqlParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Execution_string_areaContext ------------------------------------------------------------------

SiddhiqlParser::Execution_string_areaContext::Execution_string_areaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Execution_stringContext* SiddhiqlParser::Execution_string_areaContext::execution_string() {
  return getRuleContext<SiddhiqlParser::Execution_stringContext>(0);
}


size_t SiddhiqlParser::Execution_string_areaContext::getRuleIndex() const {
  return SiddhiqlParser::RuleExecution_string_area;
}

antlrcpp::Any SiddhiqlParser::Execution_string_areaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitExecution_string_area(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Execution_string_areaContext* SiddhiqlParser::execution_string_area() {
  Execution_string_areaContext *_localctx = _tracker.createInstance<Execution_string_areaContext>(_ctx, getState());
  enterRule(_localctx, 192, SiddhiqlParser::RuleExecution_string_area);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1366);
    match(SiddhiqlParser::OPEN_SQUARE_BRACKETS);
    setState(1367);
    execution_string();
    setState(1368);
    match(SiddhiqlParser::CLOSE_SQUARE_BRACKETS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Execution_stringContext ------------------------------------------------------------------

SiddhiqlParser::Execution_stringContext::Execution_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SiddhiqlParser::Execution_stringContext::getRuleIndex() const {
  return SiddhiqlParser::RuleExecution_string;
}

antlrcpp::Any SiddhiqlParser::Execution_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitExecution_string(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Execution_stringContext* SiddhiqlParser::execution_string() {
  Execution_stringContext *_localctx = _tracker.createInstance<Execution_stringContext>(_ctx, getState());
  enterRule(_localctx, 194, SiddhiqlParser::RuleExecution_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1373);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(1370);
        matchWildcard(); 
      }
      setState(1375);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SiddhiqlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Math_operationContext* SiddhiqlParser::ExpressionContext::math_operation() {
  return getRuleContext<SiddhiqlParser::Math_operationContext>(0);
}


size_t SiddhiqlParser::ExpressionContext::getRuleIndex() const {
  return SiddhiqlParser::RuleExpression;
}

antlrcpp::Any SiddhiqlParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::ExpressionContext* SiddhiqlParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 196, SiddhiqlParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1376);
    math_operation(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Math_operationContext ------------------------------------------------------------------

SiddhiqlParser::Math_operationContext::Math_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::Math_operationContext *> SiddhiqlParser::Math_operationContext::math_operation() {
  return getRuleContexts<SiddhiqlParser::Math_operationContext>();
}

SiddhiqlParser::Math_operationContext* SiddhiqlParser::Math_operationContext::math_operation(size_t i) {
  return getRuleContext<SiddhiqlParser::Math_operationContext>(i);
}

SiddhiqlParser::Null_checkContext* SiddhiqlParser::Math_operationContext::null_check() {
  return getRuleContext<SiddhiqlParser::Null_checkContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Math_operationContext::NOT() {
  return getToken(SiddhiqlParser::NOT, 0);
}

SiddhiqlParser::Function_operationContext* SiddhiqlParser::Math_operationContext::function_operation() {
  return getRuleContext<SiddhiqlParser::Function_operationContext>(0);
}

SiddhiqlParser::Constant_valueContext* SiddhiqlParser::Math_operationContext::constant_value() {
  return getRuleContext<SiddhiqlParser::Constant_valueContext>(0);
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Math_operationContext::attribute_reference() {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(0);
}

tree::TerminalNode* SiddhiqlParser::Math_operationContext::AND() {
  return getToken(SiddhiqlParser::AND, 0);
}

tree::TerminalNode* SiddhiqlParser::Math_operationContext::OR() {
  return getToken(SiddhiqlParser::OR, 0);
}

tree::TerminalNode* SiddhiqlParser::Math_operationContext::IN() {
  return getToken(SiddhiqlParser::IN, 0);
}

SiddhiqlParser::NameContext* SiddhiqlParser::Math_operationContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::Math_operationContext::getRuleIndex() const {
  return SiddhiqlParser::RuleMath_operation;
}

antlrcpp::Any SiddhiqlParser::Math_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitMath_operation(this);
  else
    return visitor->visitChildren(this);
}


SiddhiqlParser::Math_operationContext* SiddhiqlParser::math_operation() {
   return math_operation(0);
}

SiddhiqlParser::Math_operationContext* SiddhiqlParser::math_operation(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SiddhiqlParser::Math_operationContext *_localctx = _tracker.createInstance<Math_operationContext>(_ctx, parentState);
  SiddhiqlParser::Math_operationContext *previousContext = _localctx;
  size_t startState = 198;
  enterRecursionRule(_localctx, 198, SiddhiqlParser::RuleMath_operation, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1379);
      match(SiddhiqlParser::OPEN_PAR);
      setState(1380);
      math_operation(0);
      setState(1381);
      match(SiddhiqlParser::CLOSE_PAR);
      break;
    }

    case 2: {
      setState(1383);
      null_check();
      break;
    }

    case 3: {
      setState(1384);
      match(SiddhiqlParser::NOT);
      setState(1385);
      math_operation(11);
      break;
    }

    case 4: {
      setState(1386);
      function_operation();
      break;
    }

    case 5: {
      setState(1387);
      constant_value();
      break;
    }

    case 6: {
      setState(1388);
      attribute_reference();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1429);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1427);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1391);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1395);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SiddhiqlParser::STAR: {
              setState(1392);
              dynamic_cast<Math_operationContext *>(_localctx)->multiply = match(SiddhiqlParser::STAR);
              break;
            }

            case SiddhiqlParser::DIV: {
              setState(1393);
              dynamic_cast<Math_operationContext *>(_localctx)->devide = match(SiddhiqlParser::DIV);
              break;
            }

            case SiddhiqlParser::MOD: {
              setState(1394);
              dynamic_cast<Math_operationContext *>(_localctx)->mod = match(SiddhiqlParser::MOD);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(1397);
          math_operation(11);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1398);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1401);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SiddhiqlParser::PLUS: {
              setState(1399);
              dynamic_cast<Math_operationContext *>(_localctx)->add = match(SiddhiqlParser::PLUS);
              break;
            }

            case SiddhiqlParser::MINUS: {
              setState(1400);
              dynamic_cast<Math_operationContext *>(_localctx)->substract = match(SiddhiqlParser::MINUS);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(1403);
          math_operation(10);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1404);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1409);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SiddhiqlParser::GT_EQ: {
              setState(1405);
              dynamic_cast<Math_operationContext *>(_localctx)->gt_eq = match(SiddhiqlParser::GT_EQ);
              break;
            }

            case SiddhiqlParser::LT_EQ: {
              setState(1406);
              dynamic_cast<Math_operationContext *>(_localctx)->lt_eq = match(SiddhiqlParser::LT_EQ);
              break;
            }

            case SiddhiqlParser::GT: {
              setState(1407);
              dynamic_cast<Math_operationContext *>(_localctx)->gt = match(SiddhiqlParser::GT);
              break;
            }

            case SiddhiqlParser::LT: {
              setState(1408);
              dynamic_cast<Math_operationContext *>(_localctx)->lt = match(SiddhiqlParser::LT);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(1411);
          math_operation(9);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1412);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1415);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SiddhiqlParser::EQ: {
              setState(1413);
              dynamic_cast<Math_operationContext *>(_localctx)->eq = match(SiddhiqlParser::EQ);
              break;
            }

            case SiddhiqlParser::NOT_EQ: {
              setState(1414);
              dynamic_cast<Math_operationContext *>(_localctx)->not_equal = match(SiddhiqlParser::NOT_EQ);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(1417);
          math_operation(8);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1418);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1419);
          match(SiddhiqlParser::AND);
          setState(1420);
          math_operation(6);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1421);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1422);
          match(SiddhiqlParser::OR);
          setState(1423);
          math_operation(5);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<Math_operationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMath_operation);
          setState(1424);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1425);
          match(SiddhiqlParser::IN);
          setState(1426);
          name();
          break;
        }

        } 
      }
      setState(1431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Function_operationContext ------------------------------------------------------------------

SiddhiqlParser::Function_operationContext::Function_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Function_idContext* SiddhiqlParser::Function_operationContext::function_id() {
  return getRuleContext<SiddhiqlParser::Function_idContext>(0);
}

SiddhiqlParser::Function_namespaceContext* SiddhiqlParser::Function_operationContext::function_namespace() {
  return getRuleContext<SiddhiqlParser::Function_namespaceContext>(0);
}

SiddhiqlParser::Attribute_listContext* SiddhiqlParser::Function_operationContext::attribute_list() {
  return getRuleContext<SiddhiqlParser::Attribute_listContext>(0);
}


size_t SiddhiqlParser::Function_operationContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFunction_operation;
}

antlrcpp::Any SiddhiqlParser::Function_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFunction_operation(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Function_operationContext* SiddhiqlParser::function_operation() {
  Function_operationContext *_localctx = _tracker.createInstance<Function_operationContext>(_ctx, getState());
  enterRule(_localctx, 200, SiddhiqlParser::RuleFunction_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1435);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
    case 1: {
      setState(1432);
      function_namespace();
      setState(1433);
      match(SiddhiqlParser::COL);
      break;
    }

    }
    setState(1437);
    function_id();
    setState(1438);
    match(SiddhiqlParser::OPEN_PAR);
    setState(1440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SiddhiqlParser::INT_LITERAL)
      | (1ULL << SiddhiqlParser::LONG_LITERAL)
      | (1ULL << SiddhiqlParser::FLOAT_LITERAL)
      | (1ULL << SiddhiqlParser::DOUBLE_LITERAL)
      | (1ULL << SiddhiqlParser::OPEN_PAR)
      | (1ULL << SiddhiqlParser::STAR)
      | (1ULL << SiddhiqlParser::PLUS)
      | (1ULL << SiddhiqlParser::MINUS)
      | (1ULL << SiddhiqlParser::HASH)
      | (1ULL << SiddhiqlParser::STREAM)
      | (1ULL << SiddhiqlParser::DEFINE)
      | (1ULL << SiddhiqlParser::TABLE)
      | (1ULL << SiddhiqlParser::APP)
      | (1ULL << SiddhiqlParser::FROM)
      | (1ULL << SiddhiqlParser::PARTITION)
      | (1ULL << SiddhiqlParser::WINDOW)
      | (1ULL << SiddhiqlParser::SELECT)
      | (1ULL << SiddhiqlParser::GROUP)
      | (1ULL << SiddhiqlParser::BY)
      | (1ULL << SiddhiqlParser::ORDER)
      | (1ULL << SiddhiqlParser::LIMIT)
      | (1ULL << SiddhiqlParser::ASC)
      | (1ULL << SiddhiqlParser::DESC)
      | (1ULL << SiddhiqlParser::HAVING)
      | (1ULL << SiddhiqlParser::INSERT)
      | (1ULL << SiddhiqlParser::DELETE)
      | (1ULL << SiddhiqlParser::UPDATE)
      | (1ULL << SiddhiqlParser::RETURN)
      | (1ULL << SiddhiqlParser::EVENTS)
      | (1ULL << SiddhiqlParser::INTO)
      | (1ULL << SiddhiqlParser::OUTPUT)
      | (1ULL << SiddhiqlParser::EXPIRED)
      | (1ULL << SiddhiqlParser::CURRENT)
      | (1ULL << SiddhiqlParser::SNAPSHOT)
      | (1ULL << SiddhiqlParser::FOR)
      | (1ULL << SiddhiqlParser::RAW)
      | (1ULL << SiddhiqlParser::OF)
      | (1ULL << SiddhiqlParser::AS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SiddhiqlParser::OR - 64))
      | (1ULL << (SiddhiqlParser::AND - 64))
      | (1ULL << (SiddhiqlParser::ON - 64))
      | (1ULL << (SiddhiqlParser::IS - 64))
      | (1ULL << (SiddhiqlParser::NOT - 64))
      | (1ULL << (SiddhiqlParser::WITHIN - 64))
      | (1ULL << (SiddhiqlParser::WITH - 64))
      | (1ULL << (SiddhiqlParser::BEGIN - 64))
      | (1ULL << (SiddhiqlParser::END - 64))
      | (1ULL << (SiddhiqlParser::NUL - 64))
      | (1ULL << (SiddhiqlParser::EVERY - 64))
      | (1ULL << (SiddhiqlParser::LAST - 64))
      | (1ULL << (SiddhiqlParser::ALL - 64))
      | (1ULL << (SiddhiqlParser::FIRST - 64))
      | (1ULL << (SiddhiqlParser::JOIN - 64))
      | (1ULL << (SiddhiqlParser::INNER - 64))
      | (1ULL << (SiddhiqlParser::OUTER - 64))
      | (1ULL << (SiddhiqlParser::RIGHT - 64))
      | (1ULL << (SiddhiqlParser::LEFT - 64))
      | (1ULL << (SiddhiqlParser::FULL - 64))
      | (1ULL << (SiddhiqlParser::UNIDIRECTIONAL - 64))
      | (1ULL << (SiddhiqlParser::YEARS - 64))
      | (1ULL << (SiddhiqlParser::MONTHS - 64))
      | (1ULL << (SiddhiqlParser::WEEKS - 64))
      | (1ULL << (SiddhiqlParser::DAYS - 64))
      | (1ULL << (SiddhiqlParser::HOURS - 64))
      | (1ULL << (SiddhiqlParser::MINUTES - 64))
      | (1ULL << (SiddhiqlParser::SECONDS - 64))
      | (1ULL << (SiddhiqlParser::MILLISECONDS - 64))
      | (1ULL << (SiddhiqlParser::FALSE - 64))
      | (1ULL << (SiddhiqlParser::TRUE - 64))
      | (1ULL << (SiddhiqlParser::STRING - 64))
      | (1ULL << (SiddhiqlParser::INT - 64))
      | (1ULL << (SiddhiqlParser::LONG - 64))
      | (1ULL << (SiddhiqlParser::FLOAT - 64))
      | (1ULL << (SiddhiqlParser::DOUBLE - 64))
      | (1ULL << (SiddhiqlParser::BOOL - 64))
      | (1ULL << (SiddhiqlParser::OBJECT - 64))
      | (1ULL << (SiddhiqlParser::ID_QUOTES - 64))
      | (1ULL << (SiddhiqlParser::ID - 64))
      | (1ULL << (SiddhiqlParser::STRING_LITERAL - 64)))) != 0)) {
      setState(1439);
      attribute_list();
    }
    setState(1442);
    match(SiddhiqlParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

SiddhiqlParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::AttributeContext *> SiddhiqlParser::Attribute_listContext::attribute() {
  return getRuleContexts<SiddhiqlParser::AttributeContext>();
}

SiddhiqlParser::AttributeContext* SiddhiqlParser::Attribute_listContext::attribute(size_t i) {
  return getRuleContext<SiddhiqlParser::AttributeContext>(i);
}


size_t SiddhiqlParser::Attribute_listContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute_list;
}

antlrcpp::Any SiddhiqlParser::Attribute_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute_list(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Attribute_listContext* SiddhiqlParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 202, SiddhiqlParser::RuleAttribute_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1453);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::INT_LITERAL:
      case SiddhiqlParser::LONG_LITERAL:
      case SiddhiqlParser::FLOAT_LITERAL:
      case SiddhiqlParser::DOUBLE_LITERAL:
      case SiddhiqlParser::OPEN_PAR:
      case SiddhiqlParser::PLUS:
      case SiddhiqlParser::MINUS:
      case SiddhiqlParser::HASH:
      case SiddhiqlParser::STREAM:
      case SiddhiqlParser::DEFINE:
      case SiddhiqlParser::TABLE:
      case SiddhiqlParser::APP:
      case SiddhiqlParser::FROM:
      case SiddhiqlParser::PARTITION:
      case SiddhiqlParser::WINDOW:
      case SiddhiqlParser::SELECT:
      case SiddhiqlParser::GROUP:
      case SiddhiqlParser::BY:
      case SiddhiqlParser::ORDER:
      case SiddhiqlParser::LIMIT:
      case SiddhiqlParser::ASC:
      case SiddhiqlParser::DESC:
      case SiddhiqlParser::HAVING:
      case SiddhiqlParser::INSERT:
      case SiddhiqlParser::DELETE:
      case SiddhiqlParser::UPDATE:
      case SiddhiqlParser::RETURN:
      case SiddhiqlParser::EVENTS:
      case SiddhiqlParser::INTO:
      case SiddhiqlParser::OUTPUT:
      case SiddhiqlParser::EXPIRED:
      case SiddhiqlParser::CURRENT:
      case SiddhiqlParser::SNAPSHOT:
      case SiddhiqlParser::FOR:
      case SiddhiqlParser::RAW:
      case SiddhiqlParser::OF:
      case SiddhiqlParser::AS:
      case SiddhiqlParser::OR:
      case SiddhiqlParser::AND:
      case SiddhiqlParser::ON:
      case SiddhiqlParser::IS:
      case SiddhiqlParser::NOT:
      case SiddhiqlParser::WITHIN:
      case SiddhiqlParser::WITH:
      case SiddhiqlParser::BEGIN:
      case SiddhiqlParser::END:
      case SiddhiqlParser::NUL:
      case SiddhiqlParser::EVERY:
      case SiddhiqlParser::LAST:
      case SiddhiqlParser::ALL:
      case SiddhiqlParser::FIRST:
      case SiddhiqlParser::JOIN:
      case SiddhiqlParser::INNER:
      case SiddhiqlParser::OUTER:
      case SiddhiqlParser::RIGHT:
      case SiddhiqlParser::LEFT:
      case SiddhiqlParser::FULL:
      case SiddhiqlParser::UNIDIRECTIONAL:
      case SiddhiqlParser::YEARS:
      case SiddhiqlParser::MONTHS:
      case SiddhiqlParser::WEEKS:
      case SiddhiqlParser::DAYS:
      case SiddhiqlParser::HOURS:
      case SiddhiqlParser::MINUTES:
      case SiddhiqlParser::SECONDS:
      case SiddhiqlParser::MILLISECONDS:
      case SiddhiqlParser::FALSE:
      case SiddhiqlParser::TRUE:
      case SiddhiqlParser::STRING:
      case SiddhiqlParser::INT:
      case SiddhiqlParser::LONG:
      case SiddhiqlParser::FLOAT:
      case SiddhiqlParser::DOUBLE:
      case SiddhiqlParser::BOOL:
      case SiddhiqlParser::OBJECT:
      case SiddhiqlParser::ID_QUOTES:
      case SiddhiqlParser::ID:
      case SiddhiqlParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1444);
        attribute();
        setState(1449);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SiddhiqlParser::COMMA) {
          setState(1445);
          match(SiddhiqlParser::COMMA);
          setState(1446);
          attribute();
          setState(1451);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case SiddhiqlParser::STAR: {
        enterOuterAlt(_localctx, 2);
        setState(1452);
        match(SiddhiqlParser::STAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Null_checkContext ------------------------------------------------------------------

SiddhiqlParser::Null_checkContext::Null_checkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Null_checkContext::IS() {
  return getToken(SiddhiqlParser::IS, 0);
}

tree::TerminalNode* SiddhiqlParser::Null_checkContext::NUL() {
  return getToken(SiddhiqlParser::NUL, 0);
}

SiddhiqlParser::Stream_referenceContext* SiddhiqlParser::Null_checkContext::stream_reference() {
  return getRuleContext<SiddhiqlParser::Stream_referenceContext>(0);
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::Null_checkContext::attribute_reference() {
  return getRuleContext<SiddhiqlParser::Attribute_referenceContext>(0);
}

SiddhiqlParser::Function_operationContext* SiddhiqlParser::Null_checkContext::function_operation() {
  return getRuleContext<SiddhiqlParser::Function_operationContext>(0);
}


size_t SiddhiqlParser::Null_checkContext::getRuleIndex() const {
  return SiddhiqlParser::RuleNull_check;
}

antlrcpp::Any SiddhiqlParser::Null_checkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitNull_check(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Null_checkContext* SiddhiqlParser::null_check() {
  Null_checkContext *_localctx = _tracker.createInstance<Null_checkContext>(_ctx, getState());
  enterRule(_localctx, 204, SiddhiqlParser::RuleNull_check);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1458);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      setState(1455);
      stream_reference();
      break;
    }

    case 2: {
      setState(1456);
      attribute_reference();
      break;
    }

    case 3: {
      setState(1457);
      function_operation();
      break;
    }

    }
    setState(1460);
    match(SiddhiqlParser::IS);
    setState(1461);
    match(SiddhiqlParser::NUL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stream_referenceContext ------------------------------------------------------------------

SiddhiqlParser::Stream_referenceContext::Stream_referenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::Stream_referenceContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}

SiddhiqlParser::Attribute_indexContext* SiddhiqlParser::Stream_referenceContext::attribute_index() {
  return getRuleContext<SiddhiqlParser::Attribute_indexContext>(0);
}


size_t SiddhiqlParser::Stream_referenceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStream_reference;
}

antlrcpp::Any SiddhiqlParser::Stream_referenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStream_reference(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Stream_referenceContext* SiddhiqlParser::stream_reference() {
  Stream_referenceContext *_localctx = _tracker.createInstance<Stream_referenceContext>(_ctx, getState());
  enterRule(_localctx, 206, SiddhiqlParser::RuleStream_reference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::HASH) {
      setState(1463);
      dynamic_cast<Stream_referenceContext *>(_localctx)->hash = match(SiddhiqlParser::HASH);
    }
    setState(1466);
    name();
    setState(1471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::OPEN_SQUARE_BRACKETS) {
      setState(1467);
      match(SiddhiqlParser::OPEN_SQUARE_BRACKETS);
      setState(1468);
      attribute_index();
      setState(1469);
      match(SiddhiqlParser::CLOSE_SQUARE_BRACKETS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_referenceContext ------------------------------------------------------------------

SiddhiqlParser::Attribute_referenceContext::Attribute_referenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::Attribute_referenceContext::attribute_name() {
  return getRuleContext<SiddhiqlParser::Attribute_nameContext>(0);
}

std::vector<SiddhiqlParser::NameContext *> SiddhiqlParser::Attribute_referenceContext::name() {
  return getRuleContexts<SiddhiqlParser::NameContext>();
}

SiddhiqlParser::NameContext* SiddhiqlParser::Attribute_referenceContext::name(size_t i) {
  return getRuleContext<SiddhiqlParser::NameContext>(i);
}

std::vector<SiddhiqlParser::Attribute_indexContext *> SiddhiqlParser::Attribute_referenceContext::attribute_index() {
  return getRuleContexts<SiddhiqlParser::Attribute_indexContext>();
}

SiddhiqlParser::Attribute_indexContext* SiddhiqlParser::Attribute_referenceContext::attribute_index(size_t i) {
  return getRuleContext<SiddhiqlParser::Attribute_indexContext>(i);
}


size_t SiddhiqlParser::Attribute_referenceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute_reference;
}

antlrcpp::Any SiddhiqlParser::Attribute_referenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute_reference(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Attribute_referenceContext* SiddhiqlParser::attribute_reference() {
  Attribute_referenceContext *_localctx = _tracker.createInstance<Attribute_referenceContext>(_ctx, getState());
  enterRule(_localctx, 208, SiddhiqlParser::RuleAttribute_reference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1497);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1474);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::HASH) {
        setState(1473);
        dynamic_cast<Attribute_referenceContext *>(_localctx)->hash1 = match(SiddhiqlParser::HASH);
      }
      setState(1476);
      dynamic_cast<Attribute_referenceContext *>(_localctx)->name1 = name();
      setState(1481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::OPEN_SQUARE_BRACKETS) {
        setState(1477);
        match(SiddhiqlParser::OPEN_SQUARE_BRACKETS);
        setState(1478);
        dynamic_cast<Attribute_referenceContext *>(_localctx)->attribute_index1 = attribute_index();
        setState(1479);
        match(SiddhiqlParser::CLOSE_SQUARE_BRACKETS);
      }
      setState(1491);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SiddhiqlParser::HASH) {
        setState(1483);
        dynamic_cast<Attribute_referenceContext *>(_localctx)->hash2 = match(SiddhiqlParser::HASH);
        setState(1484);
        dynamic_cast<Attribute_referenceContext *>(_localctx)->name2 = name();
        setState(1489);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::OPEN_SQUARE_BRACKETS) {
          setState(1485);
          match(SiddhiqlParser::OPEN_SQUARE_BRACKETS);
          setState(1486);
          dynamic_cast<Attribute_referenceContext *>(_localctx)->attribute_index2 = attribute_index();
          setState(1487);
          match(SiddhiqlParser::CLOSE_SQUARE_BRACKETS);
        }
      }
      setState(1493);
      match(SiddhiqlParser::DOT);
      setState(1494);
      attribute_name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1496);
      attribute_name();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_indexContext ------------------------------------------------------------------

SiddhiqlParser::Attribute_indexContext::Attribute_indexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Attribute_indexContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_indexContext::LAST() {
  return getToken(SiddhiqlParser::LAST, 0);
}


size_t SiddhiqlParser::Attribute_indexContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute_index;
}

antlrcpp::Any SiddhiqlParser::Attribute_indexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute_index(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Attribute_indexContext* SiddhiqlParser::attribute_index() {
  Attribute_indexContext *_localctx = _tracker.createInstance<Attribute_indexContext>(_ctx, getState());
  enterRule(_localctx, 210, SiddhiqlParser::RuleAttribute_index);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1505);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1499);
        match(SiddhiqlParser::INT_LITERAL);
        break;
      }

      case SiddhiqlParser::LAST: {
        enterOuterAlt(_localctx, 2);
        setState(1500);
        match(SiddhiqlParser::LAST);
        setState(1503);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::MINUS) {
          setState(1501);
          match(SiddhiqlParser::MINUS);
          setState(1502);
          match(SiddhiqlParser::INT_LITERAL);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_idContext ------------------------------------------------------------------

SiddhiqlParser::Function_idContext::Function_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::Function_idContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::Function_idContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFunction_id;
}

antlrcpp::Any SiddhiqlParser::Function_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFunction_id(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Function_idContext* SiddhiqlParser::function_id() {
  Function_idContext *_localctx = _tracker.createInstance<Function_idContext>(_ctx, getState());
  enterRule(_localctx, 212, SiddhiqlParser::RuleFunction_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1507);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_namespaceContext ------------------------------------------------------------------

SiddhiqlParser::Function_namespaceContext::Function_namespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::Function_namespaceContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::Function_namespaceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleFunction_namespace;
}

antlrcpp::Any SiddhiqlParser::Function_namespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitFunction_namespace(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Function_namespaceContext* SiddhiqlParser::function_namespace() {
  Function_namespaceContext *_localctx = _tracker.createInstance<Function_namespaceContext>(_ctx, getState());
  enterRule(_localctx, 214, SiddhiqlParser::RuleFunction_namespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1509);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stream_idContext ------------------------------------------------------------------

SiddhiqlParser::Stream_idContext::Stream_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::Stream_idContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::Stream_idContext::getRuleIndex() const {
  return SiddhiqlParser::RuleStream_id;
}

antlrcpp::Any SiddhiqlParser::Stream_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitStream_id(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Stream_idContext* SiddhiqlParser::stream_id() {
  Stream_idContext *_localctx = _tracker.createInstance<Stream_idContext>(_ctx, getState());
  enterRule(_localctx, 216, SiddhiqlParser::RuleStream_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1511);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Source_idContext ------------------------------------------------------------------

SiddhiqlParser::Source_idContext::Source_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::Source_idContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::Source_idContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSource_id;
}

antlrcpp::Any SiddhiqlParser::Source_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSource_id(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Source_idContext* SiddhiqlParser::source_id() {
  Source_idContext *_localctx = _tracker.createInstance<Source_idContext>(_ctx, getState());
  enterRule(_localctx, 218, SiddhiqlParser::RuleSource_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1513);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasContext ------------------------------------------------------------------

SiddhiqlParser::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::AliasContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::AliasContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAlias;
}

antlrcpp::Any SiddhiqlParser::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::AliasContext* SiddhiqlParser::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 220, SiddhiqlParser::RuleAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1515);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Property_nameContext ------------------------------------------------------------------

SiddhiqlParser::Property_nameContext::Property_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SiddhiqlParser::NameContext *> SiddhiqlParser::Property_nameContext::name() {
  return getRuleContexts<SiddhiqlParser::NameContext>();
}

SiddhiqlParser::NameContext* SiddhiqlParser::Property_nameContext::name(size_t i) {
  return getRuleContext<SiddhiqlParser::NameContext>(i);
}

std::vector<SiddhiqlParser::Property_separatorContext *> SiddhiqlParser::Property_nameContext::property_separator() {
  return getRuleContexts<SiddhiqlParser::Property_separatorContext>();
}

SiddhiqlParser::Property_separatorContext* SiddhiqlParser::Property_nameContext::property_separator(size_t i) {
  return getRuleContext<SiddhiqlParser::Property_separatorContext>(i);
}


size_t SiddhiqlParser::Property_nameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleProperty_name;
}

antlrcpp::Any SiddhiqlParser::Property_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitProperty_name(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Property_nameContext* SiddhiqlParser::property_name() {
  Property_nameContext *_localctx = _tracker.createInstance<Property_nameContext>(_ctx, getState());
  enterRule(_localctx, 222, SiddhiqlParser::RuleProperty_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1517);
    name();
    setState(1523);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SiddhiqlParser::COL)
      | (1ULL << SiddhiqlParser::DOT)
      | (1ULL << SiddhiqlParser::MINUS))) != 0)) {
      setState(1518);
      property_separator();
      setState(1519);
      name();
      setState(1525);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_nameContext ------------------------------------------------------------------

SiddhiqlParser::Attribute_nameContext::Attribute_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::Attribute_nameContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::Attribute_nameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute_name;
}

antlrcpp::Any SiddhiqlParser::Attribute_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute_name(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Attribute_nameContext* SiddhiqlParser::attribute_name() {
  Attribute_nameContext *_localctx = _tracker.createInstance<Attribute_nameContext>(_ctx, getState());
  enterRule(_localctx, 224, SiddhiqlParser::RuleAttribute_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1526);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

SiddhiqlParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::TypeContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::TypeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleType;
}

antlrcpp::Any SiddhiqlParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::TypeContext* SiddhiqlParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 226, SiddhiqlParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1528);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Property_valueContext ------------------------------------------------------------------

SiddhiqlParser::Property_valueContext::Property_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::String_valueContext* SiddhiqlParser::Property_valueContext::string_value() {
  return getRuleContext<SiddhiqlParser::String_valueContext>(0);
}


size_t SiddhiqlParser::Property_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleProperty_value;
}

antlrcpp::Any SiddhiqlParser::Property_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitProperty_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Property_valueContext* SiddhiqlParser::property_value() {
  Property_valueContext *_localctx = _tracker.createInstance<Property_valueContext>(_ctx, getState());
  enterRule(_localctx, 228, SiddhiqlParser::RuleProperty_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1530);
    string_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Property_separatorContext ------------------------------------------------------------------

SiddhiqlParser::Property_separatorContext::Property_separatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Property_separatorContext::DOT() {
  return getToken(SiddhiqlParser::DOT, 0);
}

tree::TerminalNode* SiddhiqlParser::Property_separatorContext::MINUS() {
  return getToken(SiddhiqlParser::MINUS, 0);
}

tree::TerminalNode* SiddhiqlParser::Property_separatorContext::COL() {
  return getToken(SiddhiqlParser::COL, 0);
}


size_t SiddhiqlParser::Property_separatorContext::getRuleIndex() const {
  return SiddhiqlParser::RuleProperty_separator;
}

antlrcpp::Any SiddhiqlParser::Property_separatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitProperty_separator(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Property_separatorContext* SiddhiqlParser::property_separator() {
  Property_separatorContext *_localctx = _tracker.createInstance<Property_separatorContext>(_ctx, getState());
  enterRule(_localctx, 230, SiddhiqlParser::RuleProperty_separator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1532);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SiddhiqlParser::COL)
      | (1ULL << SiddhiqlParser::DOT)
      | (1ULL << SiddhiqlParser::MINUS))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceContext ------------------------------------------------------------------

SiddhiqlParser::SourceContext::SourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Stream_idContext* SiddhiqlParser::SourceContext::stream_id() {
  return getRuleContext<SiddhiqlParser::Stream_idContext>(0);
}


size_t SiddhiqlParser::SourceContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSource;
}

antlrcpp::Any SiddhiqlParser::SourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSource(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::SourceContext* SiddhiqlParser::source() {
  SourceContext *_localctx = _tracker.createInstance<SourceContext>(_ctx, getState());
  enterRule(_localctx, 232, SiddhiqlParser::RuleSource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1535);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::HASH) {
      setState(1534);
      dynamic_cast<SourceContext *>(_localctx)->inner = match(SiddhiqlParser::HASH);
    }
    setState(1537);
    stream_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TargetContext ------------------------------------------------------------------

SiddhiqlParser::TargetContext::TargetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::SourceContext* SiddhiqlParser::TargetContext::source() {
  return getRuleContext<SiddhiqlParser::SourceContext>(0);
}


size_t SiddhiqlParser::TargetContext::getRuleIndex() const {
  return SiddhiqlParser::RuleTarget;
}

antlrcpp::Any SiddhiqlParser::TargetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitTarget(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::TargetContext* SiddhiqlParser::target() {
  TargetContext *_localctx = _tracker.createInstance<TargetContext>(_ctx, getState());
  enterRule(_localctx, 234, SiddhiqlParser::RuleTarget);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1539);
    source();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventContext ------------------------------------------------------------------

SiddhiqlParser::EventContext::EventContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::NameContext* SiddhiqlParser::EventContext::name() {
  return getRuleContext<SiddhiqlParser::NameContext>(0);
}


size_t SiddhiqlParser::EventContext::getRuleIndex() const {
  return SiddhiqlParser::RuleEvent;
}

antlrcpp::Any SiddhiqlParser::EventContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitEvent(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::EventContext* SiddhiqlParser::event() {
  EventContext *_localctx = _tracker.createInstance<EventContext>(_ctx, getState());
  enterRule(_localctx, 236, SiddhiqlParser::RuleEvent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1541);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

SiddhiqlParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::IdContext* SiddhiqlParser::NameContext::id() {
  return getRuleContext<SiddhiqlParser::IdContext>(0);
}

SiddhiqlParser::KeywordContext* SiddhiqlParser::NameContext::keyword() {
  return getRuleContext<SiddhiqlParser::KeywordContext>(0);
}


size_t SiddhiqlParser::NameContext::getRuleIndex() const {
  return SiddhiqlParser::RuleName;
}

antlrcpp::Any SiddhiqlParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::NameContext* SiddhiqlParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 238, SiddhiqlParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1545);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::ID_QUOTES:
      case SiddhiqlParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(1543);
        id();
        break;
      }

      case SiddhiqlParser::STREAM:
      case SiddhiqlParser::DEFINE:
      case SiddhiqlParser::TABLE:
      case SiddhiqlParser::APP:
      case SiddhiqlParser::FROM:
      case SiddhiqlParser::PARTITION:
      case SiddhiqlParser::WINDOW:
      case SiddhiqlParser::SELECT:
      case SiddhiqlParser::GROUP:
      case SiddhiqlParser::BY:
      case SiddhiqlParser::ORDER:
      case SiddhiqlParser::LIMIT:
      case SiddhiqlParser::ASC:
      case SiddhiqlParser::DESC:
      case SiddhiqlParser::HAVING:
      case SiddhiqlParser::INSERT:
      case SiddhiqlParser::DELETE:
      case SiddhiqlParser::UPDATE:
      case SiddhiqlParser::RETURN:
      case SiddhiqlParser::EVENTS:
      case SiddhiqlParser::INTO:
      case SiddhiqlParser::OUTPUT:
      case SiddhiqlParser::EXPIRED:
      case SiddhiqlParser::CURRENT:
      case SiddhiqlParser::SNAPSHOT:
      case SiddhiqlParser::FOR:
      case SiddhiqlParser::RAW:
      case SiddhiqlParser::OF:
      case SiddhiqlParser::AS:
      case SiddhiqlParser::OR:
      case SiddhiqlParser::AND:
      case SiddhiqlParser::ON:
      case SiddhiqlParser::IS:
      case SiddhiqlParser::NOT:
      case SiddhiqlParser::WITHIN:
      case SiddhiqlParser::WITH:
      case SiddhiqlParser::BEGIN:
      case SiddhiqlParser::END:
      case SiddhiqlParser::NUL:
      case SiddhiqlParser::EVERY:
      case SiddhiqlParser::LAST:
      case SiddhiqlParser::ALL:
      case SiddhiqlParser::FIRST:
      case SiddhiqlParser::JOIN:
      case SiddhiqlParser::INNER:
      case SiddhiqlParser::OUTER:
      case SiddhiqlParser::RIGHT:
      case SiddhiqlParser::LEFT:
      case SiddhiqlParser::FULL:
      case SiddhiqlParser::UNIDIRECTIONAL:
      case SiddhiqlParser::YEARS:
      case SiddhiqlParser::MONTHS:
      case SiddhiqlParser::WEEKS:
      case SiddhiqlParser::DAYS:
      case SiddhiqlParser::HOURS:
      case SiddhiqlParser::MINUTES:
      case SiddhiqlParser::SECONDS:
      case SiddhiqlParser::MILLISECONDS:
      case SiddhiqlParser::FALSE:
      case SiddhiqlParser::TRUE:
      case SiddhiqlParser::STRING:
      case SiddhiqlParser::INT:
      case SiddhiqlParser::LONG:
      case SiddhiqlParser::FLOAT:
      case SiddhiqlParser::DOUBLE:
      case SiddhiqlParser::BOOL:
      case SiddhiqlParser::OBJECT: {
        enterOuterAlt(_localctx, 2);
        setState(1544);
        keyword();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectContext ------------------------------------------------------------------

SiddhiqlParser::CollectContext::CollectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SiddhiqlParser::CollectContext::INT_LITERAL() {
  return getTokens(SiddhiqlParser::INT_LITERAL);
}

tree::TerminalNode* SiddhiqlParser::CollectContext::INT_LITERAL(size_t i) {
  return getToken(SiddhiqlParser::INT_LITERAL, i);
}


size_t SiddhiqlParser::CollectContext::getRuleIndex() const {
  return SiddhiqlParser::RuleCollect;
}

antlrcpp::Any SiddhiqlParser::CollectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitCollect(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::CollectContext* SiddhiqlParser::collect() {
  CollectContext *_localctx = _tracker.createInstance<CollectContext>(_ctx, getState());
  enterRule(_localctx, 240, SiddhiqlParser::RuleCollect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1547);
      dynamic_cast<CollectContext *>(_localctx)->start = match(SiddhiqlParser::INT_LITERAL);
      setState(1548);
      match(SiddhiqlParser::COL);
      setState(1549);
      dynamic_cast<CollectContext *>(_localctx)->end = match(SiddhiqlParser::INT_LITERAL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1550);
      dynamic_cast<CollectContext *>(_localctx)->start = match(SiddhiqlParser::INT_LITERAL);
      setState(1551);
      match(SiddhiqlParser::COL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1552);
      match(SiddhiqlParser::COL);
      setState(1553);
      dynamic_cast<CollectContext *>(_localctx)->end = match(SiddhiqlParser::INT_LITERAL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1554);
      match(SiddhiqlParser::INT_LITERAL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_typeContext ------------------------------------------------------------------

SiddhiqlParser::Attribute_typeContext::Attribute_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::STRING() {
  return getToken(SiddhiqlParser::STRING, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::INT() {
  return getToken(SiddhiqlParser::INT, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::LONG() {
  return getToken(SiddhiqlParser::LONG, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::FLOAT() {
  return getToken(SiddhiqlParser::FLOAT, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::DOUBLE() {
  return getToken(SiddhiqlParser::DOUBLE, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::BOOL() {
  return getToken(SiddhiqlParser::BOOL, 0);
}

tree::TerminalNode* SiddhiqlParser::Attribute_typeContext::OBJECT() {
  return getToken(SiddhiqlParser::OBJECT, 0);
}


size_t SiddhiqlParser::Attribute_typeContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAttribute_type;
}

antlrcpp::Any SiddhiqlParser::Attribute_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAttribute_type(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Attribute_typeContext* SiddhiqlParser::attribute_type() {
  Attribute_typeContext *_localctx = _tracker.createInstance<Attribute_typeContext>(_ctx, getState());
  enterRule(_localctx, 242, SiddhiqlParser::RuleAttribute_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1557);
    _la = _input->LA(1);
    if (!(((((_la - 96) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 96)) & ((1ULL << (SiddhiqlParser::STRING - 96))
      | (1ULL << (SiddhiqlParser::INT - 96))
      | (1ULL << (SiddhiqlParser::LONG - 96))
      | (1ULL << (SiddhiqlParser::FLOAT - 96))
      | (1ULL << (SiddhiqlParser::DOUBLE - 96))
      | (1ULL << (SiddhiqlParser::BOOL - 96))
      | (1ULL << (SiddhiqlParser::OBJECT - 96)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JoinContext ------------------------------------------------------------------

SiddhiqlParser::JoinContext::JoinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::JoinContext::LEFT() {
  return getToken(SiddhiqlParser::LEFT, 0);
}

tree::TerminalNode* SiddhiqlParser::JoinContext::OUTER() {
  return getToken(SiddhiqlParser::OUTER, 0);
}

tree::TerminalNode* SiddhiqlParser::JoinContext::JOIN() {
  return getToken(SiddhiqlParser::JOIN, 0);
}

tree::TerminalNode* SiddhiqlParser::JoinContext::RIGHT() {
  return getToken(SiddhiqlParser::RIGHT, 0);
}

tree::TerminalNode* SiddhiqlParser::JoinContext::FULL() {
  return getToken(SiddhiqlParser::FULL, 0);
}

tree::TerminalNode* SiddhiqlParser::JoinContext::INNER() {
  return getToken(SiddhiqlParser::INNER, 0);
}


size_t SiddhiqlParser::JoinContext::getRuleIndex() const {
  return SiddhiqlParser::RuleJoin;
}

antlrcpp::Any SiddhiqlParser::JoinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitJoin(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::JoinContext* SiddhiqlParser::join() {
  JoinContext *_localctx = _tracker.createInstance<JoinContext>(_ctx, getState());
  enterRule(_localctx, 244, SiddhiqlParser::RuleJoin);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1574);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SiddhiqlParser::LEFT: {
        enterOuterAlt(_localctx, 1);
        setState(1559);
        match(SiddhiqlParser::LEFT);
        setState(1560);
        match(SiddhiqlParser::OUTER);
        setState(1561);
        match(SiddhiqlParser::JOIN);
        break;
      }

      case SiddhiqlParser::RIGHT: {
        enterOuterAlt(_localctx, 2);
        setState(1562);
        match(SiddhiqlParser::RIGHT);
        setState(1563);
        match(SiddhiqlParser::OUTER);
        setState(1564);
        match(SiddhiqlParser::JOIN);
        break;
      }

      case SiddhiqlParser::FULL: {
        enterOuterAlt(_localctx, 3);
        setState(1565);
        match(SiddhiqlParser::FULL);
        setState(1566);
        match(SiddhiqlParser::OUTER);
        setState(1567);
        match(SiddhiqlParser::JOIN);
        break;
      }

      case SiddhiqlParser::OUTER: {
        enterOuterAlt(_localctx, 4);
        setState(1568);
        match(SiddhiqlParser::OUTER);
        setState(1569);
        match(SiddhiqlParser::JOIN);
        break;
      }

      case SiddhiqlParser::JOIN:
      case SiddhiqlParser::INNER: {
        enterOuterAlt(_localctx, 5);
        setState(1571);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SiddhiqlParser::INNER) {
          setState(1570);
          match(SiddhiqlParser::INNER);
        }
        setState(1573);
        match(SiddhiqlParser::JOIN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_valueContext ------------------------------------------------------------------

SiddhiqlParser::Constant_valueContext::Constant_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Bool_valueContext* SiddhiqlParser::Constant_valueContext::bool_value() {
  return getRuleContext<SiddhiqlParser::Bool_valueContext>(0);
}

SiddhiqlParser::Signed_double_valueContext* SiddhiqlParser::Constant_valueContext::signed_double_value() {
  return getRuleContext<SiddhiqlParser::Signed_double_valueContext>(0);
}

SiddhiqlParser::Signed_float_valueContext* SiddhiqlParser::Constant_valueContext::signed_float_value() {
  return getRuleContext<SiddhiqlParser::Signed_float_valueContext>(0);
}

SiddhiqlParser::Signed_long_valueContext* SiddhiqlParser::Constant_valueContext::signed_long_value() {
  return getRuleContext<SiddhiqlParser::Signed_long_valueContext>(0);
}

SiddhiqlParser::Signed_int_valueContext* SiddhiqlParser::Constant_valueContext::signed_int_value() {
  return getRuleContext<SiddhiqlParser::Signed_int_valueContext>(0);
}

SiddhiqlParser::Time_valueContext* SiddhiqlParser::Constant_valueContext::time_value() {
  return getRuleContext<SiddhiqlParser::Time_valueContext>(0);
}

SiddhiqlParser::String_valueContext* SiddhiqlParser::Constant_valueContext::string_value() {
  return getRuleContext<SiddhiqlParser::String_valueContext>(0);
}


size_t SiddhiqlParser::Constant_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleConstant_value;
}

antlrcpp::Any SiddhiqlParser::Constant_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitConstant_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Constant_valueContext* SiddhiqlParser::constant_value() {
  Constant_valueContext *_localctx = _tracker.createInstance<Constant_valueContext>(_ctx, getState());
  enterRule(_localctx, 246, SiddhiqlParser::RuleConstant_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1583);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1576);
      bool_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1577);
      signed_double_value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1578);
      signed_float_value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1579);
      signed_long_value();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1580);
      signed_int_value();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1581);
      time_value();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1582);
      string_value();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsContext ------------------------------------------------------------------

SiddhiqlParser::AsContext::AsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::AsContext::AS() {
  return getToken(SiddhiqlParser::AS, 0);
}


size_t SiddhiqlParser::AsContext::getRuleIndex() const {
  return SiddhiqlParser::RuleAs;
}

antlrcpp::Any SiddhiqlParser::AsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitAs(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::AsContext* SiddhiqlParser::as() {
  AsContext *_localctx = _tracker.createInstance<AsContext>(_ctx, getState());
  enterRule(_localctx, 248, SiddhiqlParser::RuleAs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1585);
    match(SiddhiqlParser::AS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommaContext ------------------------------------------------------------------

SiddhiqlParser::CommaContext::CommaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::CommaContext::COMMA() {
  return getToken(SiddhiqlParser::COMMA, 0);
}


size_t SiddhiqlParser::CommaContext::getRuleIndex() const {
  return SiddhiqlParser::RuleComma;
}

antlrcpp::Any SiddhiqlParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::CommaContext* SiddhiqlParser::comma() {
  CommaContext *_localctx = _tracker.createInstance<CommaContext>(_ctx, getState());
  enterRule(_localctx, 250, SiddhiqlParser::RuleComma);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1587);
    match(SiddhiqlParser::COMMA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

SiddhiqlParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::IdContext::ID_QUOTES() {
  return getToken(SiddhiqlParser::ID_QUOTES, 0);
}

tree::TerminalNode* SiddhiqlParser::IdContext::ID() {
  return getToken(SiddhiqlParser::ID, 0);
}


size_t SiddhiqlParser::IdContext::getRuleIndex() const {
  return SiddhiqlParser::RuleId;
}

antlrcpp::Any SiddhiqlParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::IdContext* SiddhiqlParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 252, SiddhiqlParser::RuleId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1589);
    _la = _input->LA(1);
    if (!(_la == SiddhiqlParser::ID_QUOTES

    || _la == SiddhiqlParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

SiddhiqlParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::APP() {
  return getToken(SiddhiqlParser::APP, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::STREAM() {
  return getToken(SiddhiqlParser::STREAM, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::DEFINE() {
  return getToken(SiddhiqlParser::DEFINE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::TABLE() {
  return getToken(SiddhiqlParser::TABLE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::FROM() {
  return getToken(SiddhiqlParser::FROM, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::PARTITION() {
  return getToken(SiddhiqlParser::PARTITION, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::WINDOW() {
  return getToken(SiddhiqlParser::WINDOW, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::SELECT() {
  return getToken(SiddhiqlParser::SELECT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::GROUP() {
  return getToken(SiddhiqlParser::GROUP, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::BY() {
  return getToken(SiddhiqlParser::BY, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::ORDER() {
  return getToken(SiddhiqlParser::ORDER, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::ASC() {
  return getToken(SiddhiqlParser::ASC, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::DESC() {
  return getToken(SiddhiqlParser::DESC, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::LIMIT() {
  return getToken(SiddhiqlParser::LIMIT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::HAVING() {
  return getToken(SiddhiqlParser::HAVING, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::INSERT() {
  return getToken(SiddhiqlParser::INSERT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::DELETE() {
  return getToken(SiddhiqlParser::DELETE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::UPDATE() {
  return getToken(SiddhiqlParser::UPDATE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::RETURN() {
  return getToken(SiddhiqlParser::RETURN, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::EVENTS() {
  return getToken(SiddhiqlParser::EVENTS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::INTO() {
  return getToken(SiddhiqlParser::INTO, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::OUTPUT() {
  return getToken(SiddhiqlParser::OUTPUT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::EXPIRED() {
  return getToken(SiddhiqlParser::EXPIRED, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::CURRENT() {
  return getToken(SiddhiqlParser::CURRENT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::SNAPSHOT() {
  return getToken(SiddhiqlParser::SNAPSHOT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::FOR() {
  return getToken(SiddhiqlParser::FOR, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::RAW() {
  return getToken(SiddhiqlParser::RAW, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::OF() {
  return getToken(SiddhiqlParser::OF, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::AS() {
  return getToken(SiddhiqlParser::AS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::OR() {
  return getToken(SiddhiqlParser::OR, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::AND() {
  return getToken(SiddhiqlParser::AND, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::ON() {
  return getToken(SiddhiqlParser::ON, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::IS() {
  return getToken(SiddhiqlParser::IS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::NOT() {
  return getToken(SiddhiqlParser::NOT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::WITHIN() {
  return getToken(SiddhiqlParser::WITHIN, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::WITH() {
  return getToken(SiddhiqlParser::WITH, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::BEGIN() {
  return getToken(SiddhiqlParser::BEGIN, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::END() {
  return getToken(SiddhiqlParser::END, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::NUL() {
  return getToken(SiddhiqlParser::NUL, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::EVERY() {
  return getToken(SiddhiqlParser::EVERY, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::LAST() {
  return getToken(SiddhiqlParser::LAST, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::ALL() {
  return getToken(SiddhiqlParser::ALL, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::FIRST() {
  return getToken(SiddhiqlParser::FIRST, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::JOIN() {
  return getToken(SiddhiqlParser::JOIN, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::INNER() {
  return getToken(SiddhiqlParser::INNER, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::OUTER() {
  return getToken(SiddhiqlParser::OUTER, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::RIGHT() {
  return getToken(SiddhiqlParser::RIGHT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::LEFT() {
  return getToken(SiddhiqlParser::LEFT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::FULL() {
  return getToken(SiddhiqlParser::FULL, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::UNIDIRECTIONAL() {
  return getToken(SiddhiqlParser::UNIDIRECTIONAL, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::YEARS() {
  return getToken(SiddhiqlParser::YEARS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::MONTHS() {
  return getToken(SiddhiqlParser::MONTHS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::WEEKS() {
  return getToken(SiddhiqlParser::WEEKS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::DAYS() {
  return getToken(SiddhiqlParser::DAYS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::HOURS() {
  return getToken(SiddhiqlParser::HOURS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::MINUTES() {
  return getToken(SiddhiqlParser::MINUTES, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::SECONDS() {
  return getToken(SiddhiqlParser::SECONDS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::MILLISECONDS() {
  return getToken(SiddhiqlParser::MILLISECONDS, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::FALSE() {
  return getToken(SiddhiqlParser::FALSE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::TRUE() {
  return getToken(SiddhiqlParser::TRUE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::STRING() {
  return getToken(SiddhiqlParser::STRING, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::INT() {
  return getToken(SiddhiqlParser::INT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::LONG() {
  return getToken(SiddhiqlParser::LONG, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::FLOAT() {
  return getToken(SiddhiqlParser::FLOAT, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::DOUBLE() {
  return getToken(SiddhiqlParser::DOUBLE, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::BOOL() {
  return getToken(SiddhiqlParser::BOOL, 0);
}

tree::TerminalNode* SiddhiqlParser::KeywordContext::OBJECT() {
  return getToken(SiddhiqlParser::OBJECT, 0);
}


size_t SiddhiqlParser::KeywordContext::getRuleIndex() const {
  return SiddhiqlParser::RuleKeyword;
}

antlrcpp::Any SiddhiqlParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::KeywordContext* SiddhiqlParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 254, SiddhiqlParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1591);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SiddhiqlParser::STREAM)
      | (1ULL << SiddhiqlParser::DEFINE)
      | (1ULL << SiddhiqlParser::TABLE)
      | (1ULL << SiddhiqlParser::APP)
      | (1ULL << SiddhiqlParser::FROM)
      | (1ULL << SiddhiqlParser::PARTITION)
      | (1ULL << SiddhiqlParser::WINDOW)
      | (1ULL << SiddhiqlParser::SELECT)
      | (1ULL << SiddhiqlParser::GROUP)
      | (1ULL << SiddhiqlParser::BY)
      | (1ULL << SiddhiqlParser::ORDER)
      | (1ULL << SiddhiqlParser::LIMIT)
      | (1ULL << SiddhiqlParser::ASC)
      | (1ULL << SiddhiqlParser::DESC)
      | (1ULL << SiddhiqlParser::HAVING)
      | (1ULL << SiddhiqlParser::INSERT)
      | (1ULL << SiddhiqlParser::DELETE)
      | (1ULL << SiddhiqlParser::UPDATE)
      | (1ULL << SiddhiqlParser::RETURN)
      | (1ULL << SiddhiqlParser::EVENTS)
      | (1ULL << SiddhiqlParser::INTO)
      | (1ULL << SiddhiqlParser::OUTPUT)
      | (1ULL << SiddhiqlParser::EXPIRED)
      | (1ULL << SiddhiqlParser::CURRENT)
      | (1ULL << SiddhiqlParser::SNAPSHOT)
      | (1ULL << SiddhiqlParser::FOR)
      | (1ULL << SiddhiqlParser::RAW)
      | (1ULL << SiddhiqlParser::OF)
      | (1ULL << SiddhiqlParser::AS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SiddhiqlParser::OR - 64))
      | (1ULL << (SiddhiqlParser::AND - 64))
      | (1ULL << (SiddhiqlParser::ON - 64))
      | (1ULL << (SiddhiqlParser::IS - 64))
      | (1ULL << (SiddhiqlParser::NOT - 64))
      | (1ULL << (SiddhiqlParser::WITHIN - 64))
      | (1ULL << (SiddhiqlParser::WITH - 64))
      | (1ULL << (SiddhiqlParser::BEGIN - 64))
      | (1ULL << (SiddhiqlParser::END - 64))
      | (1ULL << (SiddhiqlParser::NUL - 64))
      | (1ULL << (SiddhiqlParser::EVERY - 64))
      | (1ULL << (SiddhiqlParser::LAST - 64))
      | (1ULL << (SiddhiqlParser::ALL - 64))
      | (1ULL << (SiddhiqlParser::FIRST - 64))
      | (1ULL << (SiddhiqlParser::JOIN - 64))
      | (1ULL << (SiddhiqlParser::INNER - 64))
      | (1ULL << (SiddhiqlParser::OUTER - 64))
      | (1ULL << (SiddhiqlParser::RIGHT - 64))
      | (1ULL << (SiddhiqlParser::LEFT - 64))
      | (1ULL << (SiddhiqlParser::FULL - 64))
      | (1ULL << (SiddhiqlParser::UNIDIRECTIONAL - 64))
      | (1ULL << (SiddhiqlParser::YEARS - 64))
      | (1ULL << (SiddhiqlParser::MONTHS - 64))
      | (1ULL << (SiddhiqlParser::WEEKS - 64))
      | (1ULL << (SiddhiqlParser::DAYS - 64))
      | (1ULL << (SiddhiqlParser::HOURS - 64))
      | (1ULL << (SiddhiqlParser::MINUTES - 64))
      | (1ULL << (SiddhiqlParser::SECONDS - 64))
      | (1ULL << (SiddhiqlParser::MILLISECONDS - 64))
      | (1ULL << (SiddhiqlParser::FALSE - 64))
      | (1ULL << (SiddhiqlParser::TRUE - 64))
      | (1ULL << (SiddhiqlParser::STRING - 64))
      | (1ULL << (SiddhiqlParser::INT - 64))
      | (1ULL << (SiddhiqlParser::LONG - 64))
      | (1ULL << (SiddhiqlParser::FLOAT - 64))
      | (1ULL << (SiddhiqlParser::DOUBLE - 64))
      | (1ULL << (SiddhiqlParser::BOOL - 64))
      | (1ULL << (SiddhiqlParser::OBJECT - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_valueContext ------------------------------------------------------------------

SiddhiqlParser::Time_valueContext::Time_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SiddhiqlParser::Year_valueContext* SiddhiqlParser::Time_valueContext::year_value() {
  return getRuleContext<SiddhiqlParser::Year_valueContext>(0);
}

SiddhiqlParser::Month_valueContext* SiddhiqlParser::Time_valueContext::month_value() {
  return getRuleContext<SiddhiqlParser::Month_valueContext>(0);
}

SiddhiqlParser::Week_valueContext* SiddhiqlParser::Time_valueContext::week_value() {
  return getRuleContext<SiddhiqlParser::Week_valueContext>(0);
}

SiddhiqlParser::Day_valueContext* SiddhiqlParser::Time_valueContext::day_value() {
  return getRuleContext<SiddhiqlParser::Day_valueContext>(0);
}

SiddhiqlParser::Hour_valueContext* SiddhiqlParser::Time_valueContext::hour_value() {
  return getRuleContext<SiddhiqlParser::Hour_valueContext>(0);
}

SiddhiqlParser::Minute_valueContext* SiddhiqlParser::Time_valueContext::minute_value() {
  return getRuleContext<SiddhiqlParser::Minute_valueContext>(0);
}

SiddhiqlParser::Second_valueContext* SiddhiqlParser::Time_valueContext::second_value() {
  return getRuleContext<SiddhiqlParser::Second_valueContext>(0);
}

SiddhiqlParser::Millisecond_valueContext* SiddhiqlParser::Time_valueContext::millisecond_value() {
  return getRuleContext<SiddhiqlParser::Millisecond_valueContext>(0);
}


size_t SiddhiqlParser::Time_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleTime_value;
}

antlrcpp::Any SiddhiqlParser::Time_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitTime_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Time_valueContext* SiddhiqlParser::time_value() {
  Time_valueContext *_localctx = _tracker.createInstance<Time_valueContext>(_ctx, getState());
  enterRule(_localctx, 256, SiddhiqlParser::RuleTime_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1685);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1593);
      year_value();
      setState(1595);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
      case 1: {
        setState(1594);
        month_value();
        break;
      }

      }
      setState(1598);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
      case 1: {
        setState(1597);
        week_value();
        break;
      }

      }
      setState(1601);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
      case 1: {
        setState(1600);
        day_value();
        break;
      }

      }
      setState(1604);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
      case 1: {
        setState(1603);
        hour_value();
        break;
      }

      }
      setState(1607);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
      case 1: {
        setState(1606);
        minute_value();
        break;
      }

      }
      setState(1610);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
      case 1: {
        setState(1609);
        second_value();
        break;
      }

      }
      setState(1613);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
      case 1: {
        setState(1612);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1615);
      month_value();
      setState(1617);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
      case 1: {
        setState(1616);
        week_value();
        break;
      }

      }
      setState(1620);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
      case 1: {
        setState(1619);
        day_value();
        break;
      }

      }
      setState(1623);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
      case 1: {
        setState(1622);
        hour_value();
        break;
      }

      }
      setState(1626);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
      case 1: {
        setState(1625);
        minute_value();
        break;
      }

      }
      setState(1629);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
      case 1: {
        setState(1628);
        second_value();
        break;
      }

      }
      setState(1632);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
      case 1: {
        setState(1631);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1634);
      week_value();
      setState(1636);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
      case 1: {
        setState(1635);
        day_value();
        break;
      }

      }
      setState(1639);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
      case 1: {
        setState(1638);
        hour_value();
        break;
      }

      }
      setState(1642);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
      case 1: {
        setState(1641);
        minute_value();
        break;
      }

      }
      setState(1645);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
      case 1: {
        setState(1644);
        second_value();
        break;
      }

      }
      setState(1648);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx)) {
      case 1: {
        setState(1647);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1650);
      day_value();
      setState(1652);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx)) {
      case 1: {
        setState(1651);
        hour_value();
        break;
      }

      }
      setState(1655);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
      case 1: {
        setState(1654);
        minute_value();
        break;
      }

      }
      setState(1658);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
      case 1: {
        setState(1657);
        second_value();
        break;
      }

      }
      setState(1661);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
      case 1: {
        setState(1660);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1663);
      hour_value();
      setState(1665);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx)) {
      case 1: {
        setState(1664);
        minute_value();
        break;
      }

      }
      setState(1668);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx)) {
      case 1: {
        setState(1667);
        second_value();
        break;
      }

      }
      setState(1671);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 211, _ctx)) {
      case 1: {
        setState(1670);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1673);
      minute_value();
      setState(1675);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx)) {
      case 1: {
        setState(1674);
        second_value();
        break;
      }

      }
      setState(1678);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
      case 1: {
        setState(1677);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1680);
      second_value();
      setState(1682);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx)) {
      case 1: {
        setState(1681);
        millisecond_value();
        break;
      }

      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1684);
      millisecond_value();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Year_valueContext ------------------------------------------------------------------

SiddhiqlParser::Year_valueContext::Year_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Year_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Year_valueContext::YEARS() {
  return getToken(SiddhiqlParser::YEARS, 0);
}


size_t SiddhiqlParser::Year_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleYear_value;
}

antlrcpp::Any SiddhiqlParser::Year_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitYear_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Year_valueContext* SiddhiqlParser::year_value() {
  Year_valueContext *_localctx = _tracker.createInstance<Year_valueContext>(_ctx, getState());
  enterRule(_localctx, 258, SiddhiqlParser::RuleYear_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1687);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1688);
    match(SiddhiqlParser::YEARS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Month_valueContext ------------------------------------------------------------------

SiddhiqlParser::Month_valueContext::Month_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Month_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Month_valueContext::MONTHS() {
  return getToken(SiddhiqlParser::MONTHS, 0);
}


size_t SiddhiqlParser::Month_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleMonth_value;
}

antlrcpp::Any SiddhiqlParser::Month_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitMonth_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Month_valueContext* SiddhiqlParser::month_value() {
  Month_valueContext *_localctx = _tracker.createInstance<Month_valueContext>(_ctx, getState());
  enterRule(_localctx, 260, SiddhiqlParser::RuleMonth_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1690);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1691);
    match(SiddhiqlParser::MONTHS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Week_valueContext ------------------------------------------------------------------

SiddhiqlParser::Week_valueContext::Week_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Week_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Week_valueContext::WEEKS() {
  return getToken(SiddhiqlParser::WEEKS, 0);
}


size_t SiddhiqlParser::Week_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleWeek_value;
}

antlrcpp::Any SiddhiqlParser::Week_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitWeek_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Week_valueContext* SiddhiqlParser::week_value() {
  Week_valueContext *_localctx = _tracker.createInstance<Week_valueContext>(_ctx, getState());
  enterRule(_localctx, 262, SiddhiqlParser::RuleWeek_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1693);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1694);
    match(SiddhiqlParser::WEEKS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Day_valueContext ------------------------------------------------------------------

SiddhiqlParser::Day_valueContext::Day_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Day_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Day_valueContext::DAYS() {
  return getToken(SiddhiqlParser::DAYS, 0);
}


size_t SiddhiqlParser::Day_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleDay_value;
}

antlrcpp::Any SiddhiqlParser::Day_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitDay_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Day_valueContext* SiddhiqlParser::day_value() {
  Day_valueContext *_localctx = _tracker.createInstance<Day_valueContext>(_ctx, getState());
  enterRule(_localctx, 264, SiddhiqlParser::RuleDay_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1696);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1697);
    match(SiddhiqlParser::DAYS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Hour_valueContext ------------------------------------------------------------------

SiddhiqlParser::Hour_valueContext::Hour_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Hour_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Hour_valueContext::HOURS() {
  return getToken(SiddhiqlParser::HOURS, 0);
}


size_t SiddhiqlParser::Hour_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleHour_value;
}

antlrcpp::Any SiddhiqlParser::Hour_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitHour_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Hour_valueContext* SiddhiqlParser::hour_value() {
  Hour_valueContext *_localctx = _tracker.createInstance<Hour_valueContext>(_ctx, getState());
  enterRule(_localctx, 266, SiddhiqlParser::RuleHour_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1699);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1700);
    match(SiddhiqlParser::HOURS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Minute_valueContext ------------------------------------------------------------------

SiddhiqlParser::Minute_valueContext::Minute_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Minute_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Minute_valueContext::MINUTES() {
  return getToken(SiddhiqlParser::MINUTES, 0);
}


size_t SiddhiqlParser::Minute_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleMinute_value;
}

antlrcpp::Any SiddhiqlParser::Minute_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitMinute_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Minute_valueContext* SiddhiqlParser::minute_value() {
  Minute_valueContext *_localctx = _tracker.createInstance<Minute_valueContext>(_ctx, getState());
  enterRule(_localctx, 268, SiddhiqlParser::RuleMinute_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1702);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1703);
    match(SiddhiqlParser::MINUTES);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Second_valueContext ------------------------------------------------------------------

SiddhiqlParser::Second_valueContext::Second_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Second_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Second_valueContext::SECONDS() {
  return getToken(SiddhiqlParser::SECONDS, 0);
}


size_t SiddhiqlParser::Second_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSecond_value;
}

antlrcpp::Any SiddhiqlParser::Second_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSecond_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Second_valueContext* SiddhiqlParser::second_value() {
  Second_valueContext *_localctx = _tracker.createInstance<Second_valueContext>(_ctx, getState());
  enterRule(_localctx, 270, SiddhiqlParser::RuleSecond_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1705);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1706);
    match(SiddhiqlParser::SECONDS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Millisecond_valueContext ------------------------------------------------------------------

SiddhiqlParser::Millisecond_valueContext::Millisecond_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Millisecond_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}

tree::TerminalNode* SiddhiqlParser::Millisecond_valueContext::MILLISECONDS() {
  return getToken(SiddhiqlParser::MILLISECONDS, 0);
}


size_t SiddhiqlParser::Millisecond_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleMillisecond_value;
}

antlrcpp::Any SiddhiqlParser::Millisecond_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitMillisecond_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Millisecond_valueContext* SiddhiqlParser::millisecond_value() {
  Millisecond_valueContext *_localctx = _tracker.createInstance<Millisecond_valueContext>(_ctx, getState());
  enterRule(_localctx, 272, SiddhiqlParser::RuleMillisecond_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1708);
    match(SiddhiqlParser::INT_LITERAL);
    setState(1709);
    match(SiddhiqlParser::MILLISECONDS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_double_valueContext ------------------------------------------------------------------

SiddhiqlParser::Signed_double_valueContext::Signed_double_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Signed_double_valueContext::DOUBLE_LITERAL() {
  return getToken(SiddhiqlParser::DOUBLE_LITERAL, 0);
}


size_t SiddhiqlParser::Signed_double_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSigned_double_value;
}

antlrcpp::Any SiddhiqlParser::Signed_double_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSigned_double_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Signed_double_valueContext* SiddhiqlParser::signed_double_value() {
  Signed_double_valueContext *_localctx = _tracker.createInstance<Signed_double_valueContext>(_ctx, getState());
  enterRule(_localctx, 274, SiddhiqlParser::RuleSigned_double_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1712);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::PLUS

    || _la == SiddhiqlParser::MINUS) {
      setState(1711);
      _la = _input->LA(1);
      if (!(_la == SiddhiqlParser::PLUS

      || _la == SiddhiqlParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1714);
    match(SiddhiqlParser::DOUBLE_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_long_valueContext ------------------------------------------------------------------

SiddhiqlParser::Signed_long_valueContext::Signed_long_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Signed_long_valueContext::LONG_LITERAL() {
  return getToken(SiddhiqlParser::LONG_LITERAL, 0);
}


size_t SiddhiqlParser::Signed_long_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSigned_long_value;
}

antlrcpp::Any SiddhiqlParser::Signed_long_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSigned_long_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Signed_long_valueContext* SiddhiqlParser::signed_long_value() {
  Signed_long_valueContext *_localctx = _tracker.createInstance<Signed_long_valueContext>(_ctx, getState());
  enterRule(_localctx, 276, SiddhiqlParser::RuleSigned_long_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1717);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::PLUS

    || _la == SiddhiqlParser::MINUS) {
      setState(1716);
      _la = _input->LA(1);
      if (!(_la == SiddhiqlParser::PLUS

      || _la == SiddhiqlParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1719);
    match(SiddhiqlParser::LONG_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_float_valueContext ------------------------------------------------------------------

SiddhiqlParser::Signed_float_valueContext::Signed_float_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Signed_float_valueContext::FLOAT_LITERAL() {
  return getToken(SiddhiqlParser::FLOAT_LITERAL, 0);
}


size_t SiddhiqlParser::Signed_float_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSigned_float_value;
}

antlrcpp::Any SiddhiqlParser::Signed_float_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSigned_float_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Signed_float_valueContext* SiddhiqlParser::signed_float_value() {
  Signed_float_valueContext *_localctx = _tracker.createInstance<Signed_float_valueContext>(_ctx, getState());
  enterRule(_localctx, 278, SiddhiqlParser::RuleSigned_float_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1722);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::PLUS

    || _la == SiddhiqlParser::MINUS) {
      setState(1721);
      _la = _input->LA(1);
      if (!(_la == SiddhiqlParser::PLUS

      || _la == SiddhiqlParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1724);
    match(SiddhiqlParser::FLOAT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_int_valueContext ------------------------------------------------------------------

SiddhiqlParser::Signed_int_valueContext::Signed_int_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Signed_int_valueContext::INT_LITERAL() {
  return getToken(SiddhiqlParser::INT_LITERAL, 0);
}


size_t SiddhiqlParser::Signed_int_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleSigned_int_value;
}

antlrcpp::Any SiddhiqlParser::Signed_int_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitSigned_int_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Signed_int_valueContext* SiddhiqlParser::signed_int_value() {
  Signed_int_valueContext *_localctx = _tracker.createInstance<Signed_int_valueContext>(_ctx, getState());
  enterRule(_localctx, 280, SiddhiqlParser::RuleSigned_int_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1727);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SiddhiqlParser::PLUS

    || _la == SiddhiqlParser::MINUS) {
      setState(1726);
      _la = _input->LA(1);
      if (!(_la == SiddhiqlParser::PLUS

      || _la == SiddhiqlParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1729);
    match(SiddhiqlParser::INT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_valueContext ------------------------------------------------------------------

SiddhiqlParser::Bool_valueContext::Bool_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::Bool_valueContext::TRUE() {
  return getToken(SiddhiqlParser::TRUE, 0);
}

tree::TerminalNode* SiddhiqlParser::Bool_valueContext::FALSE() {
  return getToken(SiddhiqlParser::FALSE, 0);
}


size_t SiddhiqlParser::Bool_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleBool_value;
}

antlrcpp::Any SiddhiqlParser::Bool_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitBool_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::Bool_valueContext* SiddhiqlParser::bool_value() {
  Bool_valueContext *_localctx = _tracker.createInstance<Bool_valueContext>(_ctx, getState());
  enterRule(_localctx, 282, SiddhiqlParser::RuleBool_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1731);
    _la = _input->LA(1);
    if (!(_la == SiddhiqlParser::FALSE

    || _la == SiddhiqlParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_valueContext ------------------------------------------------------------------

SiddhiqlParser::String_valueContext::String_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SiddhiqlParser::String_valueContext::STRING_LITERAL() {
  return getToken(SiddhiqlParser::STRING_LITERAL, 0);
}


size_t SiddhiqlParser::String_valueContext::getRuleIndex() const {
  return SiddhiqlParser::RuleString_value;
}

antlrcpp::Any SiddhiqlParser::String_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SiddhiqlVisitor*>(visitor))
    return parserVisitor->visitString_value(this);
  else
    return visitor->visitChildren(this);
}

SiddhiqlParser::String_valueContext* SiddhiqlParser::string_value() {
  String_valueContext *_localctx = _tracker.createInstance<String_valueContext>(_ctx, getState());
  enterRule(_localctx, 284, SiddhiqlParser::RuleString_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1733);
    match(SiddhiqlParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SiddhiqlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 44: return every_pattern_source_chainSempred(dynamic_cast<Every_pattern_source_chainContext *>(context), predicateIndex);
    case 45: return pattern_source_chainSempred(dynamic_cast<Pattern_source_chainContext *>(context), predicateIndex);
    case 47: return left_absent_pattern_sourceSempred(dynamic_cast<Left_absent_pattern_sourceContext *>(context), predicateIndex);
    case 48: return right_absent_pattern_sourceSempred(dynamic_cast<Right_absent_pattern_sourceContext *>(context), predicateIndex);
    case 63: return left_absent_sequence_sourceSempred(dynamic_cast<Left_absent_sequence_sourceContext *>(context), predicateIndex);
    case 64: return right_absent_sequence_sourceSempred(dynamic_cast<Right_absent_sequence_sourceContext *>(context), predicateIndex);
    case 65: return sequence_source_chainSempred(dynamic_cast<Sequence_source_chainContext *>(context), predicateIndex);
    case 99: return math_operationSempred(dynamic_cast<Math_operationContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::every_pattern_source_chainSempred(Every_pattern_source_chainContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::pattern_source_chainSempred(Pattern_source_chainContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::left_absent_pattern_sourceSempred(Left_absent_pattern_sourceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::right_absent_pattern_sourceSempred(Right_absent_pattern_sourceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::left_absent_sequence_sourceSempred(Left_absent_sequence_sourceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::right_absent_sequence_sourceSempred(Right_absent_sequence_sourceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::sequence_source_chainSempred(Sequence_source_chainContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool SiddhiqlParser::math_operationSempred(Math_operationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 10);
    case 12: return precpred(_ctx, 9);
    case 13: return precpred(_ctx, 8);
    case 14: return precpred(_ctx, 7);
    case 15: return precpred(_ctx, 5);
    case 16: return precpred(_ctx, 4);
    case 17: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SiddhiqlParser::_decisionToDFA;
atn::PredictionContextCache SiddhiqlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SiddhiqlParser::_atn;
std::vector<uint16_t> SiddhiqlParser::_serializedATN;

std::vector<std::string> SiddhiqlParser::_ruleNames = {
  "parse", "error", "siddhi_app", "execution_element", "definition_stream_final", 
  "definition_stream", "attribute_name_type", "definition_table_final", 
  "definition_table", "definition_window_final", "definition_window", "store_query_final", 
  "store_query", "store_input", "definition_function_final", "definition_function", 
  "function_name", "language_name", "function_body", "definition_trigger_final", 
  "definition_trigger", "trigger_name", "definition_aggregation_final", 
  "definition_aggregation", "aggregation_name", "aggregation_time", "aggregation_time_duration", 
  "aggregation_time_range", "aggregation_time_interval", "annotation", "app_annotation", 
  "annotation_element", "partition", "partition_final", "partition_with_stream", 
  "condition_ranges", "condition_range", "query_final", "query", "query_input", 
  "standard_stream", "join_stream", "join_source", "pattern_stream", "every_pattern_source_chain", 
  "pattern_source_chain", "absent_pattern_source_chain", "left_absent_pattern_source", 
  "right_absent_pattern_source", "pattern_source", "logical_stateful_source", 
  "logical_absent_stateful_source", "every_absent_pattern_source", "basic_absent_pattern_source", 
  "pattern_collection_stateful_source", "standard_stateful_source", "basic_source", 
  "basic_source_stream_handlers", "basic_source_stream_handler", "sequence_stream", 
  "every_sequence_source_chain", "every_absent_sequence_source_chain", "absent_sequence_source_chain", 
  "left_absent_sequence_source", "right_absent_sequence_source", "sequence_source_chain", 
  "sequence_source", "sequence_collection_stateful_source", "anonymous_stream", 
  "filter", "stream_function", "window", "group_by_query_selection", "query_section", 
  "group_by", "having", "order_by", "order_by_reference", "order", "limit", 
  "offset", "query_output", "store_query_output", "set_clause", "set_assignment", 
  "output_event_type", "output_rate", "output_rate_type", "for_time", "within_time", 
  "within_time_range", "per", "output_attribute", "attribute", "function_string", 
  "param_string", "execution_string_area", "execution_string", "expression", 
  "math_operation", "function_operation", "attribute_list", "null_check", 
  "stream_reference", "attribute_reference", "attribute_index", "function_id", 
  "function_namespace", "stream_id", "source_id", "alias", "property_name", 
  "attribute_name", "type", "property_value", "property_separator", "source", 
  "target", "event", "name", "collect", "attribute_type", "join", "constant_value", 
  "as", "comma", "id", "keyword", "time_value", "year_value", "month_value", 
  "week_value", "day_value", "hour_value", "minute_value", "second_value", 
  "millisecond_value", "signed_double_value", "signed_long_value", "signed_float_value", 
  "signed_int_value", "bool_value", "string_value"
};

std::vector<std::string> SiddhiqlParser::_literalNames = {
  "", "", "", "", "", "':'", "';'", "'.'", "'...'", "'('", "')'", "'['", 
  "']'", "','", "'='", "'*'", "'+'", "'?'", "'-'", "'/'", "'%'", "'<'", 
  "'<='", "'>'", "'>='", "'=='", "'!='", "'@'", "'->'", "'#'"
};

std::vector<std::string> SiddhiqlParser::_symbolicNames = {
  "", "INT_LITERAL", "LONG_LITERAL", "FLOAT_LITERAL", "DOUBLE_LITERAL", 
  "COL", "SCOL", "DOT", "TRIPLE_DOT", "OPEN_PAR", "CLOSE_PAR", "OPEN_SQUARE_BRACKETS", 
  "CLOSE_SQUARE_BRACKETS", "COMMA", "ASSIGN", "STAR", "PLUS", "QUESTION", 
  "MINUS", "DIV", "MOD", "LT", "LT_EQ", "GT", "GT_EQ", "EQ", "NOT_EQ", "AT_SYMBOL", 
  "FOLLOWED_BY", "HASH", "STREAM", "DEFINE", "FUNCTION", "TRIGGER", "TABLE", 
  "APP", "FROM", "PARTITION", "WINDOW", "SELECT", "GROUP", "BY", "ORDER", 
  "LIMIT", "OFFSET", "ASC", "DESC", "HAVING", "INSERT", "DELETE", "UPDATE", 
  "SET", "RETURN", "EVENTS", "INTO", "OUTPUT", "EXPIRED", "CURRENT", "SNAPSHOT", 
  "FOR", "RAW", "OF", "AS", "AT", "OR", "AND", "IN", "ON", "IS", "NOT", 
  "WITHIN", "WITH", "BEGIN", "END", "NUL", "EVERY", "LAST", "ALL", "FIRST", 
  "JOIN", "INNER", "OUTER", "RIGHT", "LEFT", "FULL", "UNIDIRECTIONAL", "YEARS", 
  "MONTHS", "WEEKS", "DAYS", "HOURS", "MINUTES", "SECONDS", "MILLISECONDS", 
  "FALSE", "TRUE", "STRING", "INT", "LONG", "FLOAT", "DOUBLE", "BOOL", "OBJECT", 
  "AGGREGATION", "AGGREGATE", "PER", "ID_QUOTES", "ID", "STRING_LITERAL", 
  "SINGLE_LINE_COMMENT", "MULTILINE_COMMENT", "SPACES", "UNEXPECTED_CHAR", 
  "SCRIPT"
};

dfa::Vocabulary SiddhiqlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SiddhiqlParser::_tokenNames;

SiddhiqlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x73, 0x6ca, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x7, 0x4, 0x128, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x12b, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x134, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x13e, 0xa, 0x4, 0x7, 0x4, 0x140, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x143, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x148, 0xa, 0x4, 0x7, 0x4, 0x14a, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x14d, 0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x150, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x154, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x158, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x7, 0x7, 0x15d, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x160, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x169, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x16c, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x175, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x7, 0xa, 0x17a, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x17d, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x189, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x18c, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x192, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x7, 0xc, 0x197, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x19a, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x1a6, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1a9, 0xb, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1af, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x1b3, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1ba, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1c8, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1ce, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1d1, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1d7, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1db, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x1e0, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x1e4, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1fa, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0x205, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x20b, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x7, 0x19, 0x210, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x213, 0xb, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x21e, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
    0x1b, 0x227, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 
    0x1e, 0x233, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x236, 0xb, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x23d, 
    0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x242, 0xa, 0x1f, 
    0x7, 0x1f, 0x244, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x247, 0xb, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x24b, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 
    0x20, 0x255, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x258, 0xb, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x5, 0x20, 0x25c, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x261, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x7, 0x22, 0x266, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x269, 0xb, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 
    0x22, 0x271, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x274, 0xb, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x27a, 0xa, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x27f, 0xa, 0x22, 0x7, 0x22, 
    0x281, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x284, 0xb, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x287, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x5, 0x23, 0x28d, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 
    0x24, 0x299, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 
    0x29e, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x2a1, 0xb, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x2a9, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x7, 0x28, 0x2ae, 0xa, 0x28, 
    0xc, 0x28, 0xe, 0x28, 0x2b1, 0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x5, 0x28, 0x2b6, 0xa, 0x28, 0x3, 0x28, 0x5, 0x28, 0x2b9, 0xa, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x5, 0x29, 0x2c2, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x2c6, 0xa, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x2c9, 0xa, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x2cc, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x2d2, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x2d8, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2dc, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2e1, 0xa, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x2e5, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x2e8, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x2ed, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x2f1, 0xa, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x2f8, 0xa, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x2ff, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x305, 
    0xa, 0x2e, 0x5, 0x2e, 0x307, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x7, 0x2e, 0x30c, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x30f, 0xb, 0x2e, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x316, 
    0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x31a, 0xa, 0x2f, 0x5, 0x2f, 
    0x31c, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x321, 
    0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x324, 0xb, 0x2f, 0x3, 0x30, 0x5, 0x30, 
    0x327, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 
    0x32d, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x332, 
    0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x336, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x33c, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x5, 0x31, 0x346, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x34e, 0xa, 0x31, 0xc, 0x31, 
    0xe, 0x31, 0x351, 0xb, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x355, 
    0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x35b, 
    0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x365, 0xa, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x36d, 
    0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x370, 0xb, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x376, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 
    0x34, 0x380, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x5, 0x35, 0x3a8, 0xa, 0x35, 0x3, 0x36, 0x5, 0x36, 
    0x3ab, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x3bb, 0xa, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x3c1, 0xa, 0x3a, 0x3, 0x3b, 
    0x6, 0x3b, 0x3c4, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x3c5, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x3ca, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
    0x3ce, 0xa, 0x3d, 0x3, 0x3e, 0x5, 0x3e, 0x3d1, 0xa, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x5, 0x3e, 0x3d5, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3f, 0x5, 0x3f, 0x3db, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x3df, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x3e5, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3e9, 0xa, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3ee, 0xa, 0x3f, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x3f4, 0xa, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x3f9, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x400, 0xa, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x5, 0x41, 0x40a, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x412, 0xa, 0x41, 0xc, 0x41, 
    0xe, 0x41, 0x415, 0xb, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x5, 0x42, 0x41c, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x426, 
    0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x7, 0x42, 0x42e, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 0x431, 0xb, 
    0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 
    0x438, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x43c, 0xa, 0x43, 
    0x5, 0x43, 0x43e, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 
    0x443, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x446, 0xb, 0x43, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x44c, 0xa, 0x44, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x5, 0x45, 0x456, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x45f, 0xa, 0x46, 
    0x3, 0x46, 0x5, 0x46, 0x462, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 
    0x466, 0xa, 0x46, 0x5, 0x46, 0x468, 0xa, 0x46, 0x3, 0x47, 0x5, 0x47, 
    0x46b, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 
    0x47e, 0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x481, 0xb, 0x4a, 0x5, 0x4a, 
    0x483, 0xa, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x486, 0xa, 0x4a, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x48e, 
    0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x491, 0xb, 0x4b, 0x5, 0x4b, 0x493, 
    0xa, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x496, 0xa, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 
    0x499, 0xa, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x49c, 0xa, 0x4b, 0x3, 0x4b, 
    0x5, 0x4b, 0x49f, 0xa, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x4a2, 0xa, 0x4b, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x7, 0x4c, 0x4a9, 
    0xa, 0x4c, 0xc, 0x4c, 0xe, 0x4c, 0x4ac, 0xb, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 
    0x4e, 0x4b6, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x4b9, 0xb, 0x4e, 0x3, 
    0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x4bd, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x53, 0x3, 0x53, 0x5, 0x53, 0x4c9, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x4d1, 0xa, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x4dd, 0xa, 0x53, 
    0x3, 0x53, 0x5, 0x53, 0x4e0, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x4e9, 0xa, 0x53, 
    0x3, 0x53, 0x5, 0x53, 0x4ec, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x4f3, 0xa, 0x53, 0x5, 0x53, 0x4f5, 
    0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4ff, 0xa, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x504, 0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x7, 0x55, 0x50a, 0xa, 0x55, 0xc, 0x55, 0xe, 0x55, 
    0x50d, 0xb, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x518, 0xa, 0x57, 
    0x3, 0x57, 0x5, 0x57, 0x51b, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 
    0x51f, 0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 
    0x525, 0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 
    0x52b, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5c, 0x5, 0x5c, 0x539, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x547, 0xa, 0x5e, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 
    0x61, 0x3, 0x61, 0x7, 0x61, 0x552, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 
    0x555, 0xb, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x63, 0x7, 0x63, 0x55e, 0xa, 0x63, 0xc, 0x63, 0xe, 0x63, 
    0x561, 0xb, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x5, 0x65, 0x570, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x576, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x57c, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x584, 0xa, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x58a, 0xa, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x7, 0x65, 0x596, 0xa, 0x65, 
    0xc, 0x65, 0xe, 0x65, 0x599, 0xb, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x5, 0x66, 0x59e, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 
    0x5a3, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x7, 0x67, 0x5aa, 0xa, 0x67, 0xc, 0x67, 0xe, 0x67, 0x5ad, 0xb, 0x67, 
    0x3, 0x67, 0x5, 0x67, 0x5b0, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x5, 0x68, 0x5b5, 0xa, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 
    0x5, 0x69, 0x5bb, 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
    0x3, 0x69, 0x5, 0x69, 0x5c2, 0xa, 0x69, 0x3, 0x6a, 0x5, 0x6a, 0x5c5, 
    0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 
    0x6a, 0x5cc, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x5d4, 0xa, 0x6a, 0x5, 0x6a, 0x5d6, 
    0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x5dc, 
    0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x5e2, 
    0xa, 0x6b, 0x5, 0x6b, 0x5e4, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 
    0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 
    0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x7, 0x71, 0x5f4, 
    0xa, 0x71, 0xc, 0x71, 0xe, 0x71, 0x5f7, 0xb, 0x71, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 
    0x76, 0x5, 0x76, 0x602, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x60c, 
    0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 
    0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x616, 0xa, 0x7a, 0x3, 0x7b, 
    0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x5, 0x7c, 0x626, 0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x629, 0xa, 0x7c, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x5, 0x7d, 0x632, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 
    0x82, 0x5, 0x82, 0x63e, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x641, 0xa, 
    0x82, 0x3, 0x82, 0x5, 0x82, 0x644, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 
    0x647, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x64a, 0xa, 0x82, 0x3, 0x82, 
    0x5, 0x82, 0x64d, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x650, 0xa, 0x82, 
    0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x654, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 
    0x657, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x65a, 0xa, 0x82, 0x3, 0x82, 
    0x5, 0x82, 0x65d, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x660, 0xa, 0x82, 
    0x3, 0x82, 0x5, 0x82, 0x663, 0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 
    0x667, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x66a, 0xa, 0x82, 0x3, 0x82, 
    0x5, 0x82, 0x66d, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x670, 0xa, 0x82, 
    0x3, 0x82, 0x5, 0x82, 0x673, 0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 
    0x677, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x67a, 0xa, 0x82, 0x3, 0x82, 
    0x5, 0x82, 0x67d, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x680, 0xa, 0x82, 
    0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x684, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 
    0x687, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x68a, 0xa, 0x82, 0x3, 0x82, 
    0x3, 0x82, 0x5, 0x82, 0x68e, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 0x691, 
    0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x695, 0xa, 0x82, 0x3, 0x82, 
    0x5, 0x82, 0x698, 0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 
    0x3, 0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x86, 0x3, 
    0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 
    0x8a, 0x3, 0x8b, 0x5, 0x8b, 0x6b3, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 
    0x3, 0x8c, 0x5, 0x8c, 0x6b8, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 
    0x5, 0x8d, 0x6bd, 0xa, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x5, 0x8e, 
    0x6c2, 0xa, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 
    0x3, 0x90, 0x3, 0x90, 0x3, 0x55f, 0xa, 0x5a, 0x5c, 0x60, 0x62, 0x80, 
    0x82, 0x84, 0xc8, 0x91, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 
    0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
    0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 
    0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 
    0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 
    0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 
    0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 
    0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 
    0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 
    0x118, 0x11a, 0x11c, 0x11e, 0x2, 0xb, 0x3, 0x2, 0x58, 0x5e, 0x3, 0x2, 
    0x2f, 0x30, 0x3, 0x2, 0x4e, 0x50, 0x5, 0x2, 0x7, 0x7, 0x9, 0x9, 0x14, 
    0x14, 0x3, 0x2, 0x62, 0x68, 0x3, 0x2, 0x6c, 0x6d, 0x8, 0x2, 0x20, 0x21, 
    0x24, 0x2d, 0x2f, 0x34, 0x36, 0x40, 0x42, 0x43, 0x45, 0x68, 0x4, 0x2, 
    0x12, 0x12, 0x14, 0x14, 0x3, 0x2, 0x60, 0x61, 0x2, 0x75e, 0x2, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x123, 0x3, 0x2, 0x2, 0x2, 0x6, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x8, 0x153, 0x3, 0x2, 0x2, 0x2, 0xa, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x15e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x172, 0x3, 0x2, 0x2, 0x2, 0x12, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x198, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d2, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1f7, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x208, 0x3, 0x2, 0x2, 0x2, 0x30, 0x211, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x34, 0x226, 0x3, 0x2, 0x2, 0x2, 0x36, 0x228, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x22e, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x237, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x24c, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x260, 0x3, 0x2, 0x2, 0x2, 0x42, 0x267, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x46, 0x298, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x2a6, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x50, 0x2c1, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x54, 0x2cd, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x58, 0x2f0, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x306, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x31b, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x331, 0x3, 0x2, 0x2, 0x2, 0x60, 0x345, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x364, 0x3, 0x2, 0x2, 0x2, 0x64, 0x375, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x37f, 0x3, 0x2, 0x2, 0x2, 0x68, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x3aa, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x3b2, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x72, 0x3be, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x76, 0x3c9, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x3d0, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x409, 0x3, 0x2, 0x2, 0x2, 0x82, 0x425, 0x3, 0x2, 0x2, 0x2, 0x84, 0x43d, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x44d, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x467, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x46a, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x470, 0x3, 0x2, 0x2, 0x2, 0x90, 0x473, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x478, 0x3, 0x2, 0x2, 0x2, 0x94, 0x487, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x98, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x4b0, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x4be, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x4c3, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x503, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0x505, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x50e, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0x51a, 0x3, 0x2, 0x2, 0x2, 0xae, 0x52a, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0x52c, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x52e, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0x531, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x534, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x53a, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0x546, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x548, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0x54a, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x54d, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0x558, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x55f, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0x562, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x56f, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0x59d, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x5af, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0x5b4, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5db, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x5e5, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0xda, 0x5e9, 0x3, 0x2, 
    0x2, 0x2, 0xdc, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0xde, 0x5ed, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x5f8, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0x5fe, 0x3, 0x2, 0x2, 0x2, 0xea, 0x601, 0x3, 0x2, 0x2, 0x2, 0xec, 0x605, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0x607, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x60b, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0x615, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x617, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0x628, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x631, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0x633, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x635, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0x637, 0x3, 0x2, 0x2, 0x2, 0x100, 0x639, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x697, 0x3, 0x2, 0x2, 0x2, 0x104, 0x699, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x69c, 0x3, 0x2, 0x2, 0x2, 0x108, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x6a2, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x6a5, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x6a8, 0x3, 0x2, 0x2, 0x2, 0x110, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x6ae, 0x3, 0x2, 0x2, 0x2, 0x114, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x6b7, 0x3, 0x2, 0x2, 0x2, 0x118, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x6c1, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x6c5, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x6c7, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x5, 0x6, 0x4, 0x2, 0x121, 
    0x122, 0x7, 0x2, 0x2, 0x3, 0x122, 0x3, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 
    0x7, 0x72, 0x2, 0x2, 0x124, 0x5, 0x3, 0x2, 0x2, 0x2, 0x125, 0x128, 0x5, 
    0x3e, 0x20, 0x2, 0x126, 0x128, 0x5, 0x4, 0x3, 0x2, 0x127, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x133, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x134, 0x5, 0xc, 0x7, 0x2, 0x12d, 0x134, 0x5, 
    0x12, 0xa, 0x2, 0x12e, 0x134, 0x5, 0x2a, 0x16, 0x2, 0x12f, 0x134, 0x5, 
    0x20, 0x11, 0x2, 0x130, 0x134, 0x5, 0x16, 0xc, 0x2, 0x131, 0x134, 0x5, 
    0x30, 0x19, 0x2, 0x132, 0x134, 0x5, 0x4, 0x3, 0x2, 0x133, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x133, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x133, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x141, 0x3, 0x2, 0x2, 0x2, 0x135, 0x13d, 0x7, 
    0x8, 0x2, 0x2, 0x136, 0x13e, 0x5, 0xc, 0x7, 0x2, 0x137, 0x13e, 0x5, 
    0x12, 0xa, 0x2, 0x138, 0x13e, 0x5, 0x2a, 0x16, 0x2, 0x139, 0x13e, 0x5, 
    0x20, 0x11, 0x2, 0x13a, 0x13e, 0x5, 0x16, 0xc, 0x2, 0x13b, 0x13e, 0x5, 
    0x30, 0x19, 0x2, 0x13c, 0x13e, 0x5, 0x4, 0x3, 0x2, 0x13d, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x138, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x14b, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x144, 0x147, 0x7, 
    0x8, 0x2, 0x2, 0x145, 0x148, 0x5, 0x8, 0x5, 0x2, 0x146, 0x148, 0x5, 
    0x4, 0x3, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x149, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14f, 0x3, 
    0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x150, 0x7, 
    0x8, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x7, 0x3, 0x2, 0x2, 0x2, 0x151, 0x154, 0x5, 0x4e, 
    0x28, 0x2, 0x152, 0x154, 0x5, 0x42, 0x22, 0x2, 0x153, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x157, 0x5, 0xc, 0x7, 0x2, 0x156, 0x158, 0x7, 0x8, 0x2, 
    0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x2, 0x2, 
    0x3, 0x15a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x3c, 0x1f, 
    0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x161, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x162, 0x7, 0x21, 0x2, 0x2, 0x162, 0x163, 0x7, 0x20, 0x2, 
    0x2, 0x163, 0x164, 0x5, 0xea, 0x76, 0x2, 0x164, 0x165, 0x7, 0xb, 0x2, 
    0x2, 0x165, 0x16a, 0x5, 0xe, 0x8, 0x2, 0x166, 0x167, 0x7, 0xf, 0x2, 
    0x2, 0x167, 0x169, 0x5, 0xe, 0x8, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x7, 0xc, 0x2, 
    0x2, 0x16e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x5, 0xe2, 0x72, 
    0x2, 0x170, 0x171, 0x5, 0xf4, 0x7b, 0x2, 0x171, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x174, 0x5, 0x12, 0xa, 0x2, 0x173, 0x175, 0x7, 0x8, 0x2, 
    0x2, 0x174, 0x173, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x7, 0x2, 0x2, 
    0x3, 0x177, 0x11, 0x3, 0x2, 0x2, 0x2, 0x178, 0x17a, 0x5, 0x3c, 0x1f, 
    0x2, 0x179, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17d, 0x3, 0x2, 0x2, 
    0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x17f, 0x7, 0x21, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x24, 0x2, 
    0x2, 0x180, 0x181, 0x5, 0xea, 0x76, 0x2, 0x181, 0x182, 0x7, 0xb, 0x2, 
    0x2, 0x182, 0x183, 0x5, 0xe2, 0x72, 0x2, 0x183, 0x18a, 0x5, 0xf4, 0x7b, 
    0x2, 0x184, 0x185, 0x7, 0xf, 0x2, 0x2, 0x185, 0x186, 0x5, 0xe2, 0x72, 
    0x2, 0x186, 0x187, 0x5, 0xf4, 0x7b, 0x2, 0x187, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x188, 0x184, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x18e, 0x7, 0xc, 0x2, 0x2, 0x18e, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x18f, 0x191, 0x5, 0x16, 0xc, 0x2, 0x190, 0x192, 0x7, 0x8, 0x2, 0x2, 
    0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x7, 0x2, 0x2, 0x3, 
    0x194, 0x15, 0x3, 0x2, 0x2, 0x2, 0x195, 0x197, 0x5, 0x3c, 0x1f, 0x2, 
    0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x19c, 0x7, 0x21, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x28, 0x2, 0x2, 
    0x19d, 0x19e, 0x5, 0xea, 0x76, 0x2, 0x19e, 0x19f, 0x7, 0xb, 0x2, 0x2, 
    0x19f, 0x1a0, 0x5, 0xe2, 0x72, 0x2, 0x1a0, 0x1a7, 0x5, 0xf4, 0x7b, 0x2, 
    0x1a1, 0x1a2, 0x7, 0xf, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 0xe2, 0x72, 0x2, 
    0x1a3, 0x1a4, 0x5, 0xf4, 0x7b, 0x2, 0x1a4, 0x1a6, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1a8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1ab, 0x7, 0xc, 0x2, 0x2, 0x1ab, 0x1ae, 0x5, 0xca, 0x66, 0x2, 
    0x1ac, 0x1ad, 0x7, 0x39, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0xac, 0x57, 0x2, 
    0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0x1a, 0xe, 0x2, 
    0x1b1, 0x1b3, 0x7, 0x8, 0x2, 0x2, 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b5, 0x7, 0x2, 0x2, 0x3, 0x1b5, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
    0x1b7, 0x7, 0x26, 0x2, 0x2, 0x1b7, 0x1b9, 0x5, 0x1c, 0xf, 0x2, 0x1b8, 
    0x1ba, 0x5, 0x94, 0x4b, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x5, 0x94, 0x4b, 0x2, 0x1bc, 0x1bd, 0x7, 0x32, 0x2, 0x2, 0x1bd, 
    0x1be, 0x7, 0x38, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0xec, 0x77, 0x2, 0x1bf, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x5, 0x94, 0x4b, 0x2, 0x1c1, 
    0x1c2, 0x7, 0x34, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x42, 0x2, 0x2, 0x1c3, 
    0x1c4, 0x7, 0x32, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x38, 0x2, 0x2, 0x1c5, 
    0x1c7, 0x5, 0xec, 0x77, 0x2, 0x1c6, 0x1c8, 0x5, 0xa8, 0x55, 0x2, 0x1c7, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x45, 0x2, 0x2, 0x1ca, 
    0x1cb, 0x5, 0xc6, 0x64, 0x2, 0x1cb, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cc, 
    0x1ce, 0x5, 0x94, 0x4b, 0x2, 0x1cd, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
    0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
    0x1d1, 0x5, 0xa6, 0x54, 0x2, 0x1d0, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
    0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
    0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d6, 
    0x5, 0xdc, 0x6f, 0x2, 0x1d3, 0x1d4, 0x5, 0xfa, 0x7e, 0x2, 0x1d4, 0x1d5, 
    0x5, 0xde, 0x70, 0x2, 0x1d5, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d3, 
    0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1da, 
    0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x45, 0x2, 0x2, 0x1d9, 0x1db, 
    0x5, 0xc6, 0x64, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 
    0x3, 0x2, 0x2, 0x2, 0x1db, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 
    0x5, 0xb6, 0x5c, 0x2, 0x1dd, 0x1de, 0x5, 0xb8, 0x5d, 0x2, 0x1de, 0x1e0, 
    0x3, 0x2, 0x2, 0x2, 0x1df, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 
    0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e3, 0x5, 
    0x20, 0x11, 0x2, 0x1e2, 0x1e4, 0x7, 0x8, 0x2, 0x2, 0x1e3, 0x1e2, 0x3, 
    0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 
    0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x2, 0x2, 0x3, 0x1e6, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x21, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x22, 
    0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x22, 0x12, 0x2, 0x1ea, 0x1eb, 0x7, 0xd, 
    0x2, 0x2, 0x1eb, 0x1ec, 0x5, 0x24, 0x13, 0x2, 0x1ec, 0x1ed, 0x7, 0xe, 
    0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0x36, 0x2, 0x2, 0x1ee, 0x1ef, 0x5, 0xf4, 
    0x7b, 0x2, 0x1ef, 0x1f0, 0x5, 0x26, 0x14, 0x2, 0x1f0, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0xfe, 0x80, 0x2, 0x1f2, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0xfe, 0x80, 0x2, 0x1f4, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f6, 0x7, 0x73, 0x2, 0x2, 0x1f6, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x1f7, 0x1f9, 0x5, 0x2a, 0x16, 0x2, 0x1f8, 0x1fa, 0x7, 0x8, 
    0x2, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x2, 
    0x2, 0x3, 0x1fc, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x21, 
    0x2, 0x2, 0x1fe, 0x1ff, 0x7, 0x23, 0x2, 0x2, 0x1ff, 0x200, 0x5, 0x2c, 
    0x17, 0x2, 0x200, 0x204, 0x7, 0x41, 0x2, 0x2, 0x201, 0x202, 0x7, 0x4d, 
    0x2, 0x2, 0x202, 0x205, 0x5, 0x102, 0x82, 0x2, 0x203, 0x205, 0x5, 0x11e, 
    0x90, 0x2, 0x204, 0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 0x203, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x5, 0xfe, 
    0x80, 0x2, 0x207, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20a, 0x5, 0x30, 
    0x19, 0x2, 0x209, 0x20b, 0x7, 0x8, 0x2, 0x2, 0x20a, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x20d, 0x7, 0x2, 0x2, 0x3, 0x20d, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x20e, 0x210, 0x5, 0x3c, 0x1f, 0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 
    0x2, 0x210, 0x213, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x7, 0x21, 0x2, 
    0x2, 0x215, 0x216, 0x7, 0x69, 0x2, 0x2, 0x216, 0x217, 0x5, 0x32, 0x1a, 
    0x2, 0x217, 0x218, 0x7, 0x26, 0x2, 0x2, 0x218, 0x219, 0x5, 0x52, 0x2a, 
    0x2, 0x219, 0x21a, 0x5, 0x92, 0x4a, 0x2, 0x21a, 0x21d, 0x7, 0x6a, 0x2, 
    0x2, 0x21b, 0x21c, 0x7, 0x2b, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0xd2, 0x6a, 
    0x2, 0x21d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x4d, 0x2, 
    0x2, 0x220, 0x221, 0x5, 0x34, 0x1b, 0x2, 0x221, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x223, 0x5, 0xfe, 0x80, 0x2, 0x223, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x224, 0x227, 0x5, 0x38, 0x1d, 0x2, 0x225, 0x227, 0x5, 0x3a, 0x1e, 
    0x2, 0x226, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x225, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x35, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x9, 0x2, 0x2, 0x2, 
    0x229, 0x37, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x36, 0x1c, 0x2, 
    0x22b, 0x22c, 0x7, 0xa, 0x2, 0x2, 0x22c, 0x22d, 0x5, 0x36, 0x1c, 0x2, 
    0x22d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x234, 0x5, 0x36, 0x1c, 0x2, 
    0x22f, 0x230, 0x5, 0xfc, 0x7f, 0x2, 0x230, 0x231, 0x5, 0x36, 0x1c, 0x2, 
    0x231, 0x233, 0x3, 0x2, 0x2, 0x2, 0x232, 0x22f, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x236, 0x3, 0x2, 0x2, 0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 
    0x234, 0x235, 0x3, 0x2, 0x2, 0x2, 0x235, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x236, 
    0x234, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x7, 0x1d, 0x2, 0x2, 0x238, 
    0x24a, 0x5, 0xf0, 0x79, 0x2, 0x239, 0x23c, 0x7, 0xb, 0x2, 0x2, 0x23a, 
    0x23d, 0x5, 0x40, 0x21, 0x2, 0x23b, 0x23d, 0x5, 0x3c, 0x1f, 0x2, 0x23c, 
    0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x241, 0x7, 0xf, 0x2, 0x2, 0x23f, 
    0x242, 0x5, 0x40, 0x21, 0x2, 0x240, 0x242, 0x5, 0x3c, 0x1f, 0x2, 0x241, 
    0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 
    0x244, 0x3, 0x2, 0x2, 0x2, 0x243, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x244, 
    0x247, 0x3, 0x2, 0x2, 0x2, 0x245, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x248, 0x3, 0x2, 0x2, 0x2, 0x247, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0xc, 0x2, 0x2, 0x249, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x24a, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 
    0x7, 0x1d, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x25, 0x2, 0x2, 0x24e, 0x24f, 
    0x7, 0x7, 0x2, 0x2, 0x24f, 0x25b, 0x5, 0xf0, 0x79, 0x2, 0x250, 0x251, 
    0x7, 0xb, 0x2, 0x2, 0x251, 0x256, 0x5, 0x40, 0x21, 0x2, 0x252, 0x253, 
    0x7, 0xf, 0x2, 0x2, 0x253, 0x255, 0x5, 0x40, 0x21, 0x2, 0x254, 0x252, 
    0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 0x3, 0x2, 0x2, 0x2, 0x256, 0x254, 
    0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 0x259, 
    0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 
    0x7, 0xc, 0x2, 0x2, 0x25a, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0xe0, 0x71, 0x2, 0x25e, 0x25f, 0x7, 
    0x10, 0x2, 0x2, 0x25f, 0x261, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25d, 0x3, 
    0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x3, 
    0x2, 0x2, 0x2, 0x262, 0x263, 0x5, 0xe6, 0x74, 0x2, 0x263, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x264, 0x266, 0x5, 0x3c, 0x1f, 0x2, 0x265, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x266, 0x269, 0x3, 0x2, 0x2, 0x2, 0x267, 0x265, 0x3, 
    0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x269, 0x267, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x7, 
    0x27, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x49, 0x2, 0x2, 0x26c, 0x26d, 0x7, 
    0xb, 0x2, 0x2, 0x26d, 0x272, 0x5, 0x46, 0x24, 0x2, 0x26e, 0x26f, 0x7, 
    0xf, 0x2, 0x2, 0x26f, 0x271, 0x5, 0x46, 0x24, 0x2, 0x270, 0x26e, 0x3, 
    0x2, 0x2, 0x2, 0x271, 0x274, 0x3, 0x2, 0x2, 0x2, 0x272, 0x270, 0x3, 
    0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 0x2, 0x2, 0x273, 0x275, 0x3, 
    0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x7, 
    0xc, 0x2, 0x2, 0x276, 0x279, 0x7, 0x4a, 0x2, 0x2, 0x277, 0x27a, 0x5, 
    0x4e, 0x28, 0x2, 0x278, 0x27a, 0x5, 0x4, 0x3, 0x2, 0x279, 0x277, 0x3, 
    0x2, 0x2, 0x2, 0x279, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x27b, 0x27e, 0x7, 0x8, 0x2, 0x2, 0x27c, 0x27f, 0x5, 
    0x4e, 0x28, 0x2, 0x27d, 0x27f, 0x5, 0x4, 0x3, 0x2, 0x27e, 0x27c, 0x3, 
    0x2, 0x2, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x281, 0x3, 
    0x2, 0x2, 0x2, 0x280, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 
    0x2, 0x2, 0x2, 0x283, 0x286, 0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x285, 0x287, 0x7, 0x8, 0x2, 0x2, 0x286, 0x285, 0x3, 
    0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 
    0x2, 0x2, 0x2, 0x288, 0x289, 0x7, 0x4b, 0x2, 0x2, 0x289, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x28a, 0x28c, 0x5, 0x42, 0x22, 0x2, 0x28b, 0x28d, 0x7, 
    0x8, 0x2, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 
    0x2, 0x2, 0x2, 0x28d, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x7, 
    0x2, 0x2, 0x3, 0x28f, 0x45, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x5, 0xbc, 
    0x5f, 0x2, 0x291, 0x292, 0x7, 0x3f, 0x2, 0x2, 0x292, 0x293, 0x5, 0xda, 
    0x6e, 0x2, 0x293, 0x299, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x5, 0x48, 
    0x25, 0x2, 0x295, 0x296, 0x7, 0x3f, 0x2, 0x2, 0x296, 0x297, 0x5, 0xda, 
    0x6e, 0x2, 0x297, 0x299, 0x3, 0x2, 0x2, 0x2, 0x298, 0x290, 0x3, 0x2, 
    0x2, 0x2, 0x298, 0x294, 0x3, 0x2, 0x2, 0x2, 0x299, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x29a, 0x29f, 0x5, 0x4a, 0x26, 0x2, 0x29b, 0x29c, 0x7, 0x42, 0x2, 
    0x2, 0x29c, 0x29e, 0x5, 0x4a, 0x26, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 
    0x2, 0x29e, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x29d, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x2a1, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x5, 0xc6, 0x64, 0x2, 
    0x2a3, 0x2a4, 0x5, 0xfa, 0x7e, 0x2, 0x2a4, 0x2a5, 0x5, 0x11e, 0x90, 
    0x2, 0x2a5, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a8, 0x5, 0x4e, 0x28, 
    0x2, 0x2a7, 0x2a9, 0x7, 0x8, 0x2, 0x2, 0x2a8, 0x2a7, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2ab, 0x7, 0x2, 0x2, 0x3, 0x2ab, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x2ac, 0x2ae, 0x5, 0x3c, 0x1f, 0x2, 0x2ad, 0x2ac, 0x3, 0x2, 0x2, 0x2, 
    0x2ae, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b2, 0x3, 0x2, 0x2, 0x2, 
    0x2b1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x26, 0x2, 0x2, 
    0x2b3, 0x2b5, 0x5, 0x50, 0x29, 0x2, 0x2b4, 0x2b6, 0x5, 0x94, 0x4b, 0x2, 
    0x2b5, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 0x2, 0x2, 
    0x2b6, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b9, 0x5, 0xae, 0x58, 0x2, 
    0x2b8, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x3, 0x2, 0x2, 0x2, 
    0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x5, 0xa4, 0x53, 0x2, 
    0x2bb, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c2, 0x5, 0x52, 0x2a, 0x2, 
    0x2bd, 0x2c2, 0x5, 0x54, 0x2b, 0x2, 0x2be, 0x2c2, 0x5, 0x58, 0x2d, 0x2, 
    0x2bf, 0x2c2, 0x5, 0x78, 0x3d, 0x2, 0x2c0, 0x2c2, 0x5, 0x8a, 0x46, 0x2, 
    0x2c1, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
    0x2c1, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bf, 0x3, 0x2, 0x2, 0x2, 
    0x2c1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
    0x2c5, 0x5, 0xea, 0x76, 0x2, 0x2c4, 0x2c6, 0x5, 0x74, 0x3b, 0x2, 0x2c5, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c6, 
    0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c9, 0x5, 0x90, 0x49, 0x2, 0x2c8, 
    0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 
    0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x74, 0x3b, 0x2, 0x2cb, 
    0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d7, 0x5, 0x56, 0x2c, 0x2, 0x2ce, 
    0x2cf, 0x5, 0xf6, 0x7c, 0x2, 0x2cf, 0x2d1, 0x5, 0x56, 0x2c, 0x2, 0x2d0, 
    0x2d2, 0x7, 0x57, 0x2, 0x2, 0x2d1, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
    0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
    0x2d4, 0x7, 0x57, 0x2, 0x2, 0x2d4, 0x2d5, 0x5, 0xf6, 0x7c, 0x2, 0x2d5, 
    0x2d6, 0x5, 0x56, 0x2c, 0x2, 0x2d6, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d7, 
    0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d8, 
    0x2db, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x45, 0x2, 0x2, 0x2da, 
    0x2dc, 0x5, 0xc6, 0x64, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 
    0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
    0x2de, 0x5, 0xb6, 0x5c, 0x2, 0x2de, 0x2df, 0x5, 0xb8, 0x5d, 0x2, 0x2df, 
    0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e0, 
    0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x55, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e4, 
    0x5, 0xea, 0x76, 0x2, 0x2e3, 0x2e5, 0x5, 0x74, 0x3b, 0x2, 0x2e4, 0x2e3, 
    0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e7, 
    0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e8, 0x5, 0x90, 0x49, 0x2, 0x2e7, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2ec, 
    0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0x5, 0xfa, 0x7e, 0x2, 0x2ea, 0x2eb, 
    0x5, 0xde, 0x70, 0x2, 0x2eb, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2e9, 
    0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x2ee, 0x2f1, 0x5, 0x5a, 0x2e, 0x2, 0x2ef, 0x2f1, 0x5, 
    0x5e, 0x30, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ef, 0x3, 
    0x2, 0x2, 0x2, 0x2f1, 0x59, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 0x8, 0x2e, 
    0x1, 0x2, 0x2f3, 0x2f4, 0x7, 0xb, 0x2, 0x2, 0x2f4, 0x2f5, 0x5, 0x5a, 
    0x2e, 0x2, 0x2f5, 0x2f7, 0x7, 0xc, 0x2, 0x2, 0x2f6, 0x2f8, 0x5, 0xb4, 
    0x5b, 0x2, 0x2f7, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x3, 0x2, 
    0x2, 0x2, 0x2f8, 0x307, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x4d, 
    0x2, 0x2, 0x2fa, 0x2fb, 0x7, 0xb, 0x2, 0x2, 0x2fb, 0x2fc, 0x5, 0x5c, 
    0x2f, 0x2, 0x2fc, 0x2fe, 0x7, 0xc, 0x2, 0x2, 0x2fd, 0x2ff, 0x5, 0xb4, 
    0x5b, 0x2, 0x2fe, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 
    0x2, 0x2, 0x2ff, 0x307, 0x3, 0x2, 0x2, 0x2, 0x300, 0x307, 0x5, 0x5c, 
    0x2f, 0x2, 0x301, 0x302, 0x7, 0x4d, 0x2, 0x2, 0x302, 0x304, 0x5, 0x64, 
    0x33, 0x2, 0x303, 0x305, 0x5, 0xb4, 0x5b, 0x2, 0x304, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x304, 0x305, 0x3, 0x2, 0x2, 0x2, 0x305, 0x307, 0x3, 0x2, 
    0x2, 0x2, 0x306, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x306, 0x2f9, 0x3, 0x2, 
    0x2, 0x2, 0x306, 0x300, 0x3, 0x2, 0x2, 0x2, 0x306, 0x301, 0x3, 0x2, 
    0x2, 0x2, 0x307, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0xc, 0x5, 
    0x2, 0x2, 0x309, 0x30a, 0x7, 0x1e, 0x2, 0x2, 0x30a, 0x30c, 0x5, 0x5a, 
    0x2e, 0x6, 0x30b, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30f, 0x3, 0x2, 
    0x2, 0x2, 0x30d, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 
    0x2, 0x2, 0x30e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x311, 0x8, 0x2f, 0x1, 0x2, 0x311, 0x312, 0x7, 0xb, 0x2, 
    0x2, 0x312, 0x313, 0x5, 0x5c, 0x2f, 0x2, 0x313, 0x315, 0x7, 0xc, 0x2, 
    0x2, 0x314, 0x316, 0x5, 0xb4, 0x5b, 0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x316, 0x3, 0x2, 0x2, 0x2, 0x316, 0x31c, 0x3, 0x2, 0x2, 
    0x2, 0x317, 0x319, 0x5, 0x64, 0x33, 0x2, 0x318, 0x31a, 0x5, 0xb4, 0x5b, 
    0x2, 0x319, 0x318, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x310, 0x3, 0x2, 0x2, 
    0x2, 0x31b, 0x317, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x322, 0x3, 0x2, 0x2, 
    0x2, 0x31d, 0x31e, 0xc, 0x4, 0x2, 0x2, 0x31e, 0x31f, 0x7, 0x1e, 0x2, 
    0x2, 0x31f, 0x321, 0x5, 0x5c, 0x2f, 0x5, 0x320, 0x31d, 0x3, 0x2, 0x2, 
    0x2, 0x321, 0x324, 0x3, 0x2, 0x2, 0x2, 0x322, 0x320, 0x3, 0x2, 0x2, 
    0x2, 0x322, 0x323, 0x3, 0x2, 0x2, 0x2, 0x323, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x325, 0x327, 0x7, 0x4d, 0x2, 0x2, 
    0x326, 0x325, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x3, 0x2, 0x2, 0x2, 
    0x327, 0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0xb, 0x2, 0x2, 
    0x329, 0x32a, 0x5, 0x5e, 0x30, 0x2, 0x32a, 0x32c, 0x7, 0xc, 0x2, 0x2, 
    0x32b, 0x32d, 0x5, 0xb4, 0x5b, 0x2, 0x32c, 0x32b, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x332, 0x3, 0x2, 0x2, 0x2, 
    0x32e, 0x332, 0x5, 0x6a, 0x36, 0x2, 0x32f, 0x332, 0x5, 0x60, 0x31, 0x2, 
    0x330, 0x332, 0x5, 0x62, 0x32, 0x2, 0x331, 0x326, 0x3, 0x2, 0x2, 0x2, 
    0x331, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x331, 0x32f, 0x3, 0x2, 0x2, 0x2, 
    0x331, 0x330, 0x3, 0x2, 0x2, 0x2, 0x332, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x335, 0x8, 0x31, 0x1, 0x2, 0x334, 0x336, 0x7, 0x4d, 0x2, 0x2, 0x335, 
    0x334, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 0x3, 0x2, 0x2, 0x2, 0x336, 
    0x337, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 0x7, 0xb, 0x2, 0x2, 0x338, 
    0x339, 0x5, 0x60, 0x31, 0x2, 0x339, 0x33b, 0x7, 0xc, 0x2, 0x2, 0x33a, 
    0x33c, 0x5, 0xb4, 0x5b, 0x2, 0x33b, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33b, 
    0x33c, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x346, 0x3, 0x2, 0x2, 0x2, 0x33d, 
    0x33e, 0x5, 0x6a, 0x36, 0x2, 0x33e, 0x33f, 0x7, 0x1e, 0x2, 0x2, 0x33f, 
    0x340, 0x5, 0x5a, 0x2e, 0x2, 0x340, 0x346, 0x3, 0x2, 0x2, 0x2, 0x341, 
    0x342, 0x5, 0x5a, 0x2e, 0x2, 0x342, 0x343, 0x7, 0x1e, 0x2, 0x2, 0x343, 
    0x344, 0x5, 0x60, 0x31, 0x3, 0x344, 0x346, 0x3, 0x2, 0x2, 0x2, 0x345, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x345, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x345, 
    0x341, 0x3, 0x2, 0x2, 0x2, 0x346, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x347, 
    0x348, 0xc, 0x5, 0x2, 0x2, 0x348, 0x349, 0x7, 0x1e, 0x2, 0x2, 0x349, 
    0x34e, 0x5, 0x60, 0x31, 0x6, 0x34a, 0x34b, 0xc, 0x4, 0x2, 0x2, 0x34b, 
    0x34c, 0x7, 0x1e, 0x2, 0x2, 0x34c, 0x34e, 0x5, 0x6a, 0x36, 0x2, 0x34d, 
    0x347, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34e, 
    0x351, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34f, 
    0x350, 0x3, 0x2, 0x2, 0x2, 0x350, 0x61, 0x3, 0x2, 0x2, 0x2, 0x351, 0x34f, 
    0x3, 0x2, 0x2, 0x2, 0x352, 0x354, 0x8, 0x32, 0x1, 0x2, 0x353, 0x355, 
    0x7, 0x4d, 0x2, 0x2, 0x354, 0x353, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 
    0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 
    0x7, 0xb, 0x2, 0x2, 0x357, 0x358, 0x5, 0x62, 0x32, 0x2, 0x358, 0x35a, 
    0x7, 0xc, 0x2, 0x2, 0x359, 0x35b, 0x5, 0xb4, 0x5b, 0x2, 0x35a, 0x359, 
    0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x5a, 0x2e, 0x2, 0x35d, 0x35e, 
    0x7, 0x1e, 0x2, 0x2, 0x35e, 0x35f, 0x5, 0x6a, 0x36, 0x2, 0x35f, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x5, 0x6a, 0x36, 0x2, 0x361, 0x362, 
    0x7, 0x1e, 0x2, 0x2, 0x362, 0x363, 0x5, 0x62, 0x32, 0x4, 0x363, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x352, 0x3, 0x2, 0x2, 0x2, 0x364, 0x35c, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x360, 0x3, 0x2, 0x2, 0x2, 0x365, 0x36e, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0xc, 0x5, 0x2, 0x2, 0x367, 0x368, 
    0x7, 0x1e, 0x2, 0x2, 0x368, 0x36d, 0x5, 0x62, 0x32, 0x6, 0x369, 0x36a, 
    0xc, 0x3, 0x2, 0x2, 0x36a, 0x36b, 0x7, 0x1e, 0x2, 0x2, 0x36b, 0x36d, 
    0x5, 0x5a, 0x2e, 0x2, 0x36c, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x369, 
    0x3, 0x2, 0x2, 0x2, 0x36d, 0x370, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 
    0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 0x376, 0x5, 
    0x66, 0x34, 0x2, 0x372, 0x376, 0x5, 0x6e, 0x38, 0x2, 0x373, 0x376, 0x5, 
    0x70, 0x39, 0x2, 0x374, 0x376, 0x5, 0x68, 0x35, 0x2, 0x375, 0x371, 0x3, 
    0x2, 0x2, 0x2, 0x375, 0x372, 0x3, 0x2, 0x2, 0x2, 0x375, 0x373, 0x3, 
    0x2, 0x2, 0x2, 0x375, 0x374, 0x3, 0x2, 0x2, 0x2, 0x376, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0x378, 0x5, 0x70, 0x39, 0x2, 0x378, 0x379, 0x7, 0x43, 
    0x2, 0x2, 0x379, 0x37a, 0x5, 0x70, 0x39, 0x2, 0x37a, 0x380, 0x3, 0x2, 
    0x2, 0x2, 0x37b, 0x37c, 0x5, 0x70, 0x39, 0x2, 0x37c, 0x37d, 0x7, 0x42, 
    0x2, 0x2, 0x37d, 0x37e, 0x5, 0x70, 0x39, 0x2, 0x37e, 0x380, 0x3, 0x2, 
    0x2, 0x2, 0x37f, 0x377, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x37b, 0x3, 0x2, 
    0x2, 0x2, 0x380, 0x67, 0x3, 0x2, 0x2, 0x2, 0x381, 0x382, 0x7, 0xb, 0x2, 
    0x2, 0x382, 0x383, 0x5, 0x68, 0x35, 0x2, 0x383, 0x384, 0x7, 0xc, 0x2, 
    0x2, 0x384, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x5, 0x70, 0x39, 
    0x2, 0x386, 0x387, 0x7, 0x43, 0x2, 0x2, 0x387, 0x388, 0x7, 0x47, 0x2, 
    0x2, 0x388, 0x389, 0x5, 0x72, 0x3a, 0x2, 0x389, 0x3a8, 0x3, 0x2, 0x2, 
    0x2, 0x38a, 0x38b, 0x7, 0x47, 0x2, 0x2, 0x38b, 0x38c, 0x5, 0x72, 0x3a, 
    0x2, 0x38c, 0x38d, 0x7, 0x43, 0x2, 0x2, 0x38d, 0x38e, 0x5, 0x70, 0x39, 
    0x2, 0x38e, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x5, 0x70, 0x39, 
    0x2, 0x390, 0x391, 0x7, 0x43, 0x2, 0x2, 0x391, 0x392, 0x5, 0x6c, 0x37, 
    0x2, 0x392, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x5, 0x6c, 0x37, 
    0x2, 0x394, 0x395, 0x7, 0x43, 0x2, 0x2, 0x395, 0x396, 0x5, 0x70, 0x39, 
    0x2, 0x396, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 0x5, 0x6c, 0x37, 
    0x2, 0x398, 0x399, 0x7, 0x43, 0x2, 0x2, 0x399, 0x39a, 0x5, 0x6c, 0x37, 
    0x2, 0x39a, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x5, 0x70, 0x39, 
    0x2, 0x39c, 0x39d, 0x7, 0x42, 0x2, 0x2, 0x39d, 0x39e, 0x5, 0x6c, 0x37, 
    0x2, 0x39e, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 0x5, 0x6c, 0x37, 
    0x2, 0x3a0, 0x3a1, 0x7, 0x42, 0x2, 0x2, 0x3a1, 0x3a2, 0x5, 0x70, 0x39, 
    0x2, 0x3a2, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0x5, 0x6c, 0x37, 
    0x2, 0x3a4, 0x3a5, 0x7, 0x42, 0x2, 0x2, 0x3a5, 0x3a6, 0x5, 0x6c, 0x37, 
    0x2, 0x3a6, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x381, 0x3, 0x2, 0x2, 
    0x2, 0x3a7, 0x385, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x38a, 0x3, 0x2, 0x2, 
    0x2, 0x3a7, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x393, 0x3, 0x2, 0x2, 
    0x2, 0x3a7, 0x397, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x39b, 0x3, 0x2, 0x2, 
    0x2, 0x3a7, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a3, 0x3, 0x2, 0x2, 
    0x2, 0x3a8, 0x69, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ab, 0x7, 0x4d, 0x2, 
    0x2, 0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 0x2, 
    0x2, 0x3ab, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x6c, 0x37, 
    0x2, 0x3ad, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x7, 0x47, 0x2, 
    0x2, 0x3af, 0x3b0, 0x5, 0x72, 0x3a, 0x2, 0x3b0, 0x3b1, 0x5, 0xb2, 0x5a, 
    0x2, 0x3b1, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 0x5, 0x70, 0x39, 
    0x2, 0x3b3, 0x3b4, 0x7, 0x17, 0x2, 0x2, 0x3b4, 0x3b5, 0x5, 0xf2, 0x7a, 
    0x2, 0x3b5, 0x3b6, 0x7, 0x19, 0x2, 0x2, 0x3b6, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x3b7, 0x3b8, 0x5, 0xee, 0x78, 0x2, 0x3b8, 0x3b9, 0x7, 0x10, 0x2, 
    0x2, 0x3b9, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3b7, 0x3, 0x2, 0x2, 
    0x2, 0x3ba, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bc, 0x3, 0x2, 0x2, 
    0x2, 0x3bc, 0x3bd, 0x5, 0x72, 0x3a, 0x2, 0x3bd, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x3be, 0x3c0, 0x5, 0xea, 0x76, 0x2, 0x3bf, 0x3c1, 0x5, 0x74, 0x3b, 
    0x2, 0x3c0, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x3, 0x2, 0x2, 
    0x2, 0x3c1, 0x73, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c4, 0x5, 0x76, 0x3c, 
    0x2, 0x3c3, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x3, 0x2, 0x2, 
    0x2, 0x3c5, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x75, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3ca, 0x5, 0x8c, 0x47, 
    0x2, 0x3c8, 0x3ca, 0x5, 0x8e, 0x48, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x3c9, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x3cb, 0x3ce, 0x5, 0x7a, 0x3e, 0x2, 0x3cc, 0x3ce, 0x5, 0x7c, 0x3f, 0x2, 
    0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 
    0x3ce, 0x79, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d1, 0x7, 0x4d, 0x2, 0x2, 
    0x3d0, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 
    0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d4, 0x5, 0x86, 0x44, 0x2, 
    0x3d3, 0x3d5, 0x5, 0xb4, 0x5b, 0x2, 0x3d4, 0x3d3, 0x3, 0x2, 0x2, 0x2, 
    0x3d4, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x3, 0x2, 0x2, 0x2, 
    0x3d6, 0x3d7, 0x7, 0xf, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0x84, 0x43, 0x2, 
    0x3d8, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3db, 0x7, 0x4d, 0x2, 0x2, 
    0x3da, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 0x3, 0x2, 0x2, 0x2, 
    0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3de, 0x5, 0x7e, 0x40, 0x2, 
    0x3dd, 0x3df, 0x5, 0xb4, 0x5b, 0x2, 0x3de, 0x3dd, 0x3, 0x2, 0x2, 0x2, 
    0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 
    0x3e0, 0x3e1, 0x7, 0xf, 0x2, 0x2, 0x3e1, 0x3e2, 0x5, 0x84, 0x43, 0x2, 
    0x3e2, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e5, 0x7, 0x4d, 0x2, 0x2, 
    0x3e4, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x3, 0x2, 0x2, 0x2, 
    0x3e5, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e8, 0x5, 0x86, 0x44, 0x2, 
    0x3e7, 0x3e9, 0x5, 0xb4, 0x5b, 0x2, 0x3e8, 0x3e7, 0x3, 0x2, 0x2, 0x2, 
    0x3e8, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x3, 0x2, 0x2, 0x2, 
    0x3ea, 0x3eb, 0x7, 0xf, 0x2, 0x2, 0x3eb, 0x3ec, 0x5, 0x7e, 0x40, 0x2, 
    0x3ec, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3da, 0x3, 0x2, 0x2, 0x2, 
    0x3ed, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
    0x3f0, 0x7, 0xb, 0x2, 0x2, 0x3f0, 0x3f1, 0x5, 0x7e, 0x40, 0x2, 0x3f1, 
    0x3f3, 0x7, 0xc, 0x2, 0x2, 0x3f2, 0x3f4, 0x5, 0xb4, 0x5b, 0x2, 0x3f3, 
    0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 
    0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f9, 0x5, 0x6c, 0x37, 0x2, 0x3f6, 
    0x3f9, 0x5, 0x80, 0x41, 0x2, 0x3f7, 0x3f9, 0x5, 0x82, 0x42, 0x2, 0x3f8, 
    0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f8, 
    0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x8, 0x41, 0x1, 0x2, 0x3fb, 
    0x3fc, 0x7, 0xb, 0x2, 0x2, 0x3fc, 0x3fd, 0x5, 0x80, 0x41, 0x2, 0x3fd, 
    0x3ff, 0x7, 0xc, 0x2, 0x2, 0x3fe, 0x400, 0x5, 0xb4, 0x5b, 0x2, 0x3ff, 
    0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x3, 0x2, 0x2, 0x2, 0x400, 
    0x40a, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x5, 0x6c, 0x37, 0x2, 0x402, 
    0x403, 0x7, 0xf, 0x2, 0x2, 0x403, 0x404, 0x5, 0x84, 0x43, 0x2, 0x404, 
    0x40a, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x5, 0x84, 0x43, 0x2, 0x406, 
    0x407, 0x7, 0xf, 0x2, 0x2, 0x407, 0x408, 0x5, 0x80, 0x41, 0x3, 0x408, 
    0x40a, 0x3, 0x2, 0x2, 0x2, 0x409, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x409, 
    0x401, 0x3, 0x2, 0x2, 0x2, 0x409, 0x405, 0x3, 0x2, 0x2, 0x2, 0x40a, 
    0x413, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0xc, 0x5, 0x2, 0x2, 0x40c, 
    0x40d, 0x7, 0xf, 0x2, 0x2, 0x40d, 0x412, 0x5, 0x80, 0x41, 0x6, 0x40e, 
    0x40f, 0xc, 0x4, 0x2, 0x2, 0x40f, 0x410, 0x7, 0xf, 0x2, 0x2, 0x410, 
    0x412, 0x5, 0x6c, 0x37, 0x2, 0x411, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x411, 
    0x40e, 0x3, 0x2, 0x2, 0x2, 0x412, 0x415, 0x3, 0x2, 0x2, 0x2, 0x413, 
    0x411, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 0x3, 0x2, 0x2, 0x2, 0x414, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x415, 0x413, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 
    0x8, 0x42, 0x1, 0x2, 0x417, 0x418, 0x7, 0xb, 0x2, 0x2, 0x418, 0x419, 
    0x5, 0x82, 0x42, 0x2, 0x419, 0x41b, 0x7, 0xc, 0x2, 0x2, 0x41a, 0x41c, 
    0x5, 0xb4, 0x5b, 0x2, 0x41b, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 
    0x3, 0x2, 0x2, 0x2, 0x41c, 0x426, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41e, 
    0x5, 0x84, 0x43, 0x2, 0x41e, 0x41f, 0x7, 0xf, 0x2, 0x2, 0x41f, 0x420, 
    0x5, 0x6c, 0x37, 0x2, 0x420, 0x426, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 
    0x5, 0x6c, 0x37, 0x2, 0x422, 0x423, 0x7, 0xf, 0x2, 0x2, 0x423, 0x424, 
    0x5, 0x82, 0x42, 0x4, 0x424, 0x426, 0x3, 0x2, 0x2, 0x2, 0x425, 0x416, 
    0x3, 0x2, 0x2, 0x2, 0x425, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x425, 0x421, 
    0x3, 0x2, 0x2, 0x2, 0x426, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 
    0xc, 0x5, 0x2, 0x2, 0x428, 0x429, 0x7, 0xf, 0x2, 0x2, 0x429, 0x42e, 
    0x5, 0x82, 0x42, 0x6, 0x42a, 0x42b, 0xc, 0x3, 0x2, 0x2, 0x42b, 0x42c, 
    0x7, 0xf, 0x2, 0x2, 0x42c, 0x42e, 0x5, 0x84, 0x43, 0x2, 0x42d, 0x427, 
    0x3, 0x2, 0x2, 0x2, 0x42d, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x431, 
    0x3, 0x2, 0x2, 0x2, 0x42f, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 
    0x3, 0x2, 0x2, 0x2, 0x430, 0x83, 0x3, 0x2, 0x2, 0x2, 0x431, 0x42f, 0x3, 
    0x2, 0x2, 0x2, 0x432, 0x433, 0x8, 0x43, 0x1, 0x2, 0x433, 0x434, 0x7, 
    0xb, 0x2, 0x2, 0x434, 0x435, 0x5, 0x84, 0x43, 0x2, 0x435, 0x437, 0x7, 
    0xc, 0x2, 0x2, 0x436, 0x438, 0x5, 0xb4, 0x5b, 0x2, 0x437, 0x436, 0x3, 
    0x2, 0x2, 0x2, 0x437, 0x438, 0x3, 0x2, 0x2, 0x2, 0x438, 0x43e, 0x3, 
    0x2, 0x2, 0x2, 0x439, 0x43b, 0x5, 0x86, 0x44, 0x2, 0x43a, 0x43c, 0x5, 
    0xb4, 0x5b, 0x2, 0x43b, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 
    0x2, 0x2, 0x2, 0x43c, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x432, 0x3, 
    0x2, 0x2, 0x2, 0x43d, 0x439, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x444, 0x3, 
    0x2, 0x2, 0x2, 0x43f, 0x440, 0xc, 0x4, 0x2, 0x2, 0x440, 0x441, 0x7, 
    0xf, 0x2, 0x2, 0x441, 0x443, 0x5, 0x84, 0x43, 0x5, 0x442, 0x43f, 0x3, 
    0x2, 0x2, 0x2, 0x443, 0x446, 0x3, 0x2, 0x2, 0x2, 0x444, 0x442, 0x3, 
    0x2, 0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x446, 0x444, 0x3, 0x2, 0x2, 0x2, 0x447, 0x44c, 0x5, 0x66, 
    0x34, 0x2, 0x448, 0x44c, 0x5, 0x88, 0x45, 0x2, 0x449, 0x44c, 0x5, 0x70, 
    0x39, 0x2, 0x44a, 0x44c, 0x5, 0x68, 0x35, 0x2, 0x44b, 0x447, 0x3, 0x2, 
    0x2, 0x2, 0x44b, 0x448, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x449, 0x3, 0x2, 
    0x2, 0x2, 0x44b, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x44d, 0x455, 0x5, 0x70, 0x39, 0x2, 0x44e, 0x44f, 0x7, 0x17, 0x2, 
    0x2, 0x44f, 0x450, 0x5, 0xf2, 0x7a, 0x2, 0x450, 0x451, 0x7, 0x19, 0x2, 
    0x2, 0x451, 0x456, 0x3, 0x2, 0x2, 0x2, 0x452, 0x456, 0x7, 0x11, 0x2, 
    0x2, 0x453, 0x456, 0x7, 0x13, 0x2, 0x2, 0x454, 0x456, 0x7, 0x12, 0x2, 
    0x2, 0x455, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x455, 0x452, 0x3, 0x2, 0x2, 
    0x2, 0x455, 0x453, 0x3, 0x2, 0x2, 0x2, 0x455, 0x454, 0x3, 0x2, 0x2, 
    0x2, 0x456, 0x89, 0x3, 0x2, 0x2, 0x2, 0x457, 0x458, 0x7, 0xb, 0x2, 0x2, 
    0x458, 0x459, 0x5, 0x8a, 0x46, 0x2, 0x459, 0x45a, 0x7, 0xc, 0x2, 0x2, 
    0x45a, 0x468, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x7, 0x26, 0x2, 0x2, 
    0x45c, 0x45e, 0x5, 0x50, 0x29, 0x2, 0x45d, 0x45f, 0x5, 0x94, 0x4b, 0x2, 
    0x45e, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 0x3, 0x2, 0x2, 0x2, 
    0x45f, 0x461, 0x3, 0x2, 0x2, 0x2, 0x460, 0x462, 0x5, 0xae, 0x58, 0x2, 
    0x461, 0x460, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 
    0x462, 0x463, 0x3, 0x2, 0x2, 0x2, 0x463, 0x465, 0x7, 0x36, 0x2, 0x2, 
    0x464, 0x466, 0x5, 0xac, 0x57, 0x2, 0x465, 0x464, 0x3, 0x2, 0x2, 0x2, 
    0x465, 0x466, 0x3, 0x2, 0x2, 0x2, 0x466, 0x468, 0x3, 0x2, 0x2, 0x2, 
    0x467, 0x457, 0x3, 0x2, 0x2, 0x2, 0x467, 0x45b, 0x3, 0x2, 0x2, 0x2, 
    0x468, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46b, 0x7, 0x1f, 0x2, 0x2, 
    0x46a, 0x469, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 0x3, 0x2, 0x2, 0x2, 
    0x46b, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 0x7, 0xd, 0x2, 0x2, 
    0x46d, 0x46e, 0x5, 0xc6, 0x64, 0x2, 0x46e, 0x46f, 0x7, 0xe, 0x2, 0x2, 
    0x46f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 0x7, 0x1f, 0x2, 0x2, 
    0x471, 0x472, 0x5, 0xca, 0x66, 0x2, 0x472, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x473, 0x474, 0x7, 0x1f, 0x2, 0x2, 0x474, 0x475, 0x7, 0x28, 0x2, 0x2, 
    0x475, 0x476, 0x7, 0x9, 0x2, 0x2, 0x476, 0x477, 0x5, 0xca, 0x66, 0x2, 
    0x477, 0x91, 0x3, 0x2, 0x2, 0x2, 0x478, 0x482, 0x7, 0x29, 0x2, 0x2, 
    0x479, 0x483, 0x7, 0x11, 0x2, 0x2, 0x47a, 0x47f, 0x5, 0xba, 0x5e, 0x2, 
    0x47b, 0x47c, 0x7, 0xf, 0x2, 0x2, 0x47c, 0x47e, 0x5, 0xba, 0x5e, 0x2, 
    0x47d, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x481, 0x3, 0x2, 0x2, 0x2, 
    0x47f, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x3, 0x2, 0x2, 0x2, 
    0x480, 0x483, 0x3, 0x2, 0x2, 0x2, 0x481, 0x47f, 0x3, 0x2, 0x2, 0x2, 
    0x482, 0x479, 0x3, 0x2, 0x2, 0x2, 0x482, 0x47a, 0x3, 0x2, 0x2, 0x2, 
    0x483, 0x485, 0x3, 0x2, 0x2, 0x2, 0x484, 0x486, 0x5, 0x96, 0x4c, 0x2, 
    0x485, 0x484, 0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 0x3, 0x2, 0x2, 0x2, 
    0x486, 0x93, 0x3, 0x2, 0x2, 0x2, 0x487, 0x492, 0x7, 0x29, 0x2, 0x2, 
    0x488, 0x493, 0x7, 0x11, 0x2, 0x2, 0x489, 0x48f, 0x5, 0xba, 0x5e, 0x2, 
    0x48a, 0x48b, 0x5, 0xfc, 0x7f, 0x2, 0x48b, 0x48c, 0x5, 0xba, 0x5e, 0x2, 
    0x48c, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48a, 0x3, 0x2, 0x2, 0x2, 
    0x48e, 0x491, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48d, 0x3, 0x2, 0x2, 0x2, 
    0x48f, 0x490, 0x3, 0x2, 0x2, 0x2, 0x490, 0x493, 0x3, 0x2, 0x2, 0x2, 
    0x491, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x492, 0x488, 0x3, 0x2, 0x2, 0x2, 
    0x492, 0x489, 0x3, 0x2, 0x2, 0x2, 0x493, 0x495, 0x3, 0x2, 0x2, 0x2, 
    0x494, 0x496, 0x5, 0x96, 0x4c, 0x2, 0x495, 0x494, 0x3, 0x2, 0x2, 0x2, 
    0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 0x498, 0x3, 0x2, 0x2, 0x2, 
    0x497, 0x499, 0x5, 0x98, 0x4d, 0x2, 0x498, 0x497, 0x3, 0x2, 0x2, 0x2, 
    0x498, 0x499, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49b, 0x3, 0x2, 0x2, 0x2, 
    0x49a, 0x49c, 0x5, 0x9a, 0x4e, 0x2, 0x49b, 0x49a, 0x3, 0x2, 0x2, 0x2, 
    0x49b, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49e, 0x3, 0x2, 0x2, 0x2, 
    0x49d, 0x49f, 0x5, 0xa0, 0x51, 0x2, 0x49e, 0x49d, 0x3, 0x2, 0x2, 0x2, 
    0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a1, 0x3, 0x2, 0x2, 0x2, 
    0x4a0, 0x4a2, 0x5, 0xa2, 0x52, 0x2, 0x4a1, 0x4a0, 0x3, 0x2, 0x2, 0x2, 
    0x4a1, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x95, 0x3, 0x2, 0x2, 0x2, 0x4a3, 
    0x4a4, 0x7, 0x2a, 0x2, 0x2, 0x4a4, 0x4a5, 0x7, 0x2b, 0x2, 0x2, 0x4a5, 
    0x4aa, 0x5, 0xd2, 0x6a, 0x2, 0x4a6, 0x4a7, 0x7, 0xf, 0x2, 0x2, 0x4a7, 
    0x4a9, 0x5, 0xd2, 0x6a, 0x2, 0x4a8, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a9, 
    0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4aa, 
    0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4aa, 
    0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ae, 0x7, 0x31, 0x2, 0x2, 0x4ae, 0x4af, 
    0x5, 0xc6, 0x64, 0x2, 0x4af, 0x99, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 
    0x7, 0x2c, 0x2, 0x2, 0x4b1, 0x4b2, 0x7, 0x2b, 0x2, 0x2, 0x4b2, 0x4b7, 
    0x5, 0x9c, 0x4f, 0x2, 0x4b3, 0x4b4, 0x7, 0xf, 0x2, 0x2, 0x4b4, 0x4b6, 
    0x5, 0x9c, 0x4f, 0x2, 0x4b5, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b9, 
    0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 
    0x3, 0x2, 0x2, 0x2, 0x4b8, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4b7, 0x3, 
    0x2, 0x2, 0x2, 0x4ba, 0x4bc, 0x5, 0xd2, 0x6a, 0x2, 0x4bb, 0x4bd, 0x5, 
    0x9e, 0x50, 0x2, 0x4bc, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x3, 
    0x2, 0x2, 0x2, 0x4bd, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4bf, 0x9, 0x3, 
    0x2, 0x2, 0x4bf, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4c1, 0x7, 0x2d, 
    0x2, 0x2, 0x4c1, 0x4c2, 0x5, 0xc6, 0x64, 0x2, 0x4c2, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0x4c3, 0x4c4, 0x7, 0x2e, 0x2, 0x2, 0x4c4, 0x4c5, 0x5, 0xc6, 
    0x64, 0x2, 0x4c5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c8, 0x7, 0x32, 
    0x2, 0x2, 0x4c7, 0x4c9, 0x5, 0xac, 0x57, 0x2, 0x4c8, 0x4c7, 0x3, 0x2, 
    0x2, 0x2, 0x4c8, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 0x3, 0x2, 
    0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x38, 0x2, 0x2, 0x4cb, 0x4f5, 0x5, 0xec, 
    0x77, 0x2, 0x4cc, 0x4cd, 0x7, 0x33, 0x2, 0x2, 0x4cd, 0x4d0, 0x5, 0xec, 
    0x77, 0x2, 0x4ce, 0x4cf, 0x7, 0x3d, 0x2, 0x2, 0x4cf, 0x4d1, 0x5, 0xac, 
    0x57, 0x2, 0x4d0, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x3, 0x2, 
    0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x45, 
    0x2, 0x2, 0x4d3, 0x4d4, 0x5, 0xc6, 0x64, 0x2, 0x4d4, 0x4f5, 0x3, 0x2, 
    0x2, 0x2, 0x4d5, 0x4d6, 0x7, 0x34, 0x2, 0x2, 0x4d6, 0x4d7, 0x7, 0x42, 
    0x2, 0x2, 0x4d7, 0x4d8, 0x7, 0x32, 0x2, 0x2, 0x4d8, 0x4d9, 0x7, 0x38, 
    0x2, 0x2, 0x4d9, 0x4dc, 0x5, 0xec, 0x77, 0x2, 0x4da, 0x4db, 0x7, 0x3d, 
    0x2, 0x2, 0x4db, 0x4dd, 0x5, 0xac, 0x57, 0x2, 0x4dc, 0x4da, 0x3, 0x2, 
    0x2, 0x2, 0x4dc, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4df, 0x3, 0x2, 
    0x2, 0x2, 0x4de, 0x4e0, 0x5, 0xa8, 0x55, 0x2, 0x4df, 0x4de, 0x3, 0x2, 
    0x2, 0x2, 0x4df, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e1, 0x3, 0x2, 
    0x2, 0x2, 0x4e1, 0x4e2, 0x7, 0x45, 0x2, 0x2, 0x4e2, 0x4e3, 0x5, 0xc6, 
    0x64, 0x2, 0x4e3, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e5, 0x7, 0x34, 
    0x2, 0x2, 0x4e5, 0x4e8, 0x5, 0xec, 0x77, 0x2, 0x4e6, 0x4e7, 0x7, 0x3d, 
    0x2, 0x2, 0x4e7, 0x4e9, 0x5, 0xac, 0x57, 0x2, 0x4e8, 0x4e6, 0x3, 0x2, 
    0x2, 0x2, 0x4e8, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4eb, 0x3, 0x2, 
    0x2, 0x2, 0x4ea, 0x4ec, 0x5, 0xa8, 0x55, 0x2, 0x4eb, 0x4ea, 0x3, 0x2, 
    0x2, 0x2, 0x4eb, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x3, 0x2, 
    0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0x45, 0x2, 0x2, 0x4ee, 0x4ef, 0x5, 0xc6, 
    0x64, 0x2, 0x4ef, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f2, 0x7, 0x36, 
    0x2, 0x2, 0x4f1, 0x4f3, 0x5, 0xac, 0x57, 0x2, 0x4f2, 0x4f1, 0x3, 0x2, 
    0x2, 0x2, 0x4f2, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f5, 0x3, 0x2, 
    0x2, 0x2, 0x4f4, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4cc, 0x3, 0x2, 
    0x2, 0x2, 0x4f4, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4e4, 0x3, 0x2, 
    0x2, 0x2, 0x4f4, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x4f6, 0x4f7, 0x7, 0x33, 0x2, 0x2, 0x4f7, 0x4f8, 0x5, 0xec, 0x77, 
    0x2, 0x4f8, 0x4f9, 0x7, 0x45, 0x2, 0x2, 0x4f9, 0x4fa, 0x5, 0xc6, 0x64, 
    0x2, 0x4fa, 0x504, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x34, 0x2, 
    0x2, 0x4fc, 0x4fe, 0x5, 0xec, 0x77, 0x2, 0x4fd, 0x4ff, 0x5, 0xa8, 0x55, 
    0x2, 0x4fe, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 0x2, 
    0x2, 0x4ff, 0x500, 0x3, 0x2, 0x2, 0x2, 0x500, 0x501, 0x7, 0x45, 0x2, 
    0x2, 0x501, 0x502, 0x5, 0xc6, 0x64, 0x2, 0x502, 0x504, 0x3, 0x2, 0x2, 
    0x2, 0x503, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x503, 0x4fb, 0x3, 0x2, 0x2, 
    0x2, 0x504, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 0x7, 0x35, 0x2, 
    0x2, 0x506, 0x50b, 0x5, 0xaa, 0x56, 0x2, 0x507, 0x508, 0x7, 0xf, 0x2, 
    0x2, 0x508, 0x50a, 0x5, 0xaa, 0x56, 0x2, 0x509, 0x507, 0x3, 0x2, 0x2, 
    0x2, 0x50a, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x509, 0x3, 0x2, 0x2, 
    0x2, 0x50b, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50c, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x50d, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x50f, 0x5, 0xd2, 0x6a, 0x2, 
    0x50f, 0x510, 0x7, 0x10, 0x2, 0x2, 0x510, 0x511, 0x5, 0xc6, 0x64, 0x2, 
    0x511, 0xab, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 0x7, 0x4f, 0x2, 0x2, 
    0x513, 0x51b, 0x7, 0x37, 0x2, 0x2, 0x514, 0x515, 0x7, 0x3a, 0x2, 0x2, 
    0x515, 0x51b, 0x7, 0x37, 0x2, 0x2, 0x516, 0x518, 0x7, 0x3b, 0x2, 0x2, 
    0x517, 0x516, 0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x3, 0x2, 0x2, 0x2, 
    0x518, 0x519, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51b, 0x7, 0x37, 0x2, 0x2, 
    0x51a, 0x512, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x514, 0x3, 0x2, 0x2, 0x2, 
    0x51a, 0x517, 0x3, 0x2, 0x2, 0x2, 0x51b, 0xad, 0x3, 0x2, 0x2, 0x2, 0x51c, 
    0x51e, 0x7, 0x39, 0x2, 0x2, 0x51d, 0x51f, 0x5, 0xb0, 0x59, 0x2, 0x51e, 
    0x51d, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x51f, 
    0x520, 0x3, 0x2, 0x2, 0x2, 0x520, 0x524, 0x7, 0x4d, 0x2, 0x2, 0x521, 
    0x525, 0x5, 0x102, 0x82, 0x2, 0x522, 0x523, 0x7, 0x3, 0x2, 0x2, 0x523, 
    0x525, 0x7, 0x37, 0x2, 0x2, 0x524, 0x521, 0x3, 0x2, 0x2, 0x2, 0x524, 
    0x522, 0x3, 0x2, 0x2, 0x2, 0x525, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x526, 
    0x527, 0x7, 0x39, 0x2, 0x2, 0x527, 0x528, 0x7, 0x3c, 0x2, 0x2, 0x528, 
    0x529, 0x7, 0x4d, 0x2, 0x2, 0x529, 0x52b, 0x5, 0x102, 0x82, 0x2, 0x52a, 
    0x51c, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x526, 0x3, 0x2, 0x2, 0x2, 0x52b, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x52c, 0x52d, 0x9, 0x4, 0x2, 0x2, 0x52d, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0x52e, 0x52f, 0x7, 0x3d, 0x2, 0x2, 0x52f, 0x530, 
    0x5, 0x102, 0x82, 0x2, 0x530, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x531, 0x532, 
    0x7, 0x48, 0x2, 0x2, 0x532, 0x533, 0x5, 0x102, 0x82, 0x2, 0x533, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0x534, 0x535, 0x7, 0x48, 0x2, 0x2, 0x535, 0x538, 
    0x5, 0xc6, 0x64, 0x2, 0x536, 0x537, 0x7, 0xf, 0x2, 0x2, 0x537, 0x539, 
    0x5, 0xc6, 0x64, 0x2, 0x538, 0x536, 0x3, 0x2, 0x2, 0x2, 0x538, 0x539, 
    0x3, 0x2, 0x2, 0x2, 0x539, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x7, 
    0x6b, 0x2, 0x2, 0x53b, 0x53c, 0x5, 0xc6, 0x64, 0x2, 0x53c, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0x53d, 0x53e, 0x5, 0xbe, 0x60, 0x2, 0x53e, 0x53f, 0x5, 
    0xfa, 0x7e, 0x2, 0x53f, 0x540, 0x5, 0xe2, 0x72, 0x2, 0x540, 0x547, 0x3, 
    0x2, 0x2, 0x2, 0x541, 0x542, 0x5, 0xbc, 0x5f, 0x2, 0x542, 0x543, 0x5, 
    0xfa, 0x7e, 0x2, 0x543, 0x544, 0x5, 0xe2, 0x72, 0x2, 0x544, 0x547, 0x3, 
    0x2, 0x2, 0x2, 0x545, 0x547, 0x5, 0xd2, 0x6a, 0x2, 0x546, 0x53d, 0x3, 
    0x2, 0x2, 0x2, 0x546, 0x541, 0x3, 0x2, 0x2, 0x2, 0x546, 0x545, 0x3, 
    0x2, 0x2, 0x2, 0x547, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x548, 0x549, 0x5, 0xc8, 
    0x65, 0x2, 0x549, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x5, 0xc0, 
    0x61, 0x2, 0x54b, 0x54c, 0x5, 0xc2, 0x62, 0x2, 0x54c, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0x54d, 0x54e, 0x7, 0xb, 0x2, 0x2, 0x54e, 0x553, 0x5, 0xe2, 
    0x72, 0x2, 0x54f, 0x550, 0x7, 0xf, 0x2, 0x2, 0x550, 0x552, 0x5, 0xe2, 
    0x72, 0x2, 0x551, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x552, 0x555, 0x3, 0x2, 
    0x2, 0x2, 0x553, 0x551, 0x3, 0x2, 0x2, 0x2, 0x553, 0x554, 0x3, 0x2, 
    0x2, 0x2, 0x554, 0x556, 0x3, 0x2, 0x2, 0x2, 0x555, 0x553, 0x3, 0x2, 
    0x2, 0x2, 0x556, 0x557, 0x7, 0xc, 0x2, 0x2, 0x557, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0x558, 0x559, 0x7, 0xd, 0x2, 0x2, 0x559, 0x55a, 0x5, 0xc4, 0x63, 
    0x2, 0x55a, 0x55b, 0x7, 0xe, 0x2, 0x2, 0x55b, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0x55c, 0x55e, 0xb, 0x2, 0x2, 0x2, 0x55d, 0x55c, 0x3, 0x2, 0x2, 0x2, 
    0x55e, 0x561, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x560, 0x3, 0x2, 0x2, 0x2, 
    0x55f, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x560, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x561, 
    0x55f, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x5, 0xc8, 0x65, 0x2, 0x563, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x564, 0x565, 0x8, 0x65, 0x1, 0x2, 0x565, 
    0x566, 0x7, 0xb, 0x2, 0x2, 0x566, 0x567, 0x5, 0xc8, 0x65, 0x2, 0x567, 
    0x568, 0x7, 0xc, 0x2, 0x2, 0x568, 0x570, 0x3, 0x2, 0x2, 0x2, 0x569, 
    0x570, 0x5, 0xce, 0x68, 0x2, 0x56a, 0x56b, 0x7, 0x47, 0x2, 0x2, 0x56b, 
    0x570, 0x5, 0xc8, 0x65, 0xd, 0x56c, 0x570, 0x5, 0xca, 0x66, 0x2, 0x56d, 
    0x570, 0x5, 0xf8, 0x7d, 0x2, 0x56e, 0x570, 0x5, 0xd2, 0x6a, 0x2, 0x56f, 
    0x564, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x569, 0x3, 0x2, 0x2, 0x2, 0x56f, 
    0x56a, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x56f, 
    0x56d, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x570, 
    0x597, 0x3, 0x2, 0x2, 0x2, 0x571, 0x575, 0xc, 0xc, 0x2, 0x2, 0x572, 
    0x576, 0x7, 0x11, 0x2, 0x2, 0x573, 0x576, 0x7, 0x15, 0x2, 0x2, 0x574, 
    0x576, 0x7, 0x16, 0x2, 0x2, 0x575, 0x572, 0x3, 0x2, 0x2, 0x2, 0x575, 
    0x573, 0x3, 0x2, 0x2, 0x2, 0x575, 0x574, 0x3, 0x2, 0x2, 0x2, 0x576, 
    0x577, 0x3, 0x2, 0x2, 0x2, 0x577, 0x596, 0x5, 0xc8, 0x65, 0xd, 0x578, 
    0x57b, 0xc, 0xb, 0x2, 0x2, 0x579, 0x57c, 0x7, 0x12, 0x2, 0x2, 0x57a, 
    0x57c, 0x7, 0x14, 0x2, 0x2, 0x57b, 0x579, 0x3, 0x2, 0x2, 0x2, 0x57b, 
    0x57a, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x57d, 
    0x596, 0x5, 0xc8, 0x65, 0xc, 0x57e, 0x583, 0xc, 0xa, 0x2, 0x2, 0x57f, 
    0x584, 0x7, 0x1a, 0x2, 0x2, 0x580, 0x584, 0x7, 0x18, 0x2, 0x2, 0x581, 
    0x584, 0x7, 0x19, 0x2, 0x2, 0x582, 0x584, 0x7, 0x17, 0x2, 0x2, 0x583, 
    0x57f, 0x3, 0x2, 0x2, 0x2, 0x583, 0x580, 0x3, 0x2, 0x2, 0x2, 0x583, 
    0x581, 0x3, 0x2, 0x2, 0x2, 0x583, 0x582, 0x3, 0x2, 0x2, 0x2, 0x584, 
    0x585, 0x3, 0x2, 0x2, 0x2, 0x585, 0x596, 0x5, 0xc8, 0x65, 0xb, 0x586, 
    0x589, 0xc, 0x9, 0x2, 0x2, 0x587, 0x58a, 0x7, 0x1b, 0x2, 0x2, 0x588, 
    0x58a, 0x7, 0x1c, 0x2, 0x2, 0x589, 0x587, 0x3, 0x2, 0x2, 0x2, 0x589, 
    0x588, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58b, 
    0x596, 0x5, 0xc8, 0x65, 0xa, 0x58c, 0x58d, 0xc, 0x7, 0x2, 0x2, 0x58d, 
    0x58e, 0x7, 0x43, 0x2, 0x2, 0x58e, 0x596, 0x5, 0xc8, 0x65, 0x8, 0x58f, 
    0x590, 0xc, 0x6, 0x2, 0x2, 0x590, 0x591, 0x7, 0x42, 0x2, 0x2, 0x591, 
    0x596, 0x5, 0xc8, 0x65, 0x7, 0x592, 0x593, 0xc, 0x8, 0x2, 0x2, 0x593, 
    0x594, 0x7, 0x44, 0x2, 0x2, 0x594, 0x596, 0x5, 0xf0, 0x79, 0x2, 0x595, 
    0x571, 0x3, 0x2, 0x2, 0x2, 0x595, 0x578, 0x3, 0x2, 0x2, 0x2, 0x595, 
    0x57e, 0x3, 0x2, 0x2, 0x2, 0x595, 0x586, 0x3, 0x2, 0x2, 0x2, 0x595, 
    0x58c, 0x3, 0x2, 0x2, 0x2, 0x595, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x595, 
    0x592, 0x3, 0x2, 0x2, 0x2, 0x596, 0x599, 0x3, 0x2, 0x2, 0x2, 0x597, 
    0x595, 0x3, 0x2, 0x2, 0x2, 0x597, 0x598, 0x3, 0x2, 0x2, 0x2, 0x598, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0x599, 0x597, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 
    0x5, 0xd8, 0x6d, 0x2, 0x59b, 0x59c, 0x7, 0x7, 0x2, 0x2, 0x59c, 0x59e, 
    0x3, 0x2, 0x2, 0x2, 0x59d, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x59e, 
    0x3, 0x2, 0x2, 0x2, 0x59e, 0x59f, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a0, 
    0x5, 0xd6, 0x6c, 0x2, 0x5a0, 0x5a2, 0x7, 0xb, 0x2, 0x2, 0x5a1, 0x5a3, 
    0x5, 0xcc, 0x67, 0x2, 0x5a2, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a3, 
    0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a5, 
    0x7, 0xc, 0x2, 0x2, 0x5a5, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5ab, 0x5, 
    0xbc, 0x5f, 0x2, 0x5a7, 0x5a8, 0x7, 0xf, 0x2, 0x2, 0x5a8, 0x5aa, 0x5, 
    0xbc, 0x5f, 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ad, 0x3, 
    0x2, 0x2, 0x2, 0x5ab, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5ac, 0x3, 
    0x2, 0x2, 0x2, 0x5ac, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ab, 0x3, 
    0x2, 0x2, 0x2, 0x5ae, 0x5b0, 0x7, 0x11, 0x2, 0x2, 0x5af, 0x5a6, 0x3, 
    0x2, 0x2, 0x2, 0x5af, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0x5b1, 0x5b5, 0x5, 0xd0, 0x69, 0x2, 0x5b2, 0x5b5, 0x5, 0xd2, 
    0x6a, 0x2, 0x5b3, 0x5b5, 0x5, 0xca, 0x66, 0x2, 0x5b4, 0x5b1, 0x3, 0x2, 
    0x2, 0x2, 0x5b4, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b3, 0x3, 0x2, 
    0x2, 0x2, 0x5b5, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x7, 0x46, 
    0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x4c, 0x2, 0x2, 0x5b8, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0x5b9, 0x5bb, 0x7, 0x1f, 0x2, 0x2, 0x5ba, 0x5b9, 0x3, 0x2, 
    0x2, 0x2, 0x5ba, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5bc, 0x3, 0x2, 
    0x2, 0x2, 0x5bc, 0x5c1, 0x5, 0xf0, 0x79, 0x2, 0x5bd, 0x5be, 0x7, 0xd, 
    0x2, 0x2, 0x5be, 0x5bf, 0x5, 0xd4, 0x6b, 0x2, 0x5bf, 0x5c0, 0x7, 0xe, 
    0x2, 0x2, 0x5c0, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5bd, 0x3, 0x2, 
    0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0x5c3, 0x5c5, 0x7, 0x1f, 0x2, 0x2, 0x5c4, 0x5c3, 0x3, 0x2, 0x2, 
    0x2, 0x5c4, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c6, 0x3, 0x2, 0x2, 
    0x2, 0x5c6, 0x5cb, 0x5, 0xf0, 0x79, 0x2, 0x5c7, 0x5c8, 0x7, 0xd, 0x2, 
    0x2, 0x5c8, 0x5c9, 0x5, 0xd4, 0x6b, 0x2, 0x5c9, 0x5ca, 0x7, 0xe, 0x2, 
    0x2, 0x5ca, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5c7, 0x3, 0x2, 0x2, 
    0x2, 0x5cb, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5d5, 0x3, 0x2, 0x2, 
    0x2, 0x5cd, 0x5ce, 0x7, 0x1f, 0x2, 0x2, 0x5ce, 0x5d3, 0x5, 0xf0, 0x79, 
    0x2, 0x5cf, 0x5d0, 0x7, 0xd, 0x2, 0x2, 0x5d0, 0x5d1, 0x5, 0xd4, 0x6b, 
    0x2, 0x5d1, 0x5d2, 0x7, 0xe, 0x2, 0x2, 0x5d2, 0x5d4, 0x3, 0x2, 0x2, 
    0x2, 0x5d3, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d4, 0x3, 0x2, 0x2, 
    0x2, 0x5d4, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5cd, 0x3, 0x2, 0x2, 
    0x2, 0x5d5, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5d7, 0x3, 0x2, 0x2, 
    0x2, 0x5d7, 0x5d8, 0x7, 0x9, 0x2, 0x2, 0x5d8, 0x5d9, 0x5, 0xe2, 0x72, 
    0x2, 0x5d9, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5dc, 0x5, 0xe2, 0x72, 
    0x2, 0x5db, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5da, 0x3, 0x2, 0x2, 
    0x2, 0x5dc, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5e4, 0x7, 0x3, 0x2, 0x2, 
    0x5de, 0x5e1, 0x7, 0x4e, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x14, 0x2, 0x2, 
    0x5e0, 0x5e2, 0x7, 0x3, 0x2, 0x2, 0x5e1, 0x5df, 0x3, 0x2, 0x2, 0x2, 
    0x5e1, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e4, 0x3, 0x2, 0x2, 0x2, 
    0x5e3, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5de, 0x3, 0x2, 0x2, 0x2, 
    0x5e4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0x5, 0xf0, 0x79, 0x2, 
    0x5e6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x5, 0xf0, 0x79, 0x2, 
    0x5e8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5ea, 0x5, 0xf0, 0x79, 0x2, 
    0x5ea, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 0x5, 0xf0, 0x79, 0x2, 
    0x5ec, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ee, 0x5, 0xf0, 0x79, 0x2, 
    0x5ee, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f5, 0x5, 0xf0, 0x79, 0x2, 
    0x5f0, 0x5f1, 0x5, 0xe8, 0x75, 0x2, 0x5f1, 0x5f2, 0x5, 0xf0, 0x79, 0x2, 
    0x5f2, 0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f0, 0x3, 0x2, 0x2, 0x2, 
    0x5f4, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f3, 0x3, 0x2, 0x2, 0x2, 
    0x5f5, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x5f7, 
    0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f9, 0x5, 0xf0, 0x79, 0x2, 0x5f9, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 0x5, 0xf0, 0x79, 0x2, 0x5fb, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x5, 0x11e, 0x90, 0x2, 0x5fd, 
    0xe7, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5ff, 0x9, 0x5, 0x2, 0x2, 0x5ff, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0x600, 0x602, 0x7, 0x1f, 0x2, 0x2, 0x601, 0x600, 
    0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 
    0x3, 0x2, 0x2, 0x2, 0x603, 0x604, 0x5, 0xda, 0x6e, 0x2, 0x604, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0x605, 0x606, 0x5, 0xea, 0x76, 0x2, 0x606, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0x607, 0x608, 0x5, 0xf0, 0x79, 0x2, 0x608, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0x609, 0x60c, 0x5, 0xfe, 0x80, 0x2, 0x60a, 0x60c, 
    0x5, 0x100, 0x81, 0x2, 0x60b, 0x609, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60a, 
    0x3, 0x2, 0x2, 0x2, 0x60c, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x60e, 0x7, 
    0x3, 0x2, 0x2, 0x60e, 0x60f, 0x7, 0x7, 0x2, 0x2, 0x60f, 0x616, 0x7, 
    0x3, 0x2, 0x2, 0x610, 0x611, 0x7, 0x3, 0x2, 0x2, 0x611, 0x616, 0x7, 
    0x7, 0x2, 0x2, 0x612, 0x613, 0x7, 0x7, 0x2, 0x2, 0x613, 0x616, 0x7, 
    0x3, 0x2, 0x2, 0x614, 0x616, 0x7, 0x3, 0x2, 0x2, 0x615, 0x60d, 0x3, 
    0x2, 0x2, 0x2, 0x615, 0x610, 0x3, 0x2, 0x2, 0x2, 0x615, 0x612, 0x3, 
    0x2, 0x2, 0x2, 0x615, 0x614, 0x3, 0x2, 0x2, 0x2, 0x616, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0x617, 0x618, 0x9, 0x6, 0x2, 0x2, 0x618, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0x619, 0x61a, 0x7, 0x55, 0x2, 0x2, 0x61a, 0x61b, 0x7, 0x53, 0x2, 
    0x2, 0x61b, 0x629, 0x7, 0x51, 0x2, 0x2, 0x61c, 0x61d, 0x7, 0x54, 0x2, 
    0x2, 0x61d, 0x61e, 0x7, 0x53, 0x2, 0x2, 0x61e, 0x629, 0x7, 0x51, 0x2, 
    0x2, 0x61f, 0x620, 0x7, 0x56, 0x2, 0x2, 0x620, 0x621, 0x7, 0x53, 0x2, 
    0x2, 0x621, 0x629, 0x7, 0x51, 0x2, 0x2, 0x622, 0x623, 0x7, 0x53, 0x2, 
    0x2, 0x623, 0x629, 0x7, 0x51, 0x2, 0x2, 0x624, 0x626, 0x7, 0x52, 0x2, 
    0x2, 0x625, 0x624, 0x3, 0x2, 0x2, 0x2, 0x625, 0x626, 0x3, 0x2, 0x2, 
    0x2, 0x626, 0x627, 0x3, 0x2, 0x2, 0x2, 0x627, 0x629, 0x7, 0x51, 0x2, 
    0x2, 0x628, 0x619, 0x3, 0x2, 0x2, 0x2, 0x628, 0x61c, 0x3, 0x2, 0x2, 
    0x2, 0x628, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x628, 0x622, 0x3, 0x2, 0x2, 
    0x2, 0x628, 0x625, 0x3, 0x2, 0x2, 0x2, 0x629, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0x62a, 0x632, 0x5, 0x11c, 0x8f, 0x2, 0x62b, 0x632, 0x5, 0x114, 0x8b, 
    0x2, 0x62c, 0x632, 0x5, 0x118, 0x8d, 0x2, 0x62d, 0x632, 0x5, 0x116, 
    0x8c, 0x2, 0x62e, 0x632, 0x5, 0x11a, 0x8e, 0x2, 0x62f, 0x632, 0x5, 0x102, 
    0x82, 0x2, 0x630, 0x632, 0x5, 0x11e, 0x90, 0x2, 0x631, 0x62a, 0x3, 0x2, 
    0x2, 0x2, 0x631, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x631, 0x62c, 0x3, 0x2, 
    0x2, 0x2, 0x631, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x631, 0x62e, 0x3, 0x2, 
    0x2, 0x2, 0x631, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x631, 0x630, 0x3, 0x2, 
    0x2, 0x2, 0x632, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x633, 0x634, 0x7, 0x40, 
    0x2, 0x2, 0x634, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x635, 0x636, 0x7, 0xf, 0x2, 
    0x2, 0x636, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x637, 0x638, 0x9, 0x7, 0x2, 0x2, 
    0x638, 0xff, 0x3, 0x2, 0x2, 0x2, 0x639, 0x63a, 0x9, 0x8, 0x2, 0x2, 0x63a, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63d, 0x5, 0x104, 0x83, 0x2, 0x63c, 
    0x63e, 0x5, 0x106, 0x84, 0x2, 0x63d, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x63d, 
    0x63e, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x640, 0x3, 0x2, 0x2, 0x2, 0x63f, 
    0x641, 0x5, 0x108, 0x85, 0x2, 0x640, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x640, 
    0x641, 0x3, 0x2, 0x2, 0x2, 0x641, 0x643, 0x3, 0x2, 0x2, 0x2, 0x642, 
    0x644, 0x5, 0x10a, 0x86, 0x2, 0x643, 0x642, 0x3, 0x2, 0x2, 0x2, 0x643, 
    0x644, 0x3, 0x2, 0x2, 0x2, 0x644, 0x646, 0x3, 0x2, 0x2, 0x2, 0x645, 
    0x647, 0x5, 0x10c, 0x87, 0x2, 0x646, 0x645, 0x3, 0x2, 0x2, 0x2, 0x646, 
    0x647, 0x3, 0x2, 0x2, 0x2, 0x647, 0x649, 0x3, 0x2, 0x2, 0x2, 0x648, 
    0x64a, 0x5, 0x10e, 0x88, 0x2, 0x649, 0x648, 0x3, 0x2, 0x2, 0x2, 0x649, 
    0x64a, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64b, 
    0x64d, 0x5, 0x110, 0x89, 0x2, 0x64c, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x64c, 
    0x64d, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64f, 0x3, 0x2, 0x2, 0x2, 0x64e, 
    0x650, 0x5, 0x112, 0x8a, 0x2, 0x64f, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x64f, 
    0x650, 0x3, 0x2, 0x2, 0x2, 0x650, 0x698, 0x3, 0x2, 0x2, 0x2, 0x651, 
    0x653, 0x5, 0x106, 0x84, 0x2, 0x652, 0x654, 0x5, 0x108, 0x85, 0x2, 0x653, 
    0x652, 0x3, 0x2, 0x2, 0x2, 0x653, 0x654, 0x3, 0x2, 0x2, 0x2, 0x654, 
    0x656, 0x3, 0x2, 0x2, 0x2, 0x655, 0x657, 0x5, 0x10a, 0x86, 0x2, 0x656, 
    0x655, 0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 0x3, 0x2, 0x2, 0x2, 0x657, 
    0x659, 0x3, 0x2, 0x2, 0x2, 0x658, 0x65a, 0x5, 0x10c, 0x87, 0x2, 0x659, 
    0x658, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x65a, 
    0x65c, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65d, 0x5, 0x10e, 0x88, 0x2, 0x65c, 
    0x65b, 0x3, 0x2, 0x2, 0x2, 0x65c, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x65d, 
    0x65f, 0x3, 0x2, 0x2, 0x2, 0x65e, 0x660, 0x5, 0x110, 0x89, 0x2, 0x65f, 
    0x65e, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x660, 0x3, 0x2, 0x2, 0x2, 0x660, 
    0x662, 0x3, 0x2, 0x2, 0x2, 0x661, 0x663, 0x5, 0x112, 0x8a, 0x2, 0x662, 
    0x661, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 0x3, 0x2, 0x2, 0x2, 0x663, 
    0x698, 0x3, 0x2, 0x2, 0x2, 0x664, 0x666, 0x5, 0x108, 0x85, 0x2, 0x665, 
    0x667, 0x5, 0x10a, 0x86, 0x2, 0x666, 0x665, 0x3, 0x2, 0x2, 0x2, 0x666, 
    0x667, 0x3, 0x2, 0x2, 0x2, 0x667, 0x669, 0x3, 0x2, 0x2, 0x2, 0x668, 
    0x66a, 0x5, 0x10c, 0x87, 0x2, 0x669, 0x668, 0x3, 0x2, 0x2, 0x2, 0x669, 
    0x66a, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x66b, 
    0x66d, 0x5, 0x10e, 0x88, 0x2, 0x66c, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66c, 
    0x66d, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x66f, 0x3, 0x2, 0x2, 0x2, 0x66e, 
    0x670, 0x5, 0x110, 0x89, 0x2, 0x66f, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x66f, 
    0x670, 0x3, 0x2, 0x2, 0x2, 0x670, 0x672, 0x3, 0x2, 0x2, 0x2, 0x671, 
    0x673, 0x5, 0x112, 0x8a, 0x2, 0x672, 0x671, 0x3, 0x2, 0x2, 0x2, 0x672, 
    0x673, 0x3, 0x2, 0x2, 0x2, 0x673, 0x698, 0x3, 0x2, 0x2, 0x2, 0x674, 
    0x676, 0x5, 0x10a, 0x86, 0x2, 0x675, 0x677, 0x5, 0x10c, 0x87, 0x2, 0x676, 
    0x675, 0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 0x3, 0x2, 0x2, 0x2, 0x677, 
    0x679, 0x3, 0x2, 0x2, 0x2, 0x678, 0x67a, 0x5, 0x10e, 0x88, 0x2, 0x679, 
    0x678, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x67a, 
    0x67c, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67d, 0x5, 0x110, 0x89, 0x2, 0x67c, 
    0x67b, 0x3, 0x2, 0x2, 0x2, 0x67c, 0x67d, 0x3, 0x2, 0x2, 0x2, 0x67d, 
    0x67f, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x680, 0x5, 0x112, 0x8a, 0x2, 0x67f, 
    0x67e, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x680, 0x3, 0x2, 0x2, 0x2, 0x680, 
    0x698, 0x3, 0x2, 0x2, 0x2, 0x681, 0x683, 0x5, 0x10c, 0x87, 0x2, 0x682, 
    0x684, 0x5, 0x10e, 0x88, 0x2, 0x683, 0x682, 0x3, 0x2, 0x2, 0x2, 0x683, 
    0x684, 0x3, 0x2, 0x2, 0x2, 0x684, 0x686, 0x3, 0x2, 0x2, 0x2, 0x685, 
    0x687, 0x5, 0x110, 0x89, 0x2, 0x686, 0x685, 0x3, 0x2, 0x2, 0x2, 0x686, 
    0x687, 0x3, 0x2, 0x2, 0x2, 0x687, 0x689, 0x3, 0x2, 0x2, 0x2, 0x688, 
    0x68a, 0x5, 0x112, 0x8a, 0x2, 0x689, 0x688, 0x3, 0x2, 0x2, 0x2, 0x689, 
    0x68a, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x698, 0x3, 0x2, 0x2, 0x2, 0x68b, 
    0x68d, 0x5, 0x10e, 0x88, 0x2, 0x68c, 0x68e, 0x5, 0x110, 0x89, 0x2, 0x68d, 
    0x68c, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x68e, 
    0x690, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x691, 0x5, 0x112, 0x8a, 0x2, 0x690, 
    0x68f, 0x3, 0x2, 0x2, 0x2, 0x690, 0x691, 0x3, 0x2, 0x2, 0x2, 0x691, 
    0x698, 0x3, 0x2, 0x2, 0x2, 0x692, 0x694, 0x5, 0x110, 0x89, 0x2, 0x693, 
    0x695, 0x5, 0x112, 0x8a, 0x2, 0x694, 0x693, 0x3, 0x2, 0x2, 0x2, 0x694, 
    0x695, 0x3, 0x2, 0x2, 0x2, 0x695, 0x698, 0x3, 0x2, 0x2, 0x2, 0x696, 
    0x698, 0x5, 0x112, 0x8a, 0x2, 0x697, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x697, 
    0x651, 0x3, 0x2, 0x2, 0x2, 0x697, 0x664, 0x3, 0x2, 0x2, 0x2, 0x697, 
    0x674, 0x3, 0x2, 0x2, 0x2, 0x697, 0x681, 0x3, 0x2, 0x2, 0x2, 0x697, 
    0x68b, 0x3, 0x2, 0x2, 0x2, 0x697, 0x692, 0x3, 0x2, 0x2, 0x2, 0x697, 
    0x696, 0x3, 0x2, 0x2, 0x2, 0x698, 0x103, 0x3, 0x2, 0x2, 0x2, 0x699, 
    0x69a, 0x7, 0x3, 0x2, 0x2, 0x69a, 0x69b, 0x7, 0x58, 0x2, 0x2, 0x69b, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x69d, 0x7, 0x3, 0x2, 0x2, 0x69d, 
    0x69e, 0x7, 0x59, 0x2, 0x2, 0x69e, 0x107, 0x3, 0x2, 0x2, 0x2, 0x69f, 
    0x6a0, 0x7, 0x3, 0x2, 0x2, 0x6a0, 0x6a1, 0x7, 0x5a, 0x2, 0x2, 0x6a1, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x7, 0x3, 0x2, 0x2, 0x6a3, 
    0x6a4, 0x7, 0x5b, 0x2, 0x2, 0x6a4, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x6a5, 
    0x6a6, 0x7, 0x3, 0x2, 0x2, 0x6a6, 0x6a7, 0x7, 0x5c, 0x2, 0x2, 0x6a7, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x6a8, 0x6a9, 0x7, 0x3, 0x2, 0x2, 0x6a9, 
    0x6aa, 0x7, 0x5d, 0x2, 0x2, 0x6aa, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
    0x6ac, 0x7, 0x3, 0x2, 0x2, 0x6ac, 0x6ad, 0x7, 0x5e, 0x2, 0x2, 0x6ad, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x6ae, 0x6af, 0x7, 0x3, 0x2, 0x2, 0x6af, 
    0x6b0, 0x7, 0x5f, 0x2, 0x2, 0x6b0, 0x113, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
    0x6b3, 0x9, 0x9, 0x2, 0x2, 0x6b2, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b2, 
    0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6b4, 
    0x6b5, 0x7, 0x6, 0x2, 0x2, 0x6b5, 0x115, 0x3, 0x2, 0x2, 0x2, 0x6b6, 
    0x6b8, 0x9, 0x9, 0x2, 0x2, 0x6b7, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b7, 
    0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
    0x6ba, 0x7, 0x4, 0x2, 0x2, 0x6ba, 0x117, 0x3, 0x2, 0x2, 0x2, 0x6bb, 
    0x6bd, 0x9, 0x9, 0x2, 0x2, 0x6bc, 0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6bc, 
    0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x6be, 
    0x6bf, 0x7, 0x5, 0x2, 0x2, 0x6bf, 0x119, 0x3, 0x2, 0x2, 0x2, 0x6c0, 
    0x6c2, 0x9, 0x9, 0x2, 0x2, 0x6c1, 0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6c1, 
    0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c3, 
    0x6c4, 0x7, 0x3, 0x2, 0x2, 0x6c4, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x6c5, 
    0x6c6, 0x9, 0xa, 0x2, 0x2, 0x6c6, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x6c7, 
    0x6c8, 0x7, 0x6e, 0x2, 0x2, 0x6c8, 0x11f, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0x127, 0x129, 0x133, 0x13d, 0x141, 0x147, 0x14b, 0x14f, 0x153, 0x157, 
    0x15e, 0x16a, 0x174, 0x17b, 0x18a, 0x191, 0x198, 0x1a7, 0x1ae, 0x1b2, 
    0x1b9, 0x1c7, 0x1cd, 0x1d0, 0x1d6, 0x1da, 0x1df, 0x1e3, 0x1f9, 0x204, 
    0x20a, 0x211, 0x21d, 0x226, 0x234, 0x23c, 0x241, 0x245, 0x24a, 0x256, 
    0x25b, 0x260, 0x267, 0x272, 0x279, 0x27e, 0x282, 0x286, 0x28c, 0x298, 
    0x29f, 0x2a8, 0x2af, 0x2b5, 0x2b8, 0x2c1, 0x2c5, 0x2c8, 0x2cb, 0x2d1, 
    0x2d7, 0x2db, 0x2e0, 0x2e4, 0x2e7, 0x2ec, 0x2f0, 0x2f7, 0x2fe, 0x304, 
    0x306, 0x30d, 0x315, 0x319, 0x31b, 0x322, 0x326, 0x32c, 0x331, 0x335, 
    0x33b, 0x345, 0x34d, 0x34f, 0x354, 0x35a, 0x364, 0x36c, 0x36e, 0x375, 
    0x37f, 0x3a7, 0x3aa, 0x3ba, 0x3c0, 0x3c5, 0x3c9, 0x3cd, 0x3d0, 0x3d4, 
    0x3da, 0x3de, 0x3e4, 0x3e8, 0x3ed, 0x3f3, 0x3f8, 0x3ff, 0x409, 0x411, 
    0x413, 0x41b, 0x425, 0x42d, 0x42f, 0x437, 0x43b, 0x43d, 0x444, 0x44b, 
    0x455, 0x45e, 0x461, 0x465, 0x467, 0x46a, 0x47f, 0x482, 0x485, 0x48f, 
    0x492, 0x495, 0x498, 0x49b, 0x49e, 0x4a1, 0x4aa, 0x4b7, 0x4bc, 0x4c8, 
    0x4d0, 0x4dc, 0x4df, 0x4e8, 0x4eb, 0x4f2, 0x4f4, 0x4fe, 0x503, 0x50b, 
    0x517, 0x51a, 0x51e, 0x524, 0x52a, 0x538, 0x546, 0x553, 0x55f, 0x56f, 
    0x575, 0x57b, 0x583, 0x589, 0x595, 0x597, 0x59d, 0x5a2, 0x5ab, 0x5af, 
    0x5b4, 0x5ba, 0x5c1, 0x5c4, 0x5cb, 0x5d3, 0x5d5, 0x5db, 0x5e1, 0x5e3, 
    0x5f5, 0x601, 0x60b, 0x615, 0x625, 0x628, 0x631, 0x63d, 0x640, 0x643, 
    0x646, 0x649, 0x64c, 0x64f, 0x653, 0x656, 0x659, 0x65c, 0x65f, 0x662, 
    0x666, 0x669, 0x66c, 0x66f, 0x672, 0x676, 0x679, 0x67c, 0x67f, 0x683, 
    0x686, 0x689, 0x68d, 0x690, 0x694, 0x697, 0x6b2, 0x6b7, 0x6bc, 0x6c1, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SiddhiqlParser::Initializer SiddhiqlParser::_init;
