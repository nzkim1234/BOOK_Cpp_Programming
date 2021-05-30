#include <iostream>
using namespace std;

class Stack {
	int* a;
	int index;
public:
	Stack() {
		a = new int[100];
		index = 0;
	}
	bool operator!() {
		if (index == 0)
			return true;
		else
			return false;
	}
	Stack& operator<<(int b) {
		a[index++] = b;
		return *this;
	}
	Stack& operator>>(int& b) {
		b = a[--index];
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack)
			break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}