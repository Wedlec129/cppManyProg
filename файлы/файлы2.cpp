#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");


		ifstream F("pipiroshka/lox.txt");
		string s;
		getline(F, s);
		
		int ct = 0;


		
		vector<char> word;
		word.push_back('lox');
		


		for (int i = 0; i < s.length(); i++) {

			for (int q = 0; q < word.size(); q++) {

				if (s[i]==word[q] ) {

					ct++;
				}

			}

		}
	
		cout << ct << endl;

	return 0;
}




