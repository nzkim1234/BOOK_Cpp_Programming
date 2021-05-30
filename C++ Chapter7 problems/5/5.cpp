#include <iostream>
using namespace std;

class Color {
	int R, G, B;
public:
	Color(int R = 0, int G = 0, int B = 0) {
		this->R = R;
		this->G = G;
		this->B = B;
	}
	void show() {
		cout << R << " " << G << " " << B << endl;
	}
	Color operator+(Color a) {
		Color b;
		b.R = R + a.R;
		b.B = B + a.B;
		b.G = G + a.G;
		return b;
	}
	bool operator==(Color a) {
		if (R == a.R && G == a.G && B == a.B)
			return true;
		else
			return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();
	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}