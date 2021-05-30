#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) {
		this->text = text;
	}
	void add(string next) {
		text += next;
	}
	void print() {
		cout << text << endl;
	}
};

Buffer& append(Buffer& a, string b) {
	a.add(b);
	return a;
}

int main() {
	Buffer buf("Hello");
	Buffer& tmp = append(buf, "Guys");
	tmp.print();
	buf.print();
}