
	//import org.wso2.siddhi.query.compiler.exception.SiddhiParserException;


// Generated from Siddhiql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SiddhiqlLexer : public antlr4::Lexer {
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

  SiddhiqlLexer(antlr4::CharStream *input);
  ~SiddhiqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

