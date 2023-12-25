/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SMARTHOME_TAB_H_INCLUDED
# define YY_YY_SMARTHOME_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    CREATE_OBJECT = 259,           /* CREATE_OBJECT  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    TURN_ON = 262,                 /* TURN_ON  */
    TURN_OFF = 263,                /* TURN_OFF  */
    SET_VOLUME = 264,              /* SET_VOLUME  */
    GRANT_ACCESS = 265,            /* GRANT_ACCESS  */
    CURRENT_TIME = 266,            /* CURRENT_TIME  */
    SUNRISE_TIME = 267,            /* SUNRISE_TIME  */
    SUNSET_TIME = 268,             /* SUNSET_TIME  */
    COLON = 269,                   /* COLON  */
    SEMICOLON = 270,               /* SEMICOLON  */
    LPAREN = 271,                  /* LPAREN  */
    RPAREN = 272,                  /* RPAREN  */
    LBRACE = 273,                  /* LBRACE  */
    RBRACE = 274,                  /* RBRACE  */
    COMMA = 275,                   /* COMMA  */
    DOT = 276,                     /* DOT  */
    SET_TEMPERATURE = 277,         /* SET_TEMPERATURE  */
    PRINT = 278,                   /* PRINT  */
    PLUS = 279,                    /* PLUS  */
    MINUS = 280,                   /* MINUS  */
    MULTIPLY = 281,                /* MULTIPLY  */
    DIVIDE = 282,                  /* DIVIDE  */
    STRING_VALUE = 283,            /* STRING_VALUE  */
    INT_TYPE = 284,                /* INT_TYPE  */
    STRING_TYPE = 285,             /* STRING_TYPE  */
    TURN_ON_LIGHT = 286,           /* TURN_ON_LIGHT  */
    TURN_OFF_LIGHT = 287,          /* TURN_OFF_LIGHT  */
    TURN_ON_BLINDS = 288,          /* TURN_ON_BLINDS  */
    TURN_OFF_BLINDS = 289,         /* TURN_OFF_BLINDS  */
    STATUS = 290,                  /* STATUS  */
    GREATER = 291,                 /* GREATER  */
    LESS = 292,                    /* LESS  */
    EQUAL = 293,                   /* EQUAL  */
    STRING = 294,                  /* STRING  */
    ID = 295                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "smarthome.y"

    int intval;
    char* strval;
    SmartObject* objectval;
    Condition* conditionval; // Добавьте эту строку
    BlockFunction* blocklistval;
    Variable* varval;
    

#line 114 "smarthome.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SMARTHOME_TAB_H_INCLUDED  */
