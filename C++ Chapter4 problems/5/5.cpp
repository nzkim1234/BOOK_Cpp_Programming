#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
	srand((unsigned)time);
	string a;
	int i;
	while (true) {
		cout << "�Ʒ��� ������ �Է��ϼ���.(exit)�� �Է��ϸ� �����մϴ�." << endl << ">>";
		getline(cin, a);
		if (a == "exit")
			break;
		else {
			i = rand() % (a.length());
			a[i] = (char)((rand() % (122 + 1 - 65)) + 65);
			cout << a << endl;
		}
	}
}