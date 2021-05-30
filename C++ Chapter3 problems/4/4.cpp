#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int sugar;
	int water;
public:
	CoffeeMachine(int coffee, int water, int sugar) {
		this->coffee = coffee;
		this->water = water;
		this->sugar = sugar;
	}
	void drinkEspresso() {
		coffee--;
		water--;
	}
	void drinkAmericano() {
		coffee--;
		water = water - 2;
	}
	void drinkSugarCoffee() {
		coffee--;
		water = water - 2;
		sugar--;
	}
	void fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
	}
	void show() {
		cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << " ��:" << water << " ����:" << sugar << endl;
	}

};

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}