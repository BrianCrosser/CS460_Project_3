#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

enum obj_type {NONE, INT, REAL, STRING, LIST};
	
class Object
{
    public:
	Object();
	Object (const int & value);
	Object (const double & value);
	Object (const string & value);
	bool operator == (const Object & O) const;
	bool operator != (const Object & O) const;
	bool operator < (const Object & O) const;
	bool operator <= (const Object & O) const;
	bool operator > (const Object & O) const;
	bool operator >= (const Object & O) const;
	Object operator + (const Object & O) const;
	Object operator - (const Object & O) const;
	Object operator * (const Object & O) const;
	Object operator / (const Object & O) const;
	friend bool numberp (const Object & O);
	friend bool symbolp (const Object & O);
	friend bool listp (const Object & O);
	friend bool zerop (const Object & O);
	friend bool nullp (const Object & O);
	friend bool charp (const Object & O);
	friend bool stringp (const Object & O);
	friend Object car (const Object & O);
	friend Object cdr (const Object & O);
	friend Object cadr (const Object & O);
	friend Object cddr (const Object & O);
	friend Object caddr (const Object & O);
	friend Object cdddr (const Object & O);
	friend Object cons (const Object & O1, const Object O2);
	friend ostream & operator << (ostream & outs, const Object & O);
    private:
	Object (stringstream & ss);
	void MakeName ();
	obj_type type;
	string name;
	int intval;
	double realval;
	string strval;
	vector <Object> listval;
};
