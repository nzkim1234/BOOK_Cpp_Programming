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
	int i;
	int n;
	int count = 0;
	cout << "원의 개수 >> ";
	cin >> i;
	Circle* a = new Circle[i];
	for (int j = 0; j < i; j++) {
		cout << "원 " << j + 1 << "의 반지름 >>";
		cin >> n;
		a[j].setRadius(n);
		if (a[j].getArea() > 100) {
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}