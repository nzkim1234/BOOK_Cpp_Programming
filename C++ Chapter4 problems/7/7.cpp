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
		cout << "�� " << j+1 << "�� ������ >> ";
		cin >> n;
		a[j].setRadius(n);
		if (a[j].getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;
}