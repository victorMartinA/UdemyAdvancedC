//============================================================================
// Name        : Sect3Less8.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	string inFileName = "text.txt";

	ifstream inFile;

	inFile.open(inFileName.c_str(), ios::in);

	if(inFile.is_open()){
		string line;

		//while(!inFile.eof()){
		while(inFile){
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();

	}
	else{
		cout << "Cannot open file: " << inFileName << endl;
	}

	return 0;
}
