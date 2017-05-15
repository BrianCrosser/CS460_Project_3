#include <iostream>
#include "Object.h"

using namespace std;

Object add(Object num1, Object num2){
    Object _retVal;

    cout << (num1+num2);
    cout << endl;

    return _retVal;
}

int main(){
    Object _retVal;
    
    add(5, 7);
    
    return 0;
}
