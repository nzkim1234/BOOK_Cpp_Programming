#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	while (true) {
		cout << "아래에 한줄을 입력하세요.(exit)를 입력하면 종료합니다." << endl << ">>";
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