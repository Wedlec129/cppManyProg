#include <iostream>
#include <SFML/Graphics.hpp>
#include <sstream>
using namespace std;
using namespace sf;



int main()
{

	RenderWindow window(sf::VideoMode(900, 700), "My window");

	

	RectangleShape lol(Vector2f(20, 20));

	bool isMove=false;
	bool isSelect=false;//выбран персонаж

	int tempX = 0;//временная коорд Х.Снимаем ее после нажатия прав клав мыши
	int tempY = 0;//коорд Y
	float distance = 0;//это расстояние от объекта до тыка курсора

	Clock clock;


	while (window.isOpen())
	{

		Vector2i mouse = Mouse::getPosition(window);
		Vector2f mousePositon = window.mapPixelToCoords(mouse);//переводим их в игровые (уходим от коорд окна)

		float time = clock.getElapsedTime().asMicroseconds();

		clock.restart();
		time = time / 800;



		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == Event::MouseButtonPressed)//если нажата клавиша мыши
				if (event.key.code == Mouse::Left) {//а именно левая
					if (lol.getGlobalBounds().contains(mousePositon.x, mousePositon.y))//и при этом координата курсора попадает в спрайт
					{
						lol.setFillColor(Color::Green);//красим спрайт в зеленый,тем самым говоря игроку,что он выбрал персонажа и может сделать ход
						isSelect = true;
					}

				};
	

		}




		if (isSelect)//если выбрали объект
			if (event.type == Event::MouseButtonPressed)//если нажата клавиша мыши
				if (event.key.code == Mouse::Right) {//а именно правая
					isMove = true;//то начинаем движение
					isSelect = false;//объект уже не выбран
					lol.setFillColor(Color::White);//возвращаем обычный цвет спрайту
					tempX = mousePositon.x;//забираем координату нажатия курсора Х
					tempY = mousePositon.y;//и Y

				}




		if (isMove) {
			distance = sqrt((tempX - lol.getPosition().x) * (tempX - lol.getPosition().x) + (tempY - lol.getPosition().y) * (tempY - lol.getPosition().y));//считаем дистанцию (длину от точки А до точки Б). формула длины вектора

			if (distance > 1) {//этим условием убираем дергание во время конечной позиции спрайта

				lol.setPosition(lol.getPosition().x + (tempX - lol.getPosition().x)/distance, lol.getPosition().y + (tempY - lol.getPosition().y) / distance);//идем по иксу с помощью вектора нормали
				//p.y +=lol.getPosition().y+ 0.1 * time * (tempY - lol.getPosition().y) / distance;//идем по игреку так же
			}
			else { isMove = false;cout << "priehali\n"; }//говорим что уже никуда не идем и выводим веселое сообщение в консоль
		}



		window.clear(Color(0, 0, 0));

		window.draw(lol);



		
		window.display();
	}



	return 0;
}