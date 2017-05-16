#include <iostream>
#include "Object.h"

using namespace std;

Object less(){
    Object _retVal; 

    cout << (5<7);
    cout << endl;
    cout << (7<5);
    cout << endl;
    cout << (5<5);
    cout << endl;

	return _retVal;
}

Object great(){
    Object _retVal; 

    cout << (5>7);
    cout << endl;
    cout << (7>5);
    cout << endl;
    cout << (5>5);
    cout << endl;

	return _retVal;
}

Object less_equal(){
    Object _retVal; 

    cout << (5<=7);
    cout << endl;
    cout << (7<=5);
    cout << endl;
    cout << (5<=5);
    cout << endl;

	return _retVal;
}

Object great_equal(){
    Object _retVal; 

    cout << (5>=7);
    cout << endl;
    cout << (7>=5);
    cout << endl;
    cout << (5>=5);
    cout << endl;

	return _retVal;
}

Object equal_to(Object num1, Object num2){
    Object _retVal; 

    cout << (num1==num2);
    cout << endl;
    cout << ((num1+1)==num2);
    cout << endl;
    cout << (num1==(num2+1));
    cout << endl;

	return _retVal;
}

int main(){
    Object _retVal; 

  less();
  great();
  less_equal();
  great_equal();
  equal_to(6,6);

	return 0;
}
