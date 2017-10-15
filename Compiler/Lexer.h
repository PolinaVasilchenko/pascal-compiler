#pragma once
#include "TokenName.h"
#include "TokenType.h"
#include <string>
#include <stdio.h>
#include <map>

using namespace std;

class Tokenizer {
public:
	class Token {
	public:
		TokenType Type;
		TokenName TName;
		int Line;
		int Pos;
		string String;

		Token(TokenType type, TokenName tname, int line, int pos, string str) {
			Type = type;
			TName = tname;
			Line = line;
			Pos = pos;
			String = str;
		}

		map<string, TokenName> Dictionary = {
			{ "+", ADD },
			{ "-", SUB },
			{ "*", ASTERISK },
			{ "/", SLASH },
			{ "=", EQUAL },
			{ "<", LESS },
			{ ">", MORE },
			{ "[", LSBRACKET },
			{ "]", RSBRACKET },
			{ "(.", LSBRACKET },
			{ ").", RSBRACKET },
			{ "(", LRBRACKET },
			{ ")", RRBRACKET },
			{ ".", DOT },
			{ ",", COMMA },
			{ ":", COLON },
			{ ";", SEMICOLON },
			{ "^", CARET },
			{ "@", CARET },
			{ "<<", SHL },
			{ "shl", SHL },
			{ "shr", SHR },
			{ ">>", SHR },
			{ "**", POWER },
			{ "<>", NOTEQUAL },
			{ "><", SYMDIFF },
			{ "<=", LESSEQ },
			{ ">=", MOREEQ },
			{ ":=", ASSIGN },
			{ "+=", ADDASSIGN },
			{ "-=", SUBASSIGN },
			{ "*=", ASTERASSIGN },
			{ "/=", SLASHASSIGN },

			{ "absolute", ABSOLUTE },
			{ "and", AND },
			{ "array", ARRAY },
			{ "asm", ASM },
			{ "begin", BEGIN },
			{ "case", CASE },
			{ "const", CONST },
			{ "constructor", CONSTRUCTOR },
			{ "destructor", DESTRUCTOR },
			{ "div", DIV },
			{ "do", DO },
			{ "downto", DOWNTO },
			{ "else", ELSE },
			{ "end", END },
			{ "file", NFILE },
			{ "for", FOR },
			{ "function", FUNCTION },
			{ "goto", GOTO },
			{ "if", IF },
			{ "implementation", IMPLEMENTATION },
			{ "in", IN },
			{ "inherited", INHERITED },
			{ "inline", INLINE },
			{ "interface", INTERFACE },
			{ "label", LABEL },
			{ "mod", MOD },
			{ "nil", NIL },
			{ "not", NOT },
			{ "object", OBJECT },
			{ "of", OF },
			{ "operator", NOPERATOR },
			{ "or", OR },
			{ "packed", PACKED },
			{ "procedure", PROCEDURE },
			{ "program", PROGRAM },
			{ "record", RECORD },
			{ "reintroduce", REINTRODUCE },
			{ "repeat", REPEAT },
			{ "self", SELF },
			{ "set", SET },
			{ "string", STR },
			{ "then", THEN },
			{ "to", TO },
			{ "type", TYPE },
			{ "unit", UNIT },
			{ "until", UNTIL },
			{ "uses", USES },
			{ "var", VAR },
			{ "while", WHILE },
			{ "with", WITH },
			{ "xor", XOR },
			{ "as", AS },
			{ "class", CLASS },
			{ "library", LIBRARY },
			{ "read", READ },
			{ "readln", READLN },
			{ "write", WRITE },
			{ "writeln", WRITELN }
		};

		void print() {
			string nstr = "  ";
			//printf(Line + ":" + Pos + nstr + Type.gettype() + nstr + Tname.getname() + nstr + String);
		}
	};

	

	class StrToken : Token {
	public:
		string Value;
		StrToken(TokenType type, TokenName tname, int line, int pos, string str, string value) : Token(type, tname, line, pos, str) {
			Value = value;
		}
	};

	class IntToken : Token {
	public:
		int Value;
		IntToken(TokenType type, TokenName tname, int line, int pos, string str, int value) : Token(type, tname, line, pos, str) {
			Value = value;
		}
	};

	class FloatToken : Token {
	public:
		double Value;
		FloatToken(TokenType type, TokenName tname, int line, int pos, string str, double value) : Token(type, tname, line, pos, str) {
			Value = value;
		}
	};
};
