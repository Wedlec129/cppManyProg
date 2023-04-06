#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;



int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");


	

	vector<int> arr = {3,2,1,5,2};
	
	int koll = 1; //по умолчанию у нас один одинаковый элемент


	//сортировка массива
	for(int j=0;j<= arr.size()/2; j++)
	for (int i = 0; i < arr.size()-1; i++) {

		//метод ебаного пузырька
		if (arr[i] > arr[i + 1]) {

			int b = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = b;


		}

		
	}


	//выводим сортированный массив
	cout << "Array : ";
	for (int i = 0; i < arr.size(); i++) {

		cout << arr[i] << " ";


	}


	//сичитаем сколько элементов равны 
	for (int i = 0; i < arr.size()-1; i++) {

		if ( (arr[i] == arr[i + 1]) && arr[i]==2 )koll++;

	}


	cout <<endl<< "одинаковых элементов {2} : " << koll <<endl<<endl<<endl;


	return 0;
}




