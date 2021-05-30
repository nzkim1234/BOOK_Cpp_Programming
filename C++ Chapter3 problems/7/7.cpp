#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class SelectableRandom {
	int num;
public:
	SelectableRandom(string a) {
		srand((unsigned)time);
		if (a == "even") {
			num = 0;
		}
		else
			num = 1;
	}
	int next() {
		int n;
		if (num == 0) {
			while (true) {
				n = rand();
				if (n % 2 == 0)
					return n;
			}
		}
		else {
			while (true) {
				n = rand();
				if (n % 2 == 1)
					return n;
			}
		}
	}
	int nextInRange(int a, int b) {
		int n;
		if (num == 0) {
			while (true) {
				n = rand()%(b+1-a)+a;
				if (n % 2 == 0)
					return n;
			}
		}
		else {
			while (true) {
				n = rand() % (b + 1 - a) + a;
				if (n % 2 == 1)
					return n;
			}
		}
	}
};

int main() {
	SelectableRandom a("even"), b("odd");
	cout << "--0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = a.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = b.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}