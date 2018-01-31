//============================================================================
// Name        : Sect4Less19.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {

	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vicky"));
	lookup.insert(make_pair(30, "Raj"));
	lookup.insert(make_pair(20, "Bob"));

	for (multimap<int, string>::iterator it=lookup.begin(); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << " ------------------ " << endl;

	for(multimap<int, string>::iterator it=lookup.find(10); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << " ------------------ " << endl;

	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
	for(multimap<int, string>::iterator it=its.first; it != its.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << " ------------------ " << endl;
	//optimal C++11
	auto its2 = lookup.equal_range(30);
	for(auto it=its2.first; it != its2.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}


	return 0;
}
