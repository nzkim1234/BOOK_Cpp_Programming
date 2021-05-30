#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 0;
	}
	Circle(int a) {
		radius = a;
	}
	int getradius(){
		return radius;
	}
};

void swap(Circle& a, Circle& b) {
	Circle c = a;
	a = b;
	b = c;
}

int main() {
	Circle a(10);
	Circle b(20);
	cout << a.getradius() << " " << b.getradius() << endl;
	swap(a, b);
	cout << a.getradius() << endl;
	cout<<b.getradius();
}