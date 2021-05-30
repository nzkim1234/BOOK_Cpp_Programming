#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() {
		tos = 0;
	}
	MyIntStack(int size) {
		this->size = size;;
		tos = 0;
		p = new int[size];
	}
	MyIntStack(MyIntStack& s) {
		this->p = s.p;
		this->size = s.size;
		this->tos = s.tos;
	}
	~MyIntStack() {

	}
	bool push(int n) {
		if (tos < size) {
			p[tos++] = n;
			return true;
		}
		else
			return false;
	}
	bool pop(int& n) {
		if (tos > 0) {
			n = p[--tos];
			return true;
		}
		else
			return false;
	}
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값" << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값" << n << endl;
}