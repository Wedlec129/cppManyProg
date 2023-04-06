#include <iostream>
#include <cstdio>

#include <thread> //работа с потоками 
#include <chrono>//работа с временим




using namespace std;

void DoWork() { // ф-я для отлельного потока

	
	cout << "ID потока " << this_thread::get_id() << " DoWork " << endl;

}


int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");
	

	thread th(DoWork);  // определяем ф-я которую будем выполнять другим ядром  
	th.join(); // запускаем нащу ф-я через другое ядро

	
	cout <<"ID потока "<< this_thread::get_id()<<" MEIN "<<endl; //запуская ф-я через стандартный поток 





	return 0;
 }





/*

#include <vector>
#include <ctime>
#include <string>
#include <cstring>




float schoj(string a, string b) {

	const char* S1 = a.c_str();
	const char* S2 = b.c_str();

	int x = 0;

	if (strlen(S1) >= strlen(S2))
	{
		for (int i = 0; i != strlen(S2); i++) {
			if (S1[i] == S2[i])
				x++;

		}
	}
	else
		for (int i = 0; i != strlen(S1); i++) {
			if (S1[i] == S2[i])
				x++;

		}


	float N = (strlen(S1) + strlen(S2)) / 2;


	delete[] S1;
	delete[] S2;

	return  (x / N) * 100;

}












setlocale(LC_ALL, "rus");   //русский текст в консоли
	srand(time(0));  // рандом по времени
	system("chcp 1251");  // русский ввод
	system("cls");  // очиска консоли
	cout << endl << endl << endl << endl;










	cout << endl << endl << endl << endl;




*/