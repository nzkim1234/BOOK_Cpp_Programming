#include <iostream>
using namespace std;

class Matrix {
	int x[4];
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) {
		x[0] = a;
		x[1] = b;
		x[2] = c;
		x[3] = d;
	}
	void show() {
		cout << "Matrix = { " << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << " }" << endl;
	}
	Matrix operator+(Matrix a) {
		Matrix b;
		for (int i = 0; i < 4; i++) {
			b.x[i] = x[i] + a.x[i];
		}
		return b;
	}
	Matrix& operator+=(Matrix a) {
		for (int i = 0; i < 4; i++) {
			x[i] += a.x[i];
		}
		return *this;
	}
	bool operator==(Matrix a) {
		for (int i = 0; i < 3; i++) {
			if (x[i] != a.x[i])
				return false;
		}
		return true;
	}
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}