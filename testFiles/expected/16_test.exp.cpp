#include <iostream>
#include "Object.h"

using namespace std;

Object arithmetic(Object a, Object b, Object c){
    Object _retVal;

    if(!(0 == b)){
        _retVal = (((a* (b-c))/ 2) + ((a/b)-2-c));
    }
    else{
        _retVal = (((a* (b-c))/ 2) + ((a/4)-2-c));
    }
    return _retVal;
}

Object concat(Object l1, Object l2){
    Object _retVal;

    if(nullp(l1)){
        _retVal = l2;
    }
    else{
        _retVal = cons(car(l1), (concat(cdr(l1), l2)));
    }
    return _retVal;
}

Object listops1(Object sym, Object ls1, Object ls2){
    Object _retVal;

    _retVal = cons (sym, (concat (ls1, ls2)));
    return _retVal;
}

Object listops2(Object ls){
    Object _retVal;
    
    if(!listp(ls)){
        _retVal = Object("argument_must_be_a_list");
    }
    else{
        _retVal = caddr(caddr(ls));
    }
    return _retVal;
}

int main(){
    Object _retVal;

    cout << arithmetic(5,7,9);
    cout << endl;
    cout << arithmetic(5,0,9);
    cout << endl;
    cout << listops1(5, Object("(aa bb cc)"), Object("(1 3 5 7 11 13)"));
    cout << endl;
    cout << listops2(Object("(a b c (d e f g) h i j)"));
    cout << endl;
    cout << listops2(Object("a"));
    cout << endl;

    return 0;
}
