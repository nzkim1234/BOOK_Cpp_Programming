#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	while (true) {
		cout << "�Ʒ��� ������ �Է��ϼ���.(exit)�� �Է��ϸ� �����մϴ�." << endl << ">>";
		getline(cin, a);
		if (a == "exit")
			break;
		else {
			for (int i = a.length()-1; i >= 0; i--) {
				cout << a[i];
			}
			cout << endl;
		}
	}
}