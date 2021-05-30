#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Random {
public:
	static void seed() {
		srand((unsigned)time);
	}
	static int nextInt(int min = 0, int max = 32767) {
		int a = rand() % (max + 1 - min) + min;
		return a;
	}
	static char nextAlphabet() {
		char a;
		int n = rand() % 2;
		int alpha;
		if(n==0)
			alpha = rand() % (90 + 1 - 65) + 65;
		else
			alpha = rand() % (122 + 1 - 97) + 97;
		a = alpha;
		return a;
	}
	static double nextDouble() {
		double a  = ((double)rand())/(RAND_MAX+1);
		return a;
	}
};

int main() {
	Random a;
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << a.nextInt(1,100)<<' ';
	}
	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << a.nextAlphabet() << ' ';
	}
	cout << endl << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << a.nextDouble() << ' ';
	}
	cout << endl;
}