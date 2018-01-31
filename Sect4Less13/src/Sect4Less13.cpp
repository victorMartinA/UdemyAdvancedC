#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> numbersVect(0);

	int capacityVect = numbersVect.capacity();
	int sizeVect = numbersVect.size();
	cout << "Capacity: " << capacityVect << endl;
	cout << "Size: " << sizeVect << endl;
	for(int i=0; i<10000; i++){
		if (numbersVect.capacity() != capacityVect){
			capacityVect = numbersVect.capacity();
			cout << "Capacity: " << capacityVect << endl;
		}
		numbersVect.push_back(i);
	}

	cout << " ------------------ " << endl;

	//numbersVect.clear();
	//numbersVect.resize(100);
	numbersVect.reserve(1000000);

	capacityVect = numbersVect.capacity();
	sizeVect = numbersVect.size();
	cout << "Capacity: " << capacityVect << endl;
	cout << "Size: " << sizeVect << endl;

	return 0;
}
