#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int a,int b) {
		this->a = a;
		this->b = b;
	}
	void calculate() {
		cout << a + b << endl;
	}
};

class Sub {
	int a, b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void calculate() {
		cout << a - b << endl;
	}
};

class Mul {
	int a, b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void calculate() {
		cout << a * b << endl;
	}
};

class Div {
	int a, b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void calculate() {
		cout << a / b<<endl;
	}
};

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