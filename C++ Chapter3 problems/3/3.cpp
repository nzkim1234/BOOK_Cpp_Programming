#include <iostream>
using namespace std;

class Account {
	string name;
	int id, money;
public:
	Account(string name, int id, int money) {
		this->name = name;
		this->id = id;
		this->money = money;
	}
	void deposit(int plus) {
		money += plus;
	}
	string getOwner() {
		return name;
	}
	int inquiry() {
		return money;
	}
	int withdraw(int minus) {
		money -= minus;
		return money;
	}
};

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
}