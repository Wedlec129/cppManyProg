#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <atltime.h>

using namespace std;





int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");

	
	
	
	
	cout << "это калькулятор для купли/продажи XRP" << endl << endl;



	cout << "вы пополняйте кошелёк ? ";
	string otvet;
	cin >> otvet;


	float vsegoManyTrashu;
	float many;


	if (otvet == "y") {


		cout << "на сколько ? ";
		cin>> many;
		vsegoManyTrashu=many + many * 13 / 100;
		cout << "вы тратите : " << vsegoManyTrashu<<endl;
	}

	else {


		cout << "сколько тратите ? ";
		cin >> vsegoManyTrashu;


		many = vsegoManyTrashu;
	}


	SYSTEMTIME st;
	GetSystemTime(&st);
	cout <<"Дата : "<< st.wDay << "/" << st.wMonth << "/" << st.wYear << endl;
	
	float kursKaufen;
	cout << "курс покупки : ";
	cin >> kursKaufen;



	cout << "вы купите кол-во : " << (many - 0.095 * kursKaufen) / kursKaufen<<endl;

	
	float kursANKaufen;
	cout << "курс продажи : ";
	cin >> kursANKaufen;


	cout << "Вы продадите за : " << (many - 0.095 * kursKaufen) / kursKaufen * kursANKaufen - 0.095 * kursANKaufen<<endl;

	cout << "ВЫ ЗАРАБОТАЕТЕ : " << (many - 0.095 * kursKaufen) / kursKaufen * kursANKaufen - 0.095 * kursANKaufen - vsegoManyTrashu << endl << endl;

	return 0;
}




