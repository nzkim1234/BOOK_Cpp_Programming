#include <iostream>
using namespace std;

class Simple {
	int* p;
	int size;
public:
	Simple(int n) {
		size = n;
		p = new int[n];
	}
	void write() {
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}
	void read() {
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	}
	int big() {
		int max = p[0];
		for (int i = 1; i < size; i++) {
			if (max < p[i])
				max = p[i];
		}
		return max;
	}
	~Simple() {

	}
};

int main() {
	Simple s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}