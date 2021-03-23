#include <iostream>
#include <string>
#ifndef VECTOR2D_H
#define VECTOR2D_H
class Vector2d {
	int x;
	int y;

	public:
		static int nInstanciatedObjects;
		Vector2d(int x, int y);
		~Vector2d();
		int getX();
		int getY();
		void add(Vector2d& vec);
		void operator += (Vector2d& vec);
		Vector2d operator + (Vector2d& vec);
		bool operator == (Vector2d& vec);
		std::string toString();
};

std::ostream& operator << (std::ostream& output, Vector2d& vec);

#endif 
