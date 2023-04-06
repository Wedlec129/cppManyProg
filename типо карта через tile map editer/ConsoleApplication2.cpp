
#include <SFML/Graphics.hpp>
//#include "map.h"
#include "view.h"
#include <iostream>
#include <sstream>

#include "level.h"



#include <vector>
#include <list>


using namespace sf;
using namespace std;





int main()
{
	RenderWindow window(VideoMode(640, 480), "w");
	view.reset(FloatRect(0, 0, 640, 480));


	
	Level a;
	a.LoadFromFile("kill.tmx");
	
	

	Clock clock;
	while (window.isOpen())
	{

		float time = clock.getElapsedTime().asMicroseconds();

		clock.restart();
		time = time / 800;

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		

		a.Draw(window);


		window.display();
	}
	return 0;

}