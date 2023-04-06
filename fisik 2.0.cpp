#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
using namespace std;
using namespace sf;

#define PI 3.1415

class WeObjFisik {
private:

	//для перемешения при помощи мыши из места клика
	float dXmoveMouse;
	float dYmoveMouse;
	//

	Texture t;
	Sprite s;
public:

	float x, y, w, h, alfa;

	bool moveObjMouse;


	//просто конструктор в котором мы предаём базовые значения
	WeObjFisik(float X, float Y, float W, float H) {

		t.loadFromFile("resources/wPjVhJh.png");

		x = X; y = Y; w = W; h = H;
		alfa = 0;

		s.setTexture(t);
		s.setPosition(x, y);
		s.setOrigin(w / 2, h / 2);


		
		
		moveObjMouse = false;//переменная для щелчка мыши по спрайту
		 



	}

	//для пересичений
	FloatRect getRect() {//ф-ция получения прямоугольника (спрайта)

		return FloatRect(x, y, w, h);
	}


	//раноускореное и равнозамед движ
	void ravnUckMove(float& time, float vX0, float vY0, float aX, float aY) {


		x = x + vX0 * time + (aX * time * time) / 2;
		y = y + vY0 * time + (aY * time * time) / 2;

	}

	//движ под углом к гор
	void alfaGorMove(Clock &clock,float& time, float Alfa, float v0) {

		alfa = Alfa * PI / 180;         //переводим градусы в радианы   потому что sin и cos работают с радианами


		if (y <= 800-70 ) {         //пока не дотронулись земли 

			x = x + v0 * time * cos(alfa);
			y = y + v0 * time * sin(alfa) + ((10 * time * time) / 2);


		}

		//если на земле
		else {

		
			
			clock.restart();
		}


	}

	//типо перемещаем мышью
	void takeMouse(Vector2f &pos, Clock& clock,Event event) {

		
		

		//если мы навели мышкой наобьект и нажади левую кнопку мыши
		if (s.getGlobalBounds().contains(Vector2f(pos)) && (Mouse::isButtonPressed(Mouse::Left))) {

			//для нормальной раб перемешения (с места клика)
			dXmoveMouse = pos.x - x;//делаем разность между позицией курсора и спрайта.для корректировки нажатия
			dYmoveMouse = pos.y - y;//тоже самое по игреку

			

			moveObjMouse = true;//можем двигать спрайт							

		}

		//если отпускаем мышь
		if (event.type == Event::MouseButtonReleased)//если отпустили клавишу
			if (event.key.code == Mouse::Left) { //а именно левую
				moveObjMouse = false; //то не можем двигать спрайт

			
			}
		
		//если мы двигаем объект
		if (moveObjMouse) {

			//двигаем с место клика мышки
			x = pos.x - dXmoveMouse;//двигаем спрайт по Х
			y = pos.y - dYmoveMouse;//двигаем по Y

			clock.restart(); //сбрасываем время для физики (заново)
			
		}

		


		
		


		

	}


	//рисуем объект и ставим его на нужную поз
	void draw(RenderWindow& window) {

		s.setRotation(alfa * 180 / PI);   //переводим из радиан в градусы



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
		window.clear(Color(90, 90, 90));



		if (kub.x > 1400) kub.x = 0;    //если мы улетели в правый край карты то вернуть в левый
		if (kub.x < 0) kub.x = 1400;     //если мы улетели в левый край карты то вернуть в правый   
		//if (kub.y < 0) kub.y = 0;       //если мы попали вверх карты то остаться на верху (в приделах видимости)


		kub.draw(window);



		kub.alfaGorMove(clock,time, 90, 0);
		kub.takeMouse(pos,clock,event);





		window.display();
	}

	return 0;
}