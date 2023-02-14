#include <iostream>
using namespace std;

class Square;  

class Rectangle {
	int width, height;

public:
	Rectangle(int w , int h):width(w),height(h){} 
	friend void display(Rectangle &, Square &);
};

class Square {
	int side;

public:
	Square(int s ):side(s){} 
	friend void display(Rectangle &, Square &);
};

void display(Rectangle &r, Square &s) {
	cout << "Rectangle: " << r.width * r.height << endl;
	cout << "Square: " << s.side * s.side << endl;
}

int main () {
	Rectangle rec(4,8);
	Square sq(6);
	display(rec,sq);
	return 0;
}