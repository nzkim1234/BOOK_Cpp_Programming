#include "Div.h"

void Div::setValue(int a, int b) {
	this->a = a;
	this->b = b;
}
void Div::calculate() {
	cout << a / b << endl;
}