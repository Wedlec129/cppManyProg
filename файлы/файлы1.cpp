#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");


		ifstream F("pipiroshka/lox.txt");
		string s;
		getline(F, s);
		
		int ct = 0;
		for (int i = 0; i < s.length(); i++) {

			if (s[i] == 'l') {
				
				ct++;
			}
			
		}
	
		cout << ct << endl;

	return 0;
}




