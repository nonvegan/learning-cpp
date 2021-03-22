#include <iostream>
#include <string>

namespace custom {
	template <typename T> void swap(T& a, T& b) {
		T temp = a;
		a = b;
		b = temp;
	}
}



using namespace std;

int main() {
	int intX = 5;
	int intY = 10;
	cout << "intX --> " << to_string(intX) << " intY --> " << to_string(intY) << endl;
	cout << "Swapping the variables --> swap(intX,intY)" << endl;
	custom::swap(intX, intY);
	cout << "intX --> " << to_string(intX) << " intY --> " << to_string(intY) << endl << endl;

	double doubleX = 5.0;
	double doubleY = 10.0;
	cout << "doubleX --> " << to_string(doubleX) << " doubleY --> " << to_string(doubleY) << endl;
	cout << "Swapping the variables --> swap(doubleX,doubleY)" << endl;
	custom::swap(doubleX, doubleY);
	cout << "doubleX --> " << to_string(doubleX) << " doubleY --> " << to_string(doubleY) << endl;
}