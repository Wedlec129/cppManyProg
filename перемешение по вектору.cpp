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
	bool isSelect=false;//������ ��������

	int tempX = 0;//��������� ����� �.������� �� ����� ������� ���� ���� ����
	int tempY = 0;//����� Y
	float distance = 0;//��� ���������� �� ������� �� ���� �������

	Clock clock;


	while (window.isOpen())
	{

		Vector2i mouse = Mouse::getPosition(window);
		Vector2f mousePositon = window.mapPixelToCoords(mouse);//��������� �� � ������� (������ �� ����� ����)

		float time = clock.getElapsedTime().asMicroseconds();

		clock.restart();
		time = time / 800;



		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == Event::MouseButtonPressed)//���� ������ ������� ����
				if (event.key.code == Mouse::Left) {//� ������ �����
					if (lol.getGlobalBounds().contains(mousePositon.x, mousePositon.y))//� ��� ���� ���������� ������� �������� � ������
					{
						lol.setFillColor(Color::Green);//������ ������ � �������,��� ����� ������ ������,��� �� ������ ��������� � ����� ������� ���
						isSelect = true;
					}

				};
	

		}




		if (isSelect)//���� ������� ������
			if (event.type == Event::MouseButtonPressed)//���� ������ ������� ����
				if (event.key.code == Mouse::Right) {//� ������ ������
					isMove = true;//�� �������� ��������
					isSelect = false;//������ ��� �� ������
					lol.setFillColor(Color::White);//���������� ������� ���� �������
					tempX = mousePositon.x;//�������� ���������� ������� ������� �
					tempY = mousePositon.y;//� Y

				}




		if (isMove) {
			distance = sqrt((tempX - lol.getPosition().x) * (tempX - lol.getPosition().x) + (tempY - lol.getPosition().y) * (tempY - lol.getPosition().y));//������� ��������� (����� �� ����� � �� ����� �). ������� ����� �������

			if (distance > 1) {//���� �������� ������� �������� �� ����� �������� ������� �������

				lol.setPosition(lol.getPosition().x + (tempX - lol.getPosition().x)/distance, lol.getPosition().y + (tempY - lol.getPosition().y) / distance);//���� �� ���� � ������� ������� �������
				//p.y +=lol.getPosition().y+ 0.1 * time * (tempY - lol.getPosition().y) / distance;//���� �� ������ ��� ��
			}
			else { isMove = false;cout << "priehali\n"; }//������� ��� ��� ������ �� ���� � ������� ������� ��������� � �������
		}



		window.clear(Color(0, 0, 0));

		window.draw(lol);



		
		window.display();
	}



	return 0;
}