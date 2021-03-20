#include <iostream>
#include <math.h>

using namespace std;

double root(double a, double b = 2)
{
	return pow(a, 1. / b);
}

int main()
{
	cout << "root(16,2)-->" << root(16, 2) << endl;
	cout << "root(16)-->" << root(16) << endl;
	cout << "root(16)-->" << root(25, 5) << endl;
}