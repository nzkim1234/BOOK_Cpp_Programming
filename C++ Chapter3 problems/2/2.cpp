#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	Date(string birth) {
		int cnt = 0;
		int c;
		for (int i = 0; i < birth.length(); i++)
		{
			if (birth[i] == '/' && cnt == 0)
			{
				year = stoi(birth.substr(0, i));
				c = i + 1;
				cnt++;
			}
			else if (birth[i] == '/' && cnt == 1)
			{
				month = stoi(birth.substr(c, i));
				day = stoi(birth.substr(i + 1, birth.length()));
			}

		}

	}
	void show() {
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}