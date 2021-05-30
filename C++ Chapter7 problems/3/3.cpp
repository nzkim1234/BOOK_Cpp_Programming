#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "¿ø " << pages << "ÆäÀÌÁö" << endl;
	}
	string getTitle() {
		return title;
	}
	bool operator!() {
		if (price == 0)
			return true;
		else
			return false;
	}
};
int main() {
	Book book("º­·è½ÃÀå", 0, 50);
	if (!book)
		cout << "²ÇÂ¥´Ù" << endl;
}