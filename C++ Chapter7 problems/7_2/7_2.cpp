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
	friend Matrix operator>>(Matrix a, int b[]);
	friend Matrix operator<<(Matrix& a, int b[]);
};

Matrix operator>>(Matrix a, int b[]) {
	for (int i = 0; i < 4; i++) {
		b[i] = a.x[i];
	}
	return a;
}

Matrix operator<<(Matrix& a, int b[]) {
	for (int i = 0; i < 4; i++) {
		a.x[i] = b[i];
	}
	return a;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++) {
		cout << x[i] << ' ';
	}
	cout << endl;
	b.show();
}