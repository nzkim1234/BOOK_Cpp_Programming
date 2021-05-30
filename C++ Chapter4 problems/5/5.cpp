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
		cout << "아래에 한줄을 입력하세요.(exit)를 입력하면 종료합니다." << endl << ">>";
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