#include <iostream>

using namespace std;


void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void swapByReference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 1, b = 2;
	cout << "a: " << a << ", b: " << b << endl;
	swapByValue(a, b);
	cout << "Swapping while passing by value->";
	cout << "a: " << a << ", b: " << b << endl;
	a = 1, b = 2;
	cout << "a: " << a << ", b: " << b << endl;
	swapByReference(a, b);
	cout << "Swapping while passing by reference->";
	cout << "a: " << a << ", b: " << b << endl;
}