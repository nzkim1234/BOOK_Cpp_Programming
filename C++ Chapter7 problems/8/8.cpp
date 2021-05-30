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
	Circle& operator++() {
		radius++;
		return *this;
	}
	Circle operator++(int x) {
		Circle a = *this;
		radius++;
		return a;
	}
};

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}