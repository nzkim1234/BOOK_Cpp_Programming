#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person(int a = 1, string b = "grace", double c = 20.5) {
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