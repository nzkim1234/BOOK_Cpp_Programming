#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom() {
		srand((unsigned)time);
	}
	int next() {
		int n;
		while (true) {
			n = rand();
			if (n % 2 == 0)
				return n;
		}
	}
	int nextInRange(int a, int b) {
		int n;
		while (true) {
			n = rand() % (b + 1 - a) + a;
				if (n % 2 == 0)
					return n;
		}
	}
};

int main() {
	EvenRandom r;
	cout << "--0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}