#include <iostream>
#include <math.h>

using namespace std;

int area(int x) {
	return pow(x, 2);
}

int area(int x, int y) {
	return x * y;
}

int main() {
	cout << "area(3)-->" << area(3) << endl;
	cout << "area(3, 3)-->" << area(3, 3) << endl;
	cout << "area(4, 3)-->" << area(4, 3) << endl;
}