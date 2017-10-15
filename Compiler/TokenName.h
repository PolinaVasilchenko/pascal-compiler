#pragma once

using namespace std;

typedef enum TokenName{
	ABSOLUTE,
	AND,
	ARRAY,
	ASM,
	BEGIN,
	CASE,
	CONST,
	CONSTRUCTOR,
	DESTRUCTOR,
	DIV,
	GOTO,
	DO,
	DOWNTO,
	ELSE,
	END,
	NFILE,
	FOR,
	FUNCTION,
	IF,
	IMPLEMENTATION,
	IN,
	INHERITED,
	INLINE,
	INTERFACE,
	LABEL,
	LIBRARY,
	MOD,
	NOT,
	NIL,
	OR,
	OF,
	OBJECT,
	NOPERATOR,
	OR,
	PACKED,
	PROCEDURE,
	PROGRAM,
	RECORD,
	REINTRODUCE,
	REPEAT,
	SELF,
	SET,
	SHL,
	SHR,
	STR,
	THEN,
	TO,
	TYPE,
	UNIT,
	UNTIL,
	USES,
	VAR,
	WHILE,
	WITH,
	XOR,

	ADD,
	SUB,
	ASTERISK,
	SLASH,
	EQUAL,
	LESS,
	MORE,
	LSBRACKET,
	RSBRACKET,
	COMMA,
	LRBRACKET,
	RRBRACKET,
	COLON,
	SEMICOLON,
	CARET,
	DOT,
	AT,
	LCBRACKET,
	RCBRACKET,
	SHARP,
	NOTEQUAL,
	LESSEQ,
	MOREEQ,
	ASSIGN,
	ADDASSIGN,
	SUBASSIGN,
	ASTERASSIGN,
	SLASHASSIGN,
	RANGE,
	POWER,
	SYMDIFF,
	AS,
	CLASS,
	READ,
	READLN,
	WRITE,
	WRITELN,
}TokenName;

