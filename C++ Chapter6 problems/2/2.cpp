#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() {
		id = 1;
		name = "grace";
		weight = 20.5;
	}
	Person(int a, string b) {
		id = a;
		name = b;
		weight = 20.5;
	}
	Person(int a, string b, double c) {
		id = a;
		name = b;
		weight = c;
	}
	void show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}