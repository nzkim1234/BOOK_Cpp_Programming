#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Player {
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class GamblingGame {
	int a;
	Player* p;
	string name;
public:
	GamblingGame(int a) {
		srand((unsigned)time);
		p = new Player[a];
			cout << "ù��° ���� �̸� >> ";
			cin >> name;
			p[0].setName(name);
			cout << "�ι�° ���� �̸� >> ";
			cin >> name;
			p[1].setName(name);
			cout << endl;
	}
	void game() {

		int i = 0;
		string n;
		int result[3];
		while (true) {
			cout << p[i].getName() << ": ";
			getline(cin, n);
			for (int j = 0; j < 3; j++) {
				result[j] = rand() % 3;
			}
			cout << endl << "\t\t" << result[0] << '\t' << result[1] << '\t' << result[2] << '\t';
			if (result[0] == result[1] && result[1] == result[2]) {
				cout << p[i].getName() << "�� �¸�!\n";
				break;
			}
			else
				cout << "�ƽ�����!\n";
			i++;
			if (i > 1) {
				i = 0;
			}
		}
	}
};

int main() {
	cout << 55 + 29 * 5 + 65 * 5 + 47 * 5 + 83 * 5;
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	GamblingGame game(2);
	game.game();
}