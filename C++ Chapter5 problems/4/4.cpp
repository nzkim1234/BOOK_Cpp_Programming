#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else {
		if (a > b) {
			big = a;
		}
		else
			big = b;
		return false;
	}
}

int main() {
	int a, b, c;
	cin >> a >> b;
	bool d = bigger(a, b, c);
	if (d) {
		cout << "�� ���� ����.";
	}
	else {
		cout << "ū ��:" << c;
	}
}