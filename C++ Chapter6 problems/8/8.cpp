#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string tag[100];
	static string debug[100];
	static int size;
public:
	static void put(string a, string b) {
		tag[size] = a;
		debug[size] = b;
		size++;
	}
	static void print(string a=" ") {
		if (a == " ") {
			cout << "----- 모든 태그의 Trace 정보를 출력합니다. -----" << endl;
			for (int i = 0; i < size; ++i)
				cout << tag[i] << ":" << debug[i] << endl;
		}
		else {
			cout << "----- " << a << "태그의 Trace 정보를 출력합니다. -----" << endl;
			for (int i = 0; i < size; ++i) {
				if (tag[i] == "f()")
					cout << tag[i] << ":" << debug[i] << endl;
			}
		}
	}
};
int Trace::size = 0;
string Trace::tag[100];
string Trace::debug[100];
void f() {
	int a, b, c;
	cout << "두개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램을 시작합니다");
	f();
	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();
}