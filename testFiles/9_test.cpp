#include <iostream>
#include "Object.h"

using namespace std;

Object removeFirst(Object list){
    Object _retVal; 

	_retVal = car(list);

	return _retVal;
}

int main(){
    Object _retVal; 

    cout <<   removeFirst(    Object("(1 2 3 4)"));
    cout << endl;

	return 0;
}

