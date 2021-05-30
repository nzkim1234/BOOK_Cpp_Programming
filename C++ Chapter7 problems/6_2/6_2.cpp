#include <iostream>
using namespace std;

class Matrix {
	int x[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		x[0] = a;
		x[1] = b;
		x[2] = c;
		x[3] = d;
	}
	void show() {
		cout << "Matrix = { " << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << " }" << endl;
	}
	friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix operator+=(Matrix a, Matrix b);
	friend bool operator==(Matrix a, Matrix b);
};

Matrix operator+(Matrix a, Matrix b) {
	Matrix c;
	for (int i = 0; i < 4; i++) {
		c.x[i] = a.x[i] + b.x[i];
	}
	return c;
}
Matrix operator+=(Matrix a, Matrix b) {
	for (int i = 0; i < 4; i++) {
		a.x[i] += b.x[i];
	}
	return a;
}
bool operator==(Matrix a, Matrix b) {
	for (int i = 0; i < 4; i++) {
		if (a.x[i] != b.x[i])
			return false;
	}
	return true;
}

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