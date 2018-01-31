//============================================================================
// Name        : Sect4Less12.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<string> stringsVect;

	stringsVect.push_back("First item");
	stringsVect.push_back("Second item");
	stringsVect.push_back("Third item");

	for (int i=0; i<stringsVect.size(); i++){
		cout << "Item " << i << ": " << stringsVect[i] << endl;
	}

	cout << "------------------" << endl;

	for (vector<string>::iterator it = stringsVect.begin(); it != stringsVect.end(); it++){
		cout << "Item: " << *it << endl;
	}

	cout << "------------------" << endl;

	for (vector<string>::reverse_iterator it = stringsVect.rbegin(); it != stringsVect.rend(); it++){
		cout << "Item: " << *it << endl;
	}

	return 0;
}
