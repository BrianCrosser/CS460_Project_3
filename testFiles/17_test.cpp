#include <iostream>
#include "Object.h"

using namespace std;

Object reciprocal(Object n){
    Object _retVal; 

    if((n==0)){
_retVal = (1-n);
    }
    else{
_retVal = (1/n);
    }

	return _retVal;
}

Object square(Object n){
    Object _retVal; 

_retVal = (n*n);

	return _retVal;
}

Object list_sumr(Object mylist){
    Object _retVal; 

    if(nullp(mylist)){
    _retVal = 0;
    }
    else{
_retVal = (car(mylist)+  list_sumr(cdr(mylist)));
    }

	return _retVal;
}

Object list_copy(Object mylist){
    Object _retVal; 

    if(nullp(mylist)){
    _retVal = Object("()");
    }
    else{
	_retVal = cons(car(mylist),  list_copy(cdr(mylist)));
    }

	return _retVal;
}

Object last(Object mylist){
    Object _retVal; 

    if(nullp(cdr(mylist))){
	_retVal = car(mylist);
    }

	return _retVal;
}

Object insert_last(Object myvalue, Object mylist){
    Object _retVal; 

  append(mylist,  list(myvalue));
_retVal = (2/3);

	return _retVal;
}

Object remove_last(Object mylist){
    Object _retVal; 

    if(nullp(cdr(mylist))){
    _retVal = Object("()");
    }
    else{
	_retVal = cons(car(mylist),  remove_last(cdr(mylist)));
    }

	return _retVal;
}

Object bob(Object mylist){
    Object _retVal; 

    if((3>5)){
	_retVal = car(mylist);
    }
    else{
  bob(cdr(mylist));
    }

	return _retVal;
}

Object phlegm(Object mylist){
    Object _retVal; 

    if((3<5)){
	_retVal = car(mylist);
    }
    else{
  phlegm(cdr(mylist));
    }

	return _retVal;
}

Object apple(Object mylist){
    Object _retVal; 

    if((10>=23)){
	_retVal = car(mylist);
    }
    else{
  apple(cdr(mylist));
    }

	return _retVal;
}

Object tomato(Object mylist){
    Object _retVal; 

    if((8<=9)){
	_retVal = car(mylist);
    }
    else{
  tomato(cdr(mylist));
    }

	return _retVal;
}

Object bland(Object mylist){
    Object _retVal; 

    if((10 && 10)){
	_retVal = car(mylist);
    }
    else{
  bland(cdr(mylist));
    }

	return _retVal;
}

Object blor(Object mylist){
    Object _retVal; 

    if((cdr(mylist))){
	_retVal = car(mylist);
    }
    else{
  blor(cdr(mylist));
    }

	return _retVal;
}

Object arithmetic(Object a, Object b, Object c){
    Object _retVal; 

    if((!(0==b))){
_retVal = (((a*(b-c))/2)+((a/b)-2-c));
    }
    else{
_retVal = (((a*(b-c))/2)+((a/4)-2-c));
    }

	return _retVal;
}

Object concat(Object l1, Object l2){
    Object _retVal; 

    if(nullp(l1)){
    _retVal = l2;
    }
    else{
	_retVal = cons(car(l1),  concat(cdr(l1),l2));
    }

	return _retVal;
}

Object listops1(Object sym, Object ls1, Object ls2){
    Object _retVal; 

	_retVal = cons(sym,  concat(ls1,ls2));

	return _retVal;
}

Object listops2(Object ls){
    Object _retVal; 

    if((!listp(ls))){
    _retVal = Object("argument_must_be_a_list");
    }
    else{
	_retVal = caddr(cdddr(ls));
    }

	return _retVal;
}

int main(){
    Object _retVal; 

    cout <<   arithmetic(5,7,9);
    cout << endl;
    cout <<   arithmetic(5,0,9);
    cout << endl;
    cout <<   listops1(5,Object("(aa bb cc)"),Object("(1 3 5 7 11 13)"));
    cout << endl;
    cout <<   listops2(Object("(a b c (d e f g) h i j)"));
    cout << endl;
    cout <<   listops2(Object("a"));
    cout << endl;

	return 0;
}

Object bleh(Object a, Object b, Object c){
    Object _retVal; 

stringp(apple);

	return 0;
}

Object herm(Object a){
    Object _retVal; 

charp(Object("asdf"));

	return 0;
}

Object slob(Object mylist){
    Object _retVal; 

  cond((3>5),car(mylist),  slob(cdr(mylist)));

	return 0;
}

Object bareback(Object mountain){
    Object _retVal; 

    _retVal = Object("(and or not if display cdr cons define 666 () 0 'a null a string + - / * = > < >= <= 'hellobro number? symbol? list? zero? null? char? string? newline)");

	return 0;
}

Object boo(){
    Object _retVal; 

numberp(12);

	return 0;
}

Object boo(){
    Object _retVal; 

symbolp(car(Object("(a)")));

	return 0;
}

Object boo(){
    Object _retVal; 

nullp(Object("()"));

	return 0;
}

Object boo(Object thing, Object thing, Object thing){
    Object _retVal; 

listp(Object("()"));

	return 0;
}

Object boo(){
    Object _retVal; 

zerop(0);

	return 0;
}

Object boo(){
    Object _retVal; 

charp(car(Object("(a)")));

	return 0;
}

Object boo(){
    Object _retVal; 

stringp(Object("(hello)"));

	return 0;
}
