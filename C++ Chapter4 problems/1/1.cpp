#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() {
		red = green = blue = 0;
	}
	Color(int r, int g, int b) {
		red = r;
		blue = b;
		green = g;
	}
	void setColor(int r, int g, int b) {
		red = r;
		blue = b;
		green = g;
	}
	void show() {
		cout << red << "\t" << green << "\t" << blue << endl;
	}
};

int main() {
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();
	Color a[3];
	p = a;
	p->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255);
	p->show();
	p[1].show();
	p[2].show();
}