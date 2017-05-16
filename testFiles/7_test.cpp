#include <iostream>
#include "Object.h"

using namespace std;

Object add(Object num1, Object num2){
    Object _retVal; 

    cout << (num1+num2);
    cout << endl;

	return _retVal;
}

Object sub(Object num1){
    Object _retVal; 

    cout << (10-num1);
    cout << endl;

	return _retVal;
}

Object addMore(Object num1, Object num2, Object num3){
    Object _retVal; 

    cout << (num1+num2+num3);
    cout << endl;

	return _retVal;
}

int main(){
    Object _retVal; 

    add(5,7);
    sub(5);
    addMore(5,7,9);

	return 0;
}
