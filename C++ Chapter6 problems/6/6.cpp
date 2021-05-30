#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* z=new int[size*2];
		for (int i = 0; i < size; i++) {
			z[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			z[i+5] = s2[i];
		}
		return z;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int* z = new int[size];
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j])
					s1[i] = NULL;
			}
		}
		for (int i = 0; i < 5; i++) {
			if (s1[i] != NULL) {
				z[retSize++] = s1[i];
			}
		}
		return z;
	}
};

int main() {
	int x[5];
	int y[5];
	int* z;
	int n = 0;
	cout << "정수를 5개 입력해라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5개 입력해라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	z=ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << z[i];
	}
	cout << endl;
	z = ArrayUtility2::remove(x, y, 5, n);
	cout << "배열 x[]에서 y[]를 뺸 결과를 출력한다. 개수는 " << n << endl;
	for (int i = 0; i < n; i++) {
		cout << z[i]<<' ';
	}
}