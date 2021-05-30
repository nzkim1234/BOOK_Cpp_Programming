#include <iostream>
using namespace std;

int main() {
	int *a;
	a = new int[5];
	cout << "정수 5개 입력 >>";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	cout << "평균 " << (double)(a[0] + a[1] + a[2] + a[3] + a[4]) / 5 << endl;
	delete[] a;
}