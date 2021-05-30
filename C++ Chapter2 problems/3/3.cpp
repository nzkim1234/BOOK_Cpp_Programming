#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		cout << "큰 수 = " << b;
	}
	else
		cout << "큰 수 = " << a;
}