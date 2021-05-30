#include "Mul.h"

void Mul::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
void Mul::calculate() {
	cout << a * b << endl;
}