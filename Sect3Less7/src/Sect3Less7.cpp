//============================================================================
// Name        : Sect3Less7.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	//ofstream outFile;
	fstream outFile;

	string outFileName = "text.txt";

	//outFile.open(outFileName.c_str());
	outFile.open(outFileName.c_str(), ios::out);

	if (outFile.is_open()){
		outFile << "Hello there" << endl;
		outFile << "123" << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file: " << outFileName << endl;
	}

	return 0;
}
