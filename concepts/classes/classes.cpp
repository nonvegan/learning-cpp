#include <iostream>
#include <string>
#include "vector2d.h"

int main() {
	Vector2d pos(20, -10);
	Vector2d vel(2, 3);
	std::cout << "Initial Position ----------> P" << pos << std::endl;
	std::cout << "Initial Velocity ----------> V" << vel.toString() << std::endl;
	for (int i = 0; i < 10; i++) {
		pos += vel;
	}
	std::cout << "Position after 10 updates -> P" << pos.toString() << std::endl;
	Vector2d testPos(40, 20);
	pos == testPos ? (std::cout << "These positions match!" << std::endl) : (std::cout << "These positions don't match!" << std::endl);
	std::cout << "Number of instanciated objects ---> " << Vector2d::nInstanciatedObjects << std::endl;
}
