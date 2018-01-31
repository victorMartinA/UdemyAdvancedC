//============================================================================
// Name        : Sect2Less5.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
#include <exception>

using namespace std;



struct S { // The type has to be polymorphic
    virtual void f();
};



class MyException: public exception {
public:
	virtual const char* what() const throw() {
		return "Something bad happened";
	}
};

class MyOwnBadTypeException: public exception  {
public:
	virtual const char* what() const throw() {
		return "My own bad type exception";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}

	void myOwnBadTypeExc() {

		try {
			S* p = nullptr;
		    const char * strResult = typeid(*p).name();
		}
		catch (std::bad_typeid& bt) {
			throw MyOwnBadTypeException();
		}
	}
};

int main() {

	Test test;

	try {
		test.goesWrong();
	}
	catch(MyException &e) {
		cout << e.what() << endl;
	}

	try {
		test.myOwnBadTypeExc();
	}
	catch(MyOwnBadTypeException &e) {
		cout << e.what() << endl;
	}

	return 0;
}
