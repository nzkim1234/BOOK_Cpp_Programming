#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int count = 0;
	cout << "���ڿ� �Է�>>";
	getline(cin,a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'a')
			count++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�";
}