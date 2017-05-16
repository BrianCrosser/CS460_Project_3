#include <iostream>
#include "Object.h"

using namespace std;

Object stuff(){
    Object _retVal; 

    _retVal =     Object("(a b c)");
    _retVal =     Object("a");
    _retVal =     Object("'v");
    _retVal =     Object("display");

	return _retVal;
}

int main(){
    Object _retVal; 

  stuff();

	return 0;
}
