#ifndef CG_H
#define CG_H
#include <iostream>
#include <fstream>
#include <string>
#include <stack>
using namespace std;

/*
Stuff about the authors and file

*/

class CodeGenerator{
 public:
  CodeGenerator (char * filename);
  ~CodeGenerator();
  void StartFunc(string);
  void WriteCode(string);  
  void PushStack(string);
  string GetOperation();
  
 private:
  string cppfile;
  ofstream output;
  stack<string> operators;
  stack<char> operands;
  
};

#endif
