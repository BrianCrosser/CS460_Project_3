#include <iostream>
#include "Object.h"

using namespace std;

Object andTest(){
    Object _retVal;

    if(4<5 && 5>2){
        cout << ("true");
    }    
    else{
        cout << ("false");
    }

    cout << endl;

    return _retVal;
}

int main(){
    Object _retVal;
    
    andTest();
    
    return 0;
}
