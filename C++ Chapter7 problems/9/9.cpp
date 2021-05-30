#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	void show() {
		cout << "Radius = " << radius << "ÀÎ ¿ø" << endl;
	}
	friend Circle operator+(int a, Circle b);
};

Circle operator+(int a, Circle b) {
	b.radius = a + b.radius;
	return b;
}

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}