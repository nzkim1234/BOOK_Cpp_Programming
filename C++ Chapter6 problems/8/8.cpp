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
			cout << "----- ��� �±��� Trace ������ ����մϴ�. -----" << endl;
			for (int i = 0; i < size; ++i)
				cout << tag[i] << ":" << debug[i] << endl;
		}
		else {
			cout << "----- " << a << "�±��� Trace ������ ����մϴ�. -----" << endl;
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
	cout << "�ΰ��� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷��� �����մϴ�");
	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();
}