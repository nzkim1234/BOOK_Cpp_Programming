#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() {
		size = 10;
	}
	void fill() {
		size = 10;
	}
	void consume() {
		size--;
	}
	int getSize() {
		return size;
	}
};

class CoffeVendingMachine {
	Container tong[3];
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
	}
	void selectEspresso() {
		tong[0].consume();
		tong[1].consume();
	}
	void selectAmericano() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
	void selectSugarCoffee() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
	void show() {
		cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
	}
public:
	void run() {
		int n;
		cout << "***** 커피자판기를 작동합니다. *****" << endl;
		while (true) {
			cout << "메뉴를 눌러주세요(1.에스프레소, 2.아메리카노, 3.설탕커피, 4.잔량보기, 5.채우기) >>";
			cin >> n;
			switch (n) {
			case(1):
				if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
					cout << "원료가 부족합니다." << endl;
				}
				else {
					selectEspresso();
					cout<<"에스프레소 드세요."<<endl;
				}
				break;
			case(2):
				if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
					cout << "원료가 부족합니다." << endl;
				}
				else {
					selectAmericano();
					cout << "아메리카노 드세요." << endl;
				}
				break;
			case(3):
				if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize()<1) {
					cout << "원료가 부족합니다." << endl;
				}
				else {
					selectSugarCoffee();
					cout << "설탕커피 드세요." << endl;
				}
				break;
			case(4):
				show();
				break;
			case(5):
				fill();
				show();
				break;
			default:
				;
			}
		}
	}
};

int main() {
	CoffeVendingMachine a;
	a.run();
}