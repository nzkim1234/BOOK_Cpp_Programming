#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int count = 0;
	cout << "���ڿ� �Է�>>";
	getline(cin, a);
	int k = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		int n = a.find('a', i);
		if (a[n] > k) {
			count++;
			k=n+1;
		}
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�";
}