#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {
		;
	}
	string getName() {
		return name;
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	Person* a = new Person[3];
	string name, tel;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">>";
		cin >> name >> tel;
		a[i].set(name, tel);
	}
	cout << "��� ����� �̸��� " << a[0].getName() << ' ' << a[1].getName() << ' ' << a[2].getName() << endl;
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (name == a[i].getName())
			cout << a[i].getTel();
	}
}