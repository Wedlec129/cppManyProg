#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "map.h"
#include <iostream>
#include <sstream>
using namespace sf;
using namespace std;
#define Gr 9.80665 








View view;
View getplayercoordinateforview(float x, float y) { //������� ��� ���������� ��������� ������


	view.setCenter(x , 0); //������ �� �������, ��������� ��� ���������� ������. +100 - �������� ������ �� ���� ������. �����������������

	return view;
};


class Entity {
public:
	float dx, dy, x, y, speed, moveTimer;//�������� ���������� ������ ��� ������� �����
	float massa;
	int w, h, health;
	bool life, onGround;
	Texture t;
	Sprite s;
	String name;//����� ����� ���� ������, �� �� ����� ������ ������ ����� ��� �����.����� ���� �������� ������ �� ����� � ����� ������� ���� �������� � update � ����������� �� �����
	Entity(Image& image, String Name, float Massa, float X, float Y, int W, int H) {
		x = X; y = Y; w = W; h = H; name = Name; moveTimer = 0;
		speed = 0; health = 100; dx = 0; dy = 0;
		massa = Massa;
		life = true; onGround = false;
		t.loadFromImage(image);
		s.setTexture(t);
		s.setOrigin(w / 2, h / 2);
	}
};





class Player :public Entity {
public:

	enum { left, right, up, down, jump, stay } state;//��������� ��� ������������ - ��������� �������

	int playerScore;


	Player(Image& image, String Name, float Massa, float X, float Y, int W, int H) :Entity(image, Name, Massa, X, Y, W, H) {
		playerScore = 0; state = stay;
		if (name == "hiro") {
			s.setTextureRect(IntRect(264, 63, w, h));
		}




	}


	void control() {

		//����������






		state = right; speed = 0.1;
		//s.setScale(1, 1);



	//if (((Keyboard::isKeyPressed(Keyboard::W)) || (Keyboard::isKeyPressed(Keyboard::Space)) || Joystick::isButtonPressed(0, 1)) ) {//���� ������ ������� ����� � �� �� �����, �� ����� �������
	//	state = jump; dy = -1; onGround = false;//�������� ������ ������



	//}



		if (Keyboard::isKeyPressed(Keyboard::LShift) || Joystick::isButtonPressed(0, 10)) {
			speed = 0.5;
		}





	}

	void checkCollisionWithMap(float Dx, float Dy)//� ��� �������� ������������ � ������
	{
		for (int i = y / 20; i < (y + h) / 20; i++)//���������� �� ��������� �����
			for (int j = x / 20; j < (x + w) / 20; j++)
			{
				if (TileMap[i][j] == '0')//���� ������� ��� ������ �����? ��
				{
					if (Dy > 0) { y = i * 20 - h;  dy = 0; onGround = true; }//�� Y ����=>���� � ���(����� �� �����) ��� ������. � ���� ������ ���� ���������� ��������� � ��������� ��� �� �����, ��� ���� ������� ��� �� �� ����� ��� ����� ����� ����� �������
					if (Dy < 0) { y = i * 20 + 20;  dy = 0; }//������������ � �������� ������ �����(����� � �� �����������)
					if (Dx > 0) { x = j * 20 - w; }//� ������ ����� �����
					if (Dx < 0) { x = j * 20 + 20; }// � ����� ����� �����


				}


				if (TileMap[i][j] == '1') {

					if (Dy > 0) { y = i * 20 - h;  dy = 0; }//�� Y ����=>���� � ���(����� �� �����) ��� ������. � ���� ������ ���� ���������� ��������� � ��������� ��� �� �����, ��� ���� ������� ��� �� �� ����� ��� ����� ����� ����� �������
					if (Dy < 0) { y = i * 20 + 20;  dy = 0; }//������������ � �������� ������ �����(����� � �� �����������)

					if (Dx > 0) { x = j * 20 - w; }//� ������ ����� �����


					life = false;


				}






			}
	}

	void update(float time)
	{
		control();//������� ���������� ����������
		switch (state)//��� �������� ��������� �������� � ����������� �� ���������
		{
		case right:dx = speed; break;//��������� ���� ������

		case stay: break;//� ����� ����		
		}
		x += dx * time;
		checkCollisionWithMap(dx, 0);//������������ ������������ �� �
		y += dy * time;
		checkCollisionWithMap(0, dy);//������������ ������������ �� Y
		s.setPosition(x + w / 2, y + h / 2); //������ ������� ������� � ����� ��� ������

		speed = 0;



		if (onGround)life = false;



		dy += massa * Gr;//��������� ������������� � �����



		if (x > 1600)x = 267;


	}

