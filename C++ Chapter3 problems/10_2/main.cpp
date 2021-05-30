#include "Add.h"
#include "Div.h"
#include "Mul.h"
#include "Sub.h"

int main() {
	int num1, num2;
	char c;
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> num1 >> num2 >> c;
		switch (c) {
		case '+':
			a.setValue(num1, num2);
			a.calculate();
			break;
		case '-':
			s.setValue(num1, num2);
			s.calculate();
			break;
		case'*':
			m.setValue(num1, num2);
			m.calculate();
			break;
		case'/':
			d.setValue(num1, num2);
			d.calculate();
			break;
		default:
			break;
		}
	}
}