#include <iostream>
using namespace std;

int main() {
	int *a;
	a = new int[5];
	cout << "���� 5�� �Է� >>";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	cout << "��� " << (double)(a[0] + a[1] + a[2] + a[3] + a[4]) / 5 << endl;
	delete[] a;
}