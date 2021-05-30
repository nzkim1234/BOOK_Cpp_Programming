#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int count = 0;
	cout << "문자열 입력>>";
	getline(cin,a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'a')
			count++;
	}
	cout << "문자 a는 " << count << "개 있습니다";
}