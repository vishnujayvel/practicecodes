%{
 #include "y.tab.h"
%}

alpha [A-Za-z]
digit [0-9]

%%

[\t \n]  ;
if             return IF;
else           return ELSE;
{digit}+    return NUM;
{alpha}({alpha}|{digit})* return ID;
"<="         return RELOP;
">="         return RELOP;
"=="         return RELOP;
"!="          return RELOP;
"||"            return LOGIC;
"&&"         return LOGIC;
.                return yytext[0];

%%



