#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
using namespace sf;
using namespace std;



View view;
View setCenterView(float x, float y) { 


	view.setCenter(x, y); 

	return view;
};

 



int main()
{
	setlocale(LC_ALL, "Russian");

	RenderWindow window(VideoMode(640, 480), "view for porn;)");
	view.reset(FloatRect(0, 0, 640, 480));//размер камеры




	RectangleShape a(Vector2f(50, 50));
	a.setPosition(100, 100);
	a.setFillColor(Color(0, 255, 0));

	RectangleShape b(Vector2f(500, 50));
	b.setFillColor(Color(255, 0, 0));


	Clock clock;

	while (window.isOpen())
	{
		Vector2i mousePosition = Mouse::getPosition(window);
		Vector2f pos = window.mapPixelToCoords(mousePosition);//переводим их в игровые (уходим от коорд окна)

		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;


		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();



		}


		window.clear(Color(0, 128, 129));


	
		window.setView(view);
		window.draw(a);
		window.draw(b);

		setCenterView(a.getPosition().x, a.getPosition().y);

		if (Keyboard::isKeyPressed(Keyboard::D))a.move(0.1, 0);
		if (Keyboard::isKeyPressed(Keyboard::A))a.move(-0.1, 0);
		if (Keyboard::isKeyPressed(Keyboard::W))a.move(0, -0.1);
		if (Keyboard::isKeyPressed(Keyboard::S))a.move(0, 0.1);



		if(a.)



		window.display();
	}
	return 0;
}