#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>
using namespace std;


class Book {
	string title;
	int price;
public:
	Book(string title, int price);
	~Book();
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

Book::Book(string title, int price) {
	this->title = title;
	this->price = price;
}

Book::~Book() { 
}

void Book::set(string title, int price) { 
	this->title = title;
	this->price = price;
}


int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}