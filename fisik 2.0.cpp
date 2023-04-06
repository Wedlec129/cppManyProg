#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
using namespace std;
using namespace sf;

#define PI 3.1415

class WeObjFisik {
private:

	//��� ����������� ��� ������ ���� �� ����� �����
	float dXmoveMouse;
	float dYmoveMouse;
	//

	Texture t;
	Sprite s;
public:

	float x, y, w, h, alfa;

	bool moveObjMouse;


	//������ ����������� � ������� �� ������ ������� ��������
	WeObjFisik(float X, float Y, float W, float H) {

		t.loadFromFile("resources/wPjVhJh.png");

		x = X; y = Y; w = W; h = H;
		alfa = 0;

		s.setTexture(t);
		s.setPosition(x, y);
		s.setOrigin(w / 2, h / 2);


		
		
		moveObjMouse = false;//���������� ��� ������ ���� �� �������
		 



	}

	//��� �����������
	FloatRect getRect() {//�-��� ��������� �������������� (�������)

		return FloatRect(x, y, w, h);
	}


	//������������� � ���������� ����
	void ravnUckMove(float& time, float vX0, float vY0, float aX, float aY) {


		x = x + vX0 * time + (aX * time * time) / 2;
		y = y + vY0 * time + (aY * time * time) / 2;

	}

	//���� ��� ����� � ���
	void alfaGorMove(Clock &clock,float& time, float Alfa, float v0) {

		alfa = Alfa * PI / 180;         //��������� ������� � �������   ������ ��� sin � cos �������� � ���������


		if (y <= 800-70 ) {         //���� �� ����������� ����� 

			x = x + v0 * time * cos(alfa);
			y = y + v0 * time * sin(alfa) + ((10 * time * time) / 2);


		}

		//���� �� �����
		else {

		
			
			clock.restart();
		}


	}

	//���� ���������� �����
	void takeMouse(Vector2f &pos, Clock& clock,Event event) {

		
		

		//���� �� ������ ������ �������� � ������ ����� ������ ����
		if (s.getGlobalBounds().contains(Vector2f(pos)) && (Mouse::isButtonPressed(Mouse::Left))) {

			//��� ���������� ��� ����������� (� ����� �����)
			dXmoveMouse = pos.x - x;//������ �������� ����� �������� ������� � �������.��� ������������� �������
			dYmoveMouse = pos.y - y;//���� ����� �� ������

			

			moveObjMouse = true;//����� ������� ������							

		}

		//���� ��������� ����
		if (event.type == Event::MouseButtonReleased)//���� ��������� �������
			if (event.key.code == Mouse::Left) { //� ������ �����
				moveObjMouse = false; //�� �� ����� ������� ������

			
			}
		
		//���� �� ������� ������
		if (moveObjMouse) {

			//������� � ����� ����� �����
			x = pos.x - dXmoveMouse;//������� ������ �� �
			y = pos.y - dYmoveMouse;//������� �� Y

			clock.restart(); //���������� ����� ��� ������ (������)
			
		}

		


		
		


		

	}


	//������ ������ � ������ ��� �� ������ ���
	void draw(RenderWindow& window) {

		s.setRotation(alfa * 180 / PI);   //��������� �� ������ � �������



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



		Vector2i pixelPos = Mouse::getPosition(window);//�������� ����� ������� c ������ �������� ����
		Vector2f pos = window.mapPixelToCoords(pixelPos);//��������� �� � ������� (������ �� ����� ����)


		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)))
				window.close();

		}
		window.clear(Color(90, 90, 90));



		if (kub.x > 1400) kub.x = 0;    //���� �� ������� � ������ ���� ����� �� ������� � �����
		if (kub.x < 0) kub.x = 1400;     //���� �� ������� � ����� ���� ����� �� ������� � ������   
		//if (kub.y < 0) kub.y = 0;       //���� �� ������ ����� ����� �� �������� �� ����� (� �������� ���������)


		kub.draw(window);



		kub.alfaGorMove(clock,time, 90, 0);
		kub.takeMouse(pos,clock,event);





		window.display();
	}

	return 0;
}