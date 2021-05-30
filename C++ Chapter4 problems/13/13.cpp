#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string histo;
	int alpha[26] = { 0 };
	int num=0;
public:
	Histogram(string s) {
		histo = s;
		cout << s << endl;
	}
	void put(string s) {
		histo.append(s);
		cout << s;
	}
	void putc(char c) {
		histo += c;
		cout << c;
	}
	void print() {
		cout << endl << endl;
		for (int i = 0; i < histo.length(); i++) {
			if (isalpha(histo[i])) {
				num++;
				histo[i] = tolower(histo[i]);
				alpha[histo[i] - 97]++;
			}
		}
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << num << endl << endl;
		for (int i = 0; i < 26; i++) {
			cout << (char)(97 + i) << " (" << alpha[i] << ")\t:";
			for (int j = 0; j < alpha[i]; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}