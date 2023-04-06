#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	RenderWindow window(sf::VideoMode(600, 400), "lol");

	
	RectangleShape kek(Vector2f(50,50));
	kek.setFillColor(Color(0, 0255, 0));

	kek.setPosition(250, 160);


	while (window.isOpen()) {

		Vector2i pos = Mouse::getPosition(window);//забираем коорд курсора
		

		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)window.close();


			if (event.type == Event::MouseButtonPressed) {

				if (event.key.code == Mouse::Left)

					if (kek.getGlobalBounds().contains(pos.x, pos.y))


						cout << "lol";

			};
		
		};

		window.clear(Color(0, 128, 129));

		



		window.draw(kek);


		


		window.display();
	}



	return 0;
}