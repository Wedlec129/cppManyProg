#include <iostream>
#include <cmath>
#include <string>// для функций rand() и srand()

using namespace std;




int main()
{
	
	setlocale(LC_ALL,"rus");

	string str;
	cout << "введите строку : ";
	
	getline(cin, str); // ввод str


	char *arr;
	arr = &str[0];  //конвертируем str в char
	
	int kollSlov = 1;

	for (int i = 0; i < str.length(); i++) {

		//if (arr[i] == ' ')kollSlov++;

		cout << arr[i];

	}


	//cout << "колличество слов : " << kollSlov;

	return 0;
}