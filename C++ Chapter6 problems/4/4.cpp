#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector() {
		mem = new int[100];
		size = 100;
		for (int i = 0; i < size; i++)
			mem[i] = 0;
	}
	MyVector(int n, int val) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++)
			mem[i] = val;
	}
	~MyVector() {
		delete[]mem;
	}

};

int main() {
}