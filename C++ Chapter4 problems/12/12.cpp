#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
	string getName() {
		return name;
	}
};

class CircleManager {
	Circle* p;
	int size;
	int area;
	string name;
	int radius;
public:
	CircleManager(int size) {
		this->size = size;
		p = new Circle[size];
		for (int i = 0; i < size; i++) {
			cout << "원 " << i + 1 << "의 이름과 반지름 >>";
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	}
	~CircleManager() {

	}
	void searchByName() {
		cout << "검색하고자 하는 원의 이름 >> ";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (p[i].getName() == name) {
				cout << name << "의 면적은 " << p[i].getArea();
			}
		}
		cout << endl;
	}
	void searchByArea() {
		cout << "최소 면적을 정수로 입력하세요 >> ";
		cin >> area;
		cout << area << "보다 큰 원을 검색합니다." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea()>area) {
				cout << name << "의 면적은 " << p[i].getArea()<< ',';
			}
		}
		cout << endl;
	}
};

int main() {
	int a;
	cout << "원의 개수 >> ";
	cin >> a;
	CircleManager circle(a);
	circle.searchByName();
	circle.searchByArea();
}