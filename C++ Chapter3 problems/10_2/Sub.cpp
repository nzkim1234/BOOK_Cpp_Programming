#include "Sub.h"

void Sub::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
void Sub::calculate() {
	cout << a - b << endl;
}