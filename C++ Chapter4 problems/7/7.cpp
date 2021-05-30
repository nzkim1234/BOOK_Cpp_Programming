#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
};

int main() {
	int n;
	int count = 0;
	Circle* a = new Circle[3];
	for (int j = 0; j < 3; j++) {
		cout << "원 " << j+1 << "의 반지름 >> ";
		cin >> n;
		a[j].setRadius(n);
		if (a[j].getArea() > 100) {
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}