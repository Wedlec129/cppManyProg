#include <iostream>
#include <SFML/Graphics.hpp>
#include <sstream>
using namespace std;
using namespace sf;


class text {
protected:

	string shribe;

private:



	ostringstream chislo;
public:

	Font font;
	Text txt;


	text(string shribe) {


		font.loadFromFile("font/bahnschrift.ttf");

		txt.setFont(font);
		txt.setCharacterSize(20);



		txt.setString(shribe);

		this->shribe = shribe;

	}

	void getChislo(float chislo) {

		this->chislo << chislo;

		txt.setString(this->shribe + this->chislo.str());

	};

};


class Button :public text {
public:

	RectangleShape button;

	Button(float W, float H) :text(shribe) {

		button.setSize(Vector2f(W, H));
	}


	void getText(string shribe) {

		this->font.loadFromFile("font/bahnschrift.ttf");

		this->shribe = shribe;


		this->txt.setFont(this->font);
		this->txt.setCharacterSize(45);



		this->txt.setString(this->shribe);

		this->txt.setPosition(button.getPosition());

	}

	

	bool press = false;

	void pressed(Event event, Vector2i *pos) {

		if (event.type == Event::MouseButtonPressed) {

			if (event.key.code == Mouse::Left)

				if (button.getGlobalBounds().contains(pos->x, pos->y))
					press = true;
		};
	};




};






int main()
{

	RenderWindow window(sf::VideoMode(900, 700), "My window");


	int sizeKist = 25;

	int R=255;
	int G=0;
	int B=0;



	RectangleShape kist(Vector2f(sizeKist, sizeKist));  // то чем рисуем
	


	//// задний фон инструментов
	RectangleShape backFonPad(Vector2f(300, 700));  
	backFonPad.setPosition(600, 0);
	backFonPad.setFillColor(Color(90, 103, 220));
	//



	///////////////////////////////////////////////////////
	//size

	//просто текст 

	text sizeText("SIZE: ");
	sizeText.getChislo(sizeKist);
	sizeText.txt.setPosition(610, 10);

	//


	//+SIZE

	Button sizePlus(25, 25);
	sizePlus.getText("+");
	sizePlus.txt.setPosition(610, 15);
	sizePlus.txt.setFillColor(Color(255, 0, 0));
	sizePlus.button.setPosition(610, 31);



	//-SIZE

	Button sizeMinus(25, 25);
	sizeMinus.getText("-");
	sizeMinus.txt.setPosition(640, 10);
	sizeMinus.txt.setFillColor(Color(255, 0, 0));
	sizeMinus.button.setPosition(640, 31);

	////
	////////////////////////////////////////////////////////////////

	//COLOR



	text color("COLOR: ");
	color.txt.setPosition(610, 100);

	RectangleShape colorFonTip(Vector2f(30,30));
	colorFonTip.setFillColor(Color(0, 0, 0));
	colorFonTip.setPosition(680, 101);

	RectangleShape colorTip(Vector2f(25, 25));
	colorTip.setFillColor(Color(255, 0, 0));
	colorTip.setPosition(683, 103);


	Button white(25, 25);
	white.button.setPosition(610, 140);

	Button red(25, 25);
	red.button.setFillColor(Color(255,0,0));
	red.button.setPosition(640, 140);

    Button green(25, 25);
	green.button.setFillColor(Color(0, 255, 0));
	green.button.setPosition(670, 140);


	Button blue(25, 25);
	blue.button.setFillColor(Color(0, 0, 255));
	blue.button.setPosition(700, 140);



	while (window.isOpen())
	{
		
		Vector2i mousePosition = Mouse::getPosition(window);



		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

			
			//+SIZE
			sizePlus.pressed(event, &mousePosition);

			//-SIZE
			sizeMinus.pressed(event, &mousePosition);


			//COLOR 

			white.pressed(event, &mousePosition);
			red.pressed(event, &mousePosition);
			green.pressed(event, &mousePosition);
			blue.pressed(event, &mousePosition);




		}

		//window.clear(Color(0, 128, 129));


		//инструменты
		window.draw(backFonPad);
		window.draw(color.txt);
		window.draw(colorFonTip);
		window.draw(colorTip);
		



		//////////
		window.draw(sizeText.txt); //просто надпись размер

		//+SIZE
		window.draw(sizePlus.button); //сама кнопка
		window.draw(sizePlus.txt);    //текст кнопки

		//-SIZE
		window.draw(sizeMinus.button); //сама кнопка
		window.draw(sizeMinus.txt);    //текст кнопки


		//color 

		window.draw(white.button);
		window.draw(red.button);
		window.draw(green.button);
		window.draw(blue.button);


		

		



		
		//если нажата кнопка размер плюс
		if (sizePlus.press) {
			
			if(sizeKist<=75)
			sizeKist= sizeKist+5;

			sizeText.txt.setString("SIZE: ");
			ostringstream chislo;

			chislo << sizeKist;

			sizeText.txt.setString("SIZE: "+ chislo.str());

		
			sizeText.txt.setPosition(610, 10);

			
			
			sizePlus.press = false;

		}

		
		//если нажата кнопка размер минус
		if (sizeMinus.press) {

			if (sizeKist >5)
			sizeKist = sizeKist - 5;


			sizeText.txt.setString("SIZE: ");
			ostringstream chislo;

			chislo << sizeKist;

			sizeText.txt.setString("SIZE: " + chislo.str());


			sizeText.txt.setPosition(610, 10);



			sizeMinus.press = false;

		}


		//color
		if (white.press) {

			

			R = 255;
			G = 255;
			B = 255;

			colorTip.setFillColor(Color(R, G, B));


			white.press = false;
		}


		if (red.press) {

			

			R = 255;
			G = 0;
			B = 0;

			colorTip.setFillColor(Color(R, G, B));


			red.press = false;
		}


		if (green.press) {



			R = 0;
			G = 255;
			B = 0;

			colorTip.setFillColor(Color(R, G, B));


			green.press = false;
		}



		if (blue.press) {



			R = 0;
			G = 0;
			B = 255;

			colorTip.setFillColor(Color(R, G, B));


			blue.press = false;
		}
		///////////////////////////////////////


	


		if (Mouse::isButtonPressed(Mouse::Left) && mousePosition.x<=600) {


			kist.setSize(Vector2f(sizeKist, sizeKist));
			kist.setFillColor(Color(R, G, B));
			kist.setPosition(mousePosition.x, mousePosition.y);
			window.draw(kist);

		}



		if (Mouse::isButtonPressed(Mouse::Right)) {

			window.clear(Color(0, 0, 0));

		}



		window.display();
	}



	return 0;
}

