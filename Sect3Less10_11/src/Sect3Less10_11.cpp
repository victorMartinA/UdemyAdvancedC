//============================================================================
// Name        : Sect3Less10_11.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)


struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int main() {

	string fileName = "test.bin";
	fstream outputFile;
	fstream inputFile;
	Person someone = {"Frodo", 220, 0.80};
	Person someoneElse = {};

	//cout << sizeof(Person) << endl;

	//////// Write binary file ///////////////
	outputFile.open(fileName.c_str(), ios::binary|ios::out);

	if (outputFile.is_open()){

		//outputFile.write((char *)&someone, sizeof(Person));
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	}
	else {
		cout << "Could not create file " + fileName;
	}


	//////// Read binary file ///////////////
	outputFile.open(fileName.c_str(), ios::binary|ios::in);

	if (outputFile.is_open()){

		//outputFile.write((char *)&someone, sizeof(Person));
		outputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		outputFile.close();
	}
	else {
		cout << "Could not read file " + fileName;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;


	return 0;
}
