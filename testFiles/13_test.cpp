#include <iostream>
#include "Object.h"

using namespace std;

Object andTest(){
    Object _retVal; 

    if(((4<5) && (5>2) && (5==5))){
    cout << 1;
    }
    else{
    cout << 0;
    }
    cout << endl;

	return _retVal;
}

Object orTest(){
    Object _retVal; 

    if(((6<5) || (6==6) || (3>1))){
    cout << 1;
    }
    else{
    cout << 0;
    }

	return _retVal;
}

int main(){
    Object _retVal; 

  andTest();
  orTest();

	return 0;
}

