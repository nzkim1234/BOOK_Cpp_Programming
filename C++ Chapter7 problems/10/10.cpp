#include <iostream>
using namespace std;

class Statistics {
	int* a;
	int index;
public:
	Statistics() {
		a = new int[100];
		index = 0;
	}
	bool operator!() {
		if (index==0)
			return true;
		else 
			return false;
	}
	Statistics& operator<<(int x) {
		a[index++] = x;
		return *this;
	}
	void operator~() {
		for (int i = 0; i<index; i++) {
			cout << a[i] << ' ';
		}
	}
	void operator>>(int& b) {
		int sum = 0;
		for (int i = 0; i < index; i++) {
			sum += a[i];
		}
		b = sum / index;
	}
};

int main() {
	Statistics stat;
	if (!stat)
		cout << "현재 통계 데이타가 없습니다." << endl;
	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++)
		cin >> x[i];
	for (int i = 0; i < 5; i++)
		stat << x[i];
	stat << 100 << 200;
	~stat;
	cout << endl;
	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}