#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower() {
		height = 1;
	}
	Tower(int height) {
		this->height = height;
	}
	int getHeight() {
		return height;
	}
};

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "���� " << endl;
	cout << "���̴� " << seoulTower.getHeight() << "���� " << endl;
}