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
		cout << "********** 개시판입니다. **********" << endl;
		for (int i = 0; i <b; i++) {
			cout << i << ": " << text[i] << endl;
		}
	}
};

string Board::text[100];
int Board::b = 0;

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해주세요");
	Board::print();
	Board::add("진소린 학생이 경진대회를 입상하였습니다. 축하해주세요");
	Board::print();
}