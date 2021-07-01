%option noyywrap
%option nounput
%option noinput

%{
#include <iostream>
#include <string>
#include <cstdlib>
#include "formula.hpp"
#include "parser.tab.hpp"
%}
#i was faster this time
%%
[a-z][a-z0-9]*   {
    yylval.str_type=new std::string(yytext);
    return id_token;
}
"\\/"               {
    return or_token;
}
"/\\"               {
    return and_token;
}
"<=>"               {
    return eq_token;
}
"=>"                {
    return imp_token;
}
":="                {
    return assign_token;
}
"True"              {
    return true_token;
}
"False"             {
    return false_token;
}
"Undef"             {
    return undef_token;
}
[!\n()]             {
    return *yytext;
}
[ \t]               {}
.                   {
    std::cerr<<"Lexical error: "<<*yytext<<std::endl;
    exit(EXIT_FAILURE);
}
%%
