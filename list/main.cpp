#include <iostream>
#include <vector>
#include <list>
#include <fstream>
using namespace std;

class work {
public:

	string name;

	int age;

	work(string na, int a) {

		name = na;

		age = a;

	}


	void draw() {

		cout << "name: " << name<<endl;
		cout << "age: " << age<<endl<<endl;


	}


};



int main()
{
	setlocale(LC_ALL, "ru");

	/*
	//много

	//list<work*>  worker;//создаю список класса
	//
	//for (int i = 0; i < 2; i++)//проходимся по элементам этого вектора(а именно по врагам)
	//	worker.push_back(new work("ALEX",18));//и закидываем в список всех наших врагов с карты



	//for (list<work*>::iterator it = worker.begin(); it != worker.end(); it++)
	//	(*it)->draw(); 





	//один

	*/

	list<work*>  worker;//создаю список класса

    worker.push_back(new work("ALEX", 18));//и закидываем в список всех наших врагов с карты
	

	list<work*>::iterator it = worker.begin();

		(*it)->draw();

		

	return 0;
}
