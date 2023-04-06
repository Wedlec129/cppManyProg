#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;



int main()
{

	RenderWindow window(sf::VideoMode(800, 600), "My window");




	RectangleShape kub(Vector2f(100, 100));
	kub.setFillColor(Color(0, 255, 0));
	kub.setPosition(210, 200);

	RectangleShape kub2(Vector2f(100, 100));
	kub2.setFillColor(Color(0, 255, 0));
	kub2.setPosition(400, 200);





	float R3X = 0;
	float R3Y = 0;




	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}


		window.clear(sf::Color::Black);

		window.draw(kub);





		float L3PozX = Joystick::getAxisPosition(0, Joystick::X);
		float L3PozY = Joystick::getAxisPosition(0, Joystick::Y);
		if (L3PozX > 30 || L3PozY > 30 || L3PozX < -30 || L3PozY < -30)kub.setPosition(L3PozX + 210, L3PozY + 200);

		window.draw(kub2);

		float R3PozX = Joystick::getAxisPosition(0, Joystick::Z);
		float R3PozY = Joystick::getAxisPosition(0, Joystick::R);



		if (R3PozX > 30) {
			R3X = R3X + 0.3;

		}

		if (R3PozX < -30) {
			R3X = R3X - 0.3;

		}

		if (R3PozY < -30) {
			R3Y = R3Y - 0.3;

		}

		if (R3PozY > 30) {
			R3Y = R3Y + 0.3;

		}

		kub2.setPosition(R3X + 400, R3Y + 200);


		if (kub.getGlobalBounds().intersects(kub2.getGlobalBounds())) {

			kub.setFillColor(Color(255, 0, 255));

			kub2.setFillColor(Color(255, 0, 255));


		}

		if (!(kub.getGlobalBounds().intersects(kub2.getGlobalBounds()))) {

			kub.setFillColor(Color(0, 255, 0));

			kub2.setFillColor(Color(0, 255, 0));



		}



		window.display();
	}



	return 0;
}

