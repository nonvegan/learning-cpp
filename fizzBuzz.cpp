#include <iostream>
#include <string>

using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		if (!(i % 3) && !(i % 5)) {
			cout << "FizzBuzz" << endl;
		}
		else if (!(i % 3)) {
			cout << "Fizz" << endl;
		}
		else if (!(i % 5)) {
			cout << "Buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	cout << "<-->" << endl;
	int i = 1;
	while (i < 101) {
		string output = "";
		if (!(i % 3))output.append("Fizz");
		if (!(i % 5))output.append("Buzz");
		if (output.empty())output.append(to_string(i));
		cout << output << endl;
		i++;
	}
}