	float getplayercoordinateX() {	//���� ������� ����� �������� ���������� �	
		return x;
	}

	float getplayercoordinateY() {	//���� ������� ����� �������� ���������� Y 	
		return y;
	}


	void getplayercoordinateforview(float x, float y) { //������� ��� ���������� ��������� ������


		view.setCenter(x + 100, y); //������ �� �������, ��������� ��� ���������� ������. +100 - �������� ������ �� ���� ������. �����������������


	}






};


class stolb {
public:

	RectangleShape s;
	

	bool vse;


	stolb(float x, float y=0) {

	   s.setSize(Vector2f(20, 12 * 20));
       s.setFillColor(Color(255, 0, 0));

	   s.setPosition(x, y);

	   vse = false;

	}


	//��� ���� ��� ������ ������� ������ ����������� 1 ���//(a.getGlobalBounds().intersects(b.getGlobalBounds())

	bool intersects1Touch(RectangleShape& b, Sprite& a) {


		if (a.getGlobalBounds().intersects(b.getGlobalBounds()) && !vse) {  //���� � ������� � ���� ��



			vse = true;

			return true;
		}





		if (a.getGlobalBounds().intersects(b.getGlobalBounds()) && vse) { //���� � ������� � ��


			return false;
		}


		if (!(a.getGlobalBounds().intersects(b.getGlobalBounds()))) {  //���� � ��������� ��


			vse = false;
			return false;
		}





	}




};



//����
class text {
private:

	string shribe;


	Font font;

public:



	Text txt;


	text(string shribeName) {


		font.loadFromFile("font/bahnschrift.ttf");

		txt.setFont(font);
		txt.setCharacterSize(20);


		//��������� ����
		txt.setFillColor(Color(0, 0, 0));

		txt.setString(shribeName);



		shribe = shribeName;

	}


	//����� ����� ������� �� ��������
	virtual void sleditForSprite(Sprite& s, float x, float y) {

		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);



	}

	//���� ����� ������
	void getChislo(float n) {



		ostringstream chislo;

		chislo << n;

		txt.setString(shribe + chislo.str());





	}




	//�-� ��� ������
	void setString(string name) {

		txt.setString(name);


	}

	virtual void setPosition(float x, float y) {

		txt.setPosition(x, y);

	}

	void setFillTextColor(float R, float G1, float B) {

		txt.setFillColor(Color(R, G1, B));

	}
	//

	//�������� ������ ������
	void setCharacterSize(float a) {


		txt.setCharacterSize(a);

	}





	//���������� � ����
	virtual void draw(RenderWindow& window) {


		window.draw(txt);



	};


};

//������
class Button :public text {
private:

	float w, h;

	SoundBuffer buffer;

	Sound sound;

public:



	RectangleShape button;//��� ��������

	bool pressed; //������ ������

	bool conectMouse; // �������� ����� 


	Button(float W, float H, string shribeName) :text(shribeName) {


		w = W;
		h = H;





		button.setSize(Vector2f(W, H));

		txt.setPosition(button.getPosition());

		pressed = false;

		conectMouse = false;
	}

	//������ ������ �� ��������
	void sleditForSprite(Sprite& s, float x, float y) override {


		button.setPosition(s.getPosition().x + x, s.getPosition().y + y);
		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);



	}



	//������ � �����(�������) � �����
	void draw(RenderWindow& window)override {

		txt.setPosition(button.getPosition());


		window.draw(button);
		window.draw(txt);
	}



	//������� � ��������� (!!!!! � EVENT   !!!@! 
	void update(Event& event, RenderWindow& window) {

		Vector2i mousePosition = Mouse::getPosition(window);
		Vector2f pos = window.mapPixelToCoords(mousePosition);//��������� �� � ������� (������ �� ����� ����)

		//���� ������
		if (event.type == Event::MouseButtonPressed) {

			if (event.key.code == Mouse::Left)

				if (button.getGlobalBounds().contains(pos.x, pos.y))
					pressed = true;
		};



		if (button.getGlobalBounds().contains(pos.x, pos.y))

			conectMouse = true;



		else conectMouse = false;











	};
	//Vector2i pos = Mouse::getPosition(window);



	//���� ����
	void getSound(string failAudio) {

		buffer.loadFromFile(failAudio);

		sound.setBuffer(buffer);




	}


	//������ ����
	void soundPlay() {

		sound.play();

	}

	//�������� ���������
	void soundSetVolume(int volume) {

		sound.setVolume(volume);

	}






	//�������� ������� �������� ������ 
	void setButtonSize(float W, float H) {

		w = W;
		h = H;

		button.setSize(Vector2f(W, H));


	}


	//�������� �� ����� 
	void setOringCenter() {


		button.setOrigin(w / 2, h / 2);


	}



	//�������� �������
	void setPosition(float x, float y)  override {

		button.setPosition(x, y);

	}

	//�������� ���� ��������
	void setFillRacktengelColor(float R, float G1, float B) {

		button.setFillColor(Color(R, G1, B));



	}



	//� ����� PRESSED
	void braek() {

		pressed = false;

	};



};





int main()
{
	RenderWindow window(VideoMode(1920, 1080), "lol");
	view.reset(FloatRect(0, 0, 640, 480));//������ "����" ������ ��� �������� ������� ���� ������. (����� ����� ������ ��� �����) ��� �� ���� �������������



	Image playerImage;
	playerImage.loadFromFile("images/flappyBird.png");
	playerImage.createMaskFromColor(Color(255, 255, 255));


	Player player(playerImage, "hiro", 0.0005, 100, 100, 19, 15);


	bool start = false;




	Texture mapT;
	mapT.loadFromFile("images/flappyBird.png");

	Sprite mapS;
	mapS.setTexture(mapT);



	stolb stolb1(400+15*20);

	stolb stolb2(640 + 15 * 20,200);

	stolb stolb3(860 + 15 * 20);


	Clock clock;

	while (window.isOpen())
	{
		Vector2i mousePoz = Mouse::getPosition(window);

		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;


		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();



			if (event.type == sf::Event::KeyReleased)
				if (event.key.code == Keyboard::Space) {

					player.state = player.jump; player.dy = -1 * Gr * 0.05; player.onGround = false;//�������� ������ ������

				}

			if (event.type == sf::Event::KeyReleased)
				if (event.key.code == Keyboard::Tab) {

					cout << "x: " << player.x << endl << endl;
					cout << "y: " << player.y << endl << endl << endl;

				}


			if (event.type == sf::Event::KeyReleased)
				if (event.key.code == Keyboard::Enter) {

					start = true;

				}






		}


		window.clear(Color(0, 128, 129));


		if (player.life) {

			if(start)
		player.update(time);
		window.setView(view);
		player.getplayercoordinateforview(player.getplayercoordinateX(), player.getplayercoordinateY());


		};




		/////////////////////////////������ �����/////////////////////
		for (int i = 0; i < HEIGHT_MAP; i++)
			for (int j = 0; j < WIDTH_MAP; j++)
			{
				if (TileMap[i][j] == ' ')  mapS.setTextureRect(IntRect(0, 0, 20, 20)); //���� ��������� ������ ������, �� ������ 1� ���������
				if ((TileMap[i][j] == '0')) mapS.setTextureRect(IntRect(147, 0, 20, 20));//���� ��������� ������ 0, �� ������ 3� ���������
				if ((TileMap[i][j] == '1')) mapS.setTextureRect(IntRect(303, 0, 20, 20));//���� ��������� ������ 0, �� ������ 3� ���������


				mapS.setPosition(j * 20, i * 20);//�� ���� ����������� ����������, ��������� � �����. �� ���� ������ ������� �� ��� �������. ���� ������, �� ��� ����� ���������� � ����� �������� 32*32 � �� ������ ���� �������

				window.draw(mapS);//������ ���������� �� �����
			}




		if (stolb1.intersects1Touch(stolb1.s,player.s)) {

			player.playerScore += 1;

			
		}

		if (stolb2.intersects1Touch(stolb2.s, player.s)) {

			player.playerScore += 1;



		}
	

		if (stolb3.intersects1Touch(stolb3.s, player.s)) {

			player.playerScore += 1;



		}




		text playerSound("");
		playerSound.getChislo(player.playerScore);
		playerSound.sleditForSprite(player.s, 50, -50);
		playerSound.draw(window);





		window.draw(player.s);


		//window.draw(stolb1.s);
		//window.draw(stolb2.s);
		//window.draw(stolb3.s);


		if (!player.life) {

			text gameOver("GAME OVER :BALL:: ");

			gameOver.setFillTextColor(255, 0, 0);

			gameOver.sleditForSprite(player.s,-200,0);

			gameOver.getChislo(player.playerScore);
			gameOver.setCharacterSize(60);



			gameOver.draw(window);
			

		}



		window.display();
	}
	return 0;
}