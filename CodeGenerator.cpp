/*
 */
#include "CodeGenerator.h"

using namespace std;

/*
Stuff about the authors and file

*/


CodeGenerator::CodeGenerator (char * filename){
  seenMain = false;
    
  for(int i = 0; filename[i] != '.';i++)
  cppfile  += filename[i];
  cppfile += ".cpp";
  output.open(cppfile.c_str(), ios::trunc);

  output << "#include <iostream>" << endl;
  output << "#include \"Object.h\"\n" << endl;
  output << "using namespace std;" << endl;
  output << endl;
  
}
CodeGenerator::~CodeGenerator(){
  output.close();
  
}
void CodeGenerator::StartFunc(string funcName){
  
  if(funcName == "main"){
    seenMain = true;
    output << "int main(";
  }else{
    output << "Object " + funcName +'(';
  }
}

void CodeGenerator:: WriteCode(string code){
  output << code;
  
}

void CodeGenerator::PushStack(string){
  
  
}

string CodeGenerator::GetOperation(){

  
}

bool CodeGenerator::haveSeenMain(){
    return seenMain;
}
