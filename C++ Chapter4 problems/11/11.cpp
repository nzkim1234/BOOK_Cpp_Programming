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
		cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
	}
public:
	void run() {
		int n;
		cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
		while (true) {
			cout << "�޴��� �����ּ���(1.����������, 2.�Ƹ޸�ī��, 3.����Ŀ��, 4.�ܷ�����, 5.ä���) >>";
			cin >> n;
			switch (n) {
			case(1):
				if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
					cout << "���ᰡ �����մϴ�." << endl;
				}
				else {
					selectEspresso();
					cout<<"���������� �弼��."<<endl;
				}
				break;
			case(2):
				if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
					cout << "���ᰡ �����մϴ�." << endl;
				}
				else {
					selectAmericano();
					cout << "�Ƹ޸�ī�� �弼��." << endl;
				}
				break;
			case(3):
				if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize()<1) {
					cout << "���ᰡ �����մϴ�." << endl;
				}
				else {
					selectSugarCoffee();
					cout << "����Ŀ�� �弼��." << endl;
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