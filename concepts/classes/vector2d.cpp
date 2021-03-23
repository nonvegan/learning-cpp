#include "vector2d.h"

Vector2d::Vector2d(int x, int y) {
	this->x = x;
	this->y = y;
	nInstanciatedObjects++;
}
Vector2d::~Vector2d() {
	std::cout << "The object " << toString() << " has been destructed.\n";
	nInstanciatedObjects--;
}
int Vector2d::getX() {
	return x;
}
int Vector2d::getY() {
	return y;
}
void Vector2d::add(Vector2d& vec) {
	x += vec.x;
	y += vec.y;
}

void Vector2d::operator += (Vector2d& vec) {
	this->x += vec.x;
	this->y += vec.y;
}

Vector2d Vector2d::operator + (Vector2d& vec) {
	Vector2d newVec(x + vec.x, y + vec.y);
	return newVec;
}

bool Vector2d::operator == (Vector2d& vec) {
	return x == vec.x && y == vec.y;
}

std::string Vector2d::toString() {
	return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}

int Vector2d::nInstanciatedObjects = 0;

std::ostream& operator << (std::ostream& output, Vector2d& vec) {
	output << '(' << vec.getX() << ',' << vec.getY() << ')';
	return output;
}
