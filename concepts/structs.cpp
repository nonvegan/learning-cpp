#include <iostream>
#include <string>



struct Vector2d {
	float x;
	float y;
};

int main() {
	Vector2d pos;
	Vector2d vel;
	pos.x = 20;
	pos.y = -10;
	vel.x = 2.5;
	vel.y = 3.2;
	std::cout << "Initial Position ----------> P(" << std::to_string(pos.x) << ',' << pos.y << ')' << std::endl;
	std::cout << "Initial Velocity ----------> V(" << std::to_string(vel.x) << ',' << std::to_string(vel.y) << ')' << std::endl;
	for (int i = 0; i < 10; i++) {
		pos.x += vel.x;
		pos.y += vel.y;
	}
	std::cout << "Position after 10 updates -> P(" << pos.x << ',' << pos.y << ')' << std::endl;
}