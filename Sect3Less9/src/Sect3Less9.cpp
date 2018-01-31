//============================================================================
// Name        : Sect3Less9.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream input;
	string filename = "stats.txt";

	input.open(filename.c_str());

	if (!input.is_open()){
		return 1;
	}

	while (input){
		string line;

		getline(input, line, ':');
		int population;

		input >> population;

		if (!input){
			break;
		}

		//input.get();
		input >> ws;

		cout << line << " -- " << population << endl;

	}

	input.close();

	return 0;
}
