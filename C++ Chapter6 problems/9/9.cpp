#include <iostream>
#include <string>
using namespace std;

class Board {
	static string text[100];
	static int b;
public:
	static void add(string a) {
		text[b++] = a;
	}
	static void print() {
		cout << "********** �������Դϴ�. **********" << endl;
		for (int i = 0; i <b; i++) {
			cout << i << ": " << text[i] << endl;
		}
	}
};

string Board::text[100];
int Board::b = 0;

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿����ּ���");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ�� �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}