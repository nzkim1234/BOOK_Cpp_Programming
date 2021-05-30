#include <iostream>
using namespace std;

int big(int a, int b){
	int result;
	if (a < b)
		result = b;
	else 
		result = a;
	if (result < 100)
		return result;
	else
		return 100;
}
int big(int a, int b, int c) {
	int result;
	if (a < b)
		result = b;
	else
		result = a;
	if (result < c)
		return result;
	else
		return c;
}

int main() {
	int x = big(3,5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << ' ' << endl;
}