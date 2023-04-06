#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
using namespace std;
using namespace sf;

#define PI 3.1415

class WeObjFisik {
private:
	Texture t;
	Sprite s;
public:

	float x, y, w, h, speed, alfa;
	
	//просто конструктор в котором мы предаём базовые значения
	WeObjFisik(float X, float Y, float W, float H ) {

		t.loadFromFile("C:/Users/Борис/source/repos/opengl/opengl/resources/wPjVhJh.png");

		x = X; y = Y; w = W; h = H;

		speed = 0; alfa =0;

		s.setTexture(t);
		s.setPosition(x, y);
		s.setOrigin(w / 2, h / 2);


	}    



	//раноускореное и равнозамед движ
	void ravnUckMove(float &time,float vX0, float vY0,float aX, float aY) {


		x = x + vX0*time + (aX * time * time) / 2;
		y = y + vY0 * time + (aY * time * time) / 2;

	}

	void alfaGorMove(float& time,float Alfa, float v0) {

		alfa = Alfa * PI / 180;         //переводим градусы в радианы   потому что sin и cos работают с радианами

		

		if (y <= 800) {         //пока не дотронится земли 

			x = x + v0 * time * cos(alfa);                                  
			y = y + v0 * time * sin(alfa) + ((10 * time * time) / 2);


		}




	}



	//рисуем объект и ставим его на нужную поз
	void draw(RenderWindow& window) {

		s.setRotation(alfa*180/PI);   //переводим из радиан в градусы

		

		s.setPosition(x, y);
		window.draw(s);
	}     



};



int main()
{
	RenderWindow window(VideoMode(1400, 800), "lol");
	setlocale(LC_ALL, "Russian");



	
	WeObjFisik kub(100, 100, 140, 38);
	
	
	

	Clock clock;
	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asSeconds();
		//float time = clock.getElapsedTime().asMicroseconds();
		//clock.restart();
		//time = time / 800;



		Vector2i pixelPos = Mouse::getPosition(window);//забираем коорд курсора c левого верхнего угла
		Vector2f pos = window.mapPixelToCoords(pixelPos);//переводим их в игровые (уходим от коорд окна)


		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)))
				window.close();

		}
		window.clear(Color(90,90,90));



		if (kub.x > 1400) kub.x = 0;    //если мы улители в правый край карты то вернуть в левый
		if (kub.x < 0) kub.x = 1400;     //если мы улители в левый край карты то вернуть в правый   
		if (kub.y < 0) kub.y = 0;       //если мы попали вверх уврты по остаться на верху (в приделах видимости)


		kub.draw(window);
		//kub.ravnUckMove(time,0,0,0,0);
		kub.alfaGorMove(time,-57,6);






		window.display();
	}

	return 0;
}
