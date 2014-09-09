%{
	#include<stdio.h>
%}

digit [0-9]
number {digit}+
real {digit}*"."{digit}+
text [a-zA-Z]+
text_num [a-zA-Z0-9]
conditionals "if"|"else"|"else if"|"switch"|"case"
keyword "break"|"continue"|"goto"|"printf"|"scanf"|"sprintf"|"sscanf"|"fopen"|"fwrite"|"fread"|"fclose"|"write"|"read"|"open"|"close"|"return"|"int"|"float"|"char"|"unsigned"|"signed"|"short"|"long"|"double"
iterators "for"|"while"|"do"
preprocessor "#"|"#line"|"#undef"|"#error"|"#elif"|"#else"|"endif"|"#if"|"#define"|"#include"|"#pragma"|"#ifndef"|"#ifdef"
delimiter [;:()"]
space [ \t]
newline [\n]
identifier [a-zA-Z]{text_num}*|[a-zA-Z]{text_num}*[[{number}+]]
non_identifier {number}+[A-Za-z]+
format_spec "%"{text_num}+
file "<"{identifier}.h">"
comment "/*"[a-zA-z0-9 \t\n;.~!@#$%^&*()_+=<>?:"{}]*"*/"
arith_op "+"|"-"|"*"|"/"|"="
block_beg "{"
block_end "}"
unary "++"|"--"
logic_op "&"|"|"|"&&"|"~"|"||"|">"|"<"|">="|"<="|"=="
function {identifier}+"("{delimiter}*{text}{text_num}*{delimiter}*")"
%%
{conditionals} printf("%s is a conditional\n",yytext);
{iterators} printf("%s is an iterator\n",yytext);
{digit} printf("%s is a digit\n",yytext);
{number} printf("%s is a number\n",yytext);
{real} printf("%s is a real number\n",yytext);
{preprocessor} printf("%s is a preprocessor directive\n",yytext);
{delimiter} printf("%s is a delimiter\n",yytext);
{space} printf("Space is a delimiter\n");
{newline} printf("New line character\n");
{keyword} printf("%s is a keyword\n",yytext);
{non_identifier} printf("Could not process %s\n", yytext);
{identifier} printf("%s is an identifier\n",yytext);
{comment} printf("%s is a comment\n",yytext);
{arith_op} printf("%s is an arithmetic operator\n",yytext);
{logic_op} printf("%s is a logical operator\n",yytext);
{block_beg} printf("Block begins\n");
{block_end} printf("Block ends\n");
{file} printf("%s is a file\n", yytext);
{unary} printf("%s is a unary operator\n",yytext);
{function} printf("%s is a function\n", yytext);
{format_spec} printf("%s is a format specifier\n",yytext);
%%
main()
{
	yylex();
}

