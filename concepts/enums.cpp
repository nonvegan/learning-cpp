#include <iostream>

using namespace std;

int main() {
	enum class Season { spring, summer, fall, winter };
	Season current = Season::fall;

	switch (current) {
	case Season::spring:
		cout << "It's Spring!" << endl;
		break;
	case Season::summer:
		cout << "It's Summer!" << endl;
		break;
	case Season::fall:
		cout << "It's Fall!" << endl;
		break;
	case Season::winter:
		cout << "It's winter!" << endl;
		break;
	default:
		cout << "I don't understand!" << endl;
		break;
	}
}