#include <iostream>
#include <string>



class Vector2d {
	double x;
	double y;

public:
	Vector2d(double x, double y) {
		this->x = x;
		this->y = y;
	}
	~Vector2d() {
		std::cout << "The object " << toString() << " has been destructed.\n";
	}
	double getX() {
		return x;
	}
	double getY() {
		return y;
	}
	void add(Vector2d& vec) {
		x += vec.x;
		y += vec.y;
	}
	std::string toString() {
		return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
	}
};

int main() {
	Vector2d pos(20, -10);
	Vector2d vel(2.5, 3.2);

	std::cout << "Initial Position ----------> P" << pos.toString() << std::endl;
	std::cout << "Initial Velocity ----------> V" << vel.toString() << std::endl;
	for (int i = 0; i < 10; i++) {
		pos.add(vel);
	}
	std::cout << "Position after 10 updates -> P" << pos.toString() << std::endl;
}