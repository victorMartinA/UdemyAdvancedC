//============================================================================
// Name        : Sect4Less16.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Rajash"] = 20;
	ages["Vicky"] = 30;

	ages["Mike"] = 70;

	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap);

	ages.insert(make_pair("Jacinto", 23));


	cout << ages["Rajash"] << endl;

	//cout << ages["Sue"] << endl;

	if (ages.find("Vicky") != ages.end()){
		cout << "Vicky has been found" << endl;
	}
	else{
		cout << "Key not found";
	}

	for(map<string, int>::iterator it=ages.begin(); it!=ages.end(); it++){
		pair<string, int> age = *it;
		cout << age.first << ":" << age.second << endl;
	}

	cout << " --------------- " << endl;

	for(map<string, int>::iterator it=ages.begin(); it!=ages.end(); it++){
		cout << it->first << ":" << it->second << endl;
	}

	return 0;
}
