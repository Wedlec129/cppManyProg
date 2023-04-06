#include <iostream>
#include <list>
#include <vector>
#include <ctime>
using namespace std;


class Word {
private:

	//список немецких слов
	vector<string> wordDeutch;

	//список русских слов
	vector<string> wordRuss;

	int ballRichtig=0; // кол-во правильных слов
    float uspeschnost = 0;  //успешность (кол-во верных в %) 
	float otzenka = 0;    //оценка (зависит от успешности) 


public:

	// добовляем слова  НЕМ И РУСС
	void addWord(string _wordDeutch, string _wordRuss) {

		wordDeutch.push_back(_wordDeutch);  // кидаем немецкие слова в список немецких слов
		wordRuss.push_back(_wordRuss);       // кидаем русские слова в список русских слов

		/*
		
		основаня суть работы программы в том что:

		слово на немецком  и слово в русском     списках 

		имеет одинаковый индекс


		
		*/


	}

	//рандомное слово на нем
	string randWordDeutch() {

		int i = 0 + rand() % wordDeutch.size();  //переменная I - рандомная от 0 до кол-ва немецких слов


		return wordDeutch[i];    //возращаем немецкое слово по рандомной I



	}


	// начало проверки) (сколько раз играем) 
	void start(int sizePlay) {

		for (int razPlay = 1; razPlay <= sizePlay; razPlay++) {  // цикл сколько раз играем 

			string Glav = randWordDeutch();    // рандомное слово

			string otvetRuss; //ответ поль на русс

			cout << endl << endl << "----------------------------" << endl << endl;
			cout << razPlay<<") "<< Glav << " ";

			cin >> otvetRuss;


			for (int i = 0; i <= wordDeutch.size() - 1; i++) {  //проходимся по списку нем слов и находим главное(то рандомное) 

				if (Glav == wordDeutch[i]) {

					if (otvetRuss == wordRuss[i]) {      // и сравниваем с ответом пользователя
						
						ballRichtig++;
						cout <<endl<<endl<< "\x1b[32m      верно \x1b[37m" << endl;
						
						cout << endl << endl << "----------------------------" << endl << endl;


					}

					else {


						cout << endl << endl << "\x1b[31m      НЕверно \x1b[37m" << endl;

						cout << endl << endl << "----------------------------" << endl << endl;

					}

				}


			}

		};

		uspeschnost = (ballRichtig * 100) / sizePlay;  // высчитываем успешность 

		//от успешность ставим оценку
		if (uspeschnost > 80)otzenka = 5;
		if (uspeschnost >60  &&uspeschnost <= 80)otzenka = 4;
		if (uspeschnost > 40 && uspeschnost <= 60)otzenka = 3;
		if (uspeschnost <=40 )otzenka = 2;
		//
		

		//красивый вывод
		cout << endl << endl << endl;

		cout << "верно " << ballRichtig << "/" << sizePlay << endl;
		cout<<"успрешность : " << uspeschnost<<"%"<<endl;
		cout << "ОЦЕНКА :" << otzenka;

		cout << endl << endl << "----------------------------" << endl << endl;

	}

	
};


int main()
{
	setlocale(LC_ALL, "rus");   //русский текст в консоли
	srand(time(0));  // рандом по времени
	system("chcp 1251");  // русский ввод
	system("cls");  // очиска консоли
	cout << endl << endl << endl << endl;

	

	Word word;

	//добовляем слова + перевод
	word.addWord("guten", "хорошо");
	word.addWord("tag", "день");
	word.addWord("morgen", "утро");



	cout << "сколько раз играем ? ";
	int maxSpile;
	cin >> maxSpile;


	word.start(maxSpile);



	cout << endl << endl << endl << endl;

	return 0;
}