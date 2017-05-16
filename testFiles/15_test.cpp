#include <iostream>
#include "Object.h"

using namespace std;

Object conThis(Object list){
    Object _retVal; 

	_retVal = cons(list,Object("()"));

	return _retVal;
}

int main(){
    Object _retVal; 

    cout <<   conThis(Object("(1 2 3 4)"));
    cout << endl;

	return 0;
}
