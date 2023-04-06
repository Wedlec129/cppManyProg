include <iostream>
#include <vector>
#include <fstream>
using namespace std;




int main()
{
	setlocale(LC_ALL, "ru");




	vector<int> speed;
	
	int size;

	cout << "ñêîëüêî ýëèìåíòîâ";
	cin >> size;



	for (int i = 0; i < size; i++) {
		
		
		
		int  n = 0;

		cout << "[" << i << "] ýëåìåíò : ";

		cin >> n;

		speed.push_back(n);



	}




	cout << "ÂÎÒ ÂÀØÈ ÝËÅÌÅÍÒÛ" << endl;

	for (int i = 0; i < speed.size(); i++) {

		cout << "[" << i << "] ýëåìåíò : "<<speed[i]<<endl;



		}

	cout << "MAX: ";

	int a=0;

	for (int i = 0; i < speed.size(); i++) {

		if (speed[i] > a)a = speed[i];



	}

	cout << a<<endl;



	cout << "MIN: ";


	for (int i = 0; i < speed.size(); i++) {

		if (speed[i] < a)a = speed[i];



	}

	cout << a << endl;



	cout << "SRED ";


	a = 0;

	for (int i = 0; i < speed.size(); i++) {

		a += speed[i];


	}

	a = a / speed.size();

	cout << a<<endl;

	return 0;
}


