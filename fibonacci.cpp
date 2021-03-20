#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void fibonnaci(int n) {
	int c = 0, prevPrev = 0, prev = 1, next;
	while (c < n) {
		if (c > 1) {
			next = prev + prevPrev;
			prevPrev = prev;
			prev = next;
			cout << prev;
		}
		else if (c == 1)cout << prev;
		else if (c == 0)cout << prevPrev;
		(++c < n) ? cout << ", " : cout << ".";
	}
};

int main() {
	while (true) {
		cout << "How many elements of the fibonnaci sequence would you like to know? ";
		int n;
		cin >> n;
		fibonnaci(n);
		cout << endl;
	}
}
