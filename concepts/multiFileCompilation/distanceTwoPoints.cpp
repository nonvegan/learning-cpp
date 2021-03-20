#include <iostream>
#include <string>
#include "functions.h"

using namespace std;
int main() {
	int x1 = -3, y1 = 4, x2 = 20, y2 = -10;
	double distancePoints = distance(x1, y1, x2, y2);
	cout << "Distance between the points (" + to_string(x1) + ',' + to_string(y1) + "),(" + to_string(x2) + ',' + to_string(y2) + ") is " + to_string(distancePoints) + '.' << endl;
}