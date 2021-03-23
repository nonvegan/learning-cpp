#include <iostream>
#include <string>



class Vector2d {
	int x;
	int y;

public:
	static int nInstanciatedObjects;
	Vector2d(int x, int y) {
		this->x = x;
		this->y = y;
		nInstanciatedObjects++;
	}
	~Vector2d() {
		std::cout << "The object " << toString() << " has been destructed.\n";
		nInstanciatedObjects--;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void add(Vector2d& vec) {
		x += vec.x;
		y += vec.y;
	}

	void operator += (Vector2d& vec) {
		this->x += vec.x;
		this->y += vec.y;
	}

	Vector2d operator + (Vector2d& vec) {
		Vector2d newVec(x + vec.x, y + vec.y);
		return newVec;
	}

	bool operator == (Vector2d& vec) {
		return x == vec.x && y == vec.y;
	}

	std::string toString() {
		return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
	}
};

int Vector2d::nInstanciatedObjects = 0;

std::ostream& operator << (std::ostream& output, Vector2d& vec) {
	output << '(' << vec.getX() << ',' << vec.getY() << ')';
	return output;
}

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
