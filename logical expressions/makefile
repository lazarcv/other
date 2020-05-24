GOAL = logical_expressions
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++14

$(GOAL): lex.yy.o parser.tab.o formula.o
	$(CXX) -o $@ $^

formula.o: formula.cpp formula.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

parser.tab.o: parser.tab.cpp parser.tab.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lex.yy.o: lex.yy.c parser.tab.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lex.yy.c: lexer.lex
	flex $<

parser.tab.hpp parser.tab.cpp: parser.ypp
	bison -v -d $<

