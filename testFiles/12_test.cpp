#include <iostream>
#include "Object.h"

using namespace std;

Object notTest(){
    Object _retVal; 

    if((!listp(Object("a")))){
    cout << Object("not_a_list");
    }
    else{
    cout << Object("is_a_list");
    }
    cout << endl;

	return _retVal;
}

int main(){
    Object _retVal; 

  notTest();

	return 0;
}
