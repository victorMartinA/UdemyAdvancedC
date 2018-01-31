//============================================================================
// Name        : Sect4Less17.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(): name(""), age(0){

	}

	//provide a copy constructor to not copy the pointers of the value
	Person(const Person &other){
		cout << "Copy constructor running" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
	 	 name(name), age(age){

	}

	void print() {
		cout << name << ": " << age << endl;
	}
};


int main() {

	map<int, Person> people;
	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);
	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(55, Person("Sue", 45)));

	for(map<int, Person>::iterator it=people.begin(); it!=people.end(); it++){
		cout << it->first << ": " << flush;
		it->second.print();
	}

	return 0;
}
