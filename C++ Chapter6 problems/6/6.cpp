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
	cout << "������ 5�� �Է��ض�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "������ 5�� �Է��ض�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	z=ArrayUtility2::concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << z[i];
	}
	cout << endl;
	z = ArrayUtility2::remove(x, y, 5, n);
	cout << "�迭 x[]���� y[]�� �A ����� ����Ѵ�. ������ " << n << endl;
	for (int i = 0; i < n; i++) {
		cout << z[i]<<' ';
	}
}