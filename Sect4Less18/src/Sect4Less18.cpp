//============================================================================
// Name        : Sect4Less18.cpp
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
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
	 	 name(name), age(age){

	}

	void print() const {
		cout << name << ": " << age << flush;
	}

	//bboth const our method cannot overload the own parameters and the parameter passed.
	// Overload < operator
	bool operator<(const Person &other) const {
		if (name == other.name){
			return age < other.age;
		}
		else{
			return name < other.name;
		}
	}
};


int main() {

	map<Person, int> people;

	people[Person("Mike", 40)] = 4;
	people[Person("Mike", 40)] = 432;
	people[Person("Mike", 321)] = 31;
	people[Person("Vicky", 30)] = 3;
	people[Person("Raj", 20)] = 2;

	for(map<Person, int>::iterator it=people.begin(); it!=people.end(); it++){
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}

	return 0;
}
