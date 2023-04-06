#include <iostream>
#include <cstdio>

#include <thread> //работа с потоками 
#include <chrono>//работа с временим

using namespace std;

class lol {
public:
	int a;

	lol(int _a) {

		a = _a;

	}


	void Work(string name) {


		cout << "(name : " << name << "; a: " << a << " ) ID потока : " << this_thread::get_id() << " |CLASS|" << endl;


	}

};


int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");


	
	cout << "ID потока " << this_thread::get_id() << " |MEIN| " << endl; //запуская ф-я через стандартный поток 



	lol a(23);
	a.Work("bob");


	lol b(57);

	/*thread th([&]() {

		b.Work("kek");

		});*/

	thread th(&lol::Work,b,("kek"));


	th.join();
	


	return 0;
}




