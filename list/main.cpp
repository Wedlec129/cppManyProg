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
	//�����

	//list<work*>  worker;//������ ������ ������
	//
	//for (int i = 0; i < 2; i++)//���������� �� ��������� ����� �������(� ������ �� ������)
	//	worker.push_back(new work("ALEX",18));//� ���������� � ������ ���� ����� ������ � �����



	//for (list<work*>::iterator it = worker.begin(); it != worker.end(); it++)
	//	(*it)->draw(); 





	//����

	*/

	list<work*>  worker;//������ ������ ������

    worker.push_back(new work("ALEX", 18));//� ���������� � ������ ���� ����� ������ � �����
	

	list<work*>::iterator it = worker.begin();

		(*it)->draw();

		

	return 0;
}
