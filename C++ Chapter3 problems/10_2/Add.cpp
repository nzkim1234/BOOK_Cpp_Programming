#include "Add.h"

void Add::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
void Add::calculate() {
	cout << a + b << endl;
}