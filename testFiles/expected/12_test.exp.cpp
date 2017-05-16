#include <iostream>
#include "Object.h"

using namespace std;

Object notTest(){
    Object _retVal;

    if(!listp(a)){
        cout << ("not a list");
    }    
    else{
        cout << ("is a list");
    }

    cout << endl;

    return _retVal;
}

int main(){
    Object _retVal;
    
    notTest();
    
    return 0;
}
