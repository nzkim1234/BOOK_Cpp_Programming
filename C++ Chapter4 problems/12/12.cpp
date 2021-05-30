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
			cout << "�� " << i + 1 << "�� �̸��� ������ >>";
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	}
	~CircleManager() {

	}
	void searchByName() {
		cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (p[i].getName() == name) {
				cout << name << "�� ������ " << p[i].getArea();
			}
		}
		cout << endl;
	}
	void searchByArea() {
		cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
		cin >> area;
		cout << area << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea()>area) {
				cout << name << "�� ������ " << p[i].getArea()<< ',';
			}
		}
		cout << endl;
	}
};

int main() {
	int a;
	cout << "���� ���� >> ";
	cin >> a;
	CircleManager circle(a);
	circle.searchByName();
	circle.searchByArea();
}