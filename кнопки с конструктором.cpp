#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
using namespace sf;
using namespace std;




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


		//начальный цвет
		txt.setFillColor(Color(0, 0, 0));

		txt.setString(shribeName);



		shribe = shribeName;

	}


	//текст будет следить за спрайтом
	virtual void sleditForSprite(Sprite& s, float x, float y) {

		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);



	}

	//дать число тексту
	void getChislo(float n) {



		ostringstream chislo;

		chislo << n;

		txt.setString(shribe + chislo.str());





	}




	//ф-я для текста
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

	//поменять размер шрифта
	void setCharacterSize(float a) {


		txt.setCharacterSize(a);

	}





	//нарисовать в окне
	virtual void draw(RenderWindow& window) {


		window.draw(txt);



	};


};


class Button :public text {
private:

	float w, h;

	SoundBuffer buffer;

	Sound sound;

public:



	RectangleShape button;//сам крвадрат

	bool pressed; //нажата кнопка

	bool conectMouse; // наведина мышка 


	Button(float W, float H, string shribeName) :text(shribeName) {


		w = W;
		h = H;





		button.setSize(Vector2f(W, H));

		txt.setPosition(button.getPosition());

		pressed = false;

		conectMouse = false;
	}

	//кнопка следит за спрайтом
	void sleditForSprite(Sprite& s, float x, float y) override {


		button.setPosition(s.getPosition().x + x, s.getPosition().y + y);
		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);



	}



	//рисуеи и кнопк(квадрат) и текст
	void draw(RenderWindow& window)override {

		txt.setPosition(button.getPosition());


		window.draw(button);
		window.draw(txt);
	}



	//нажатие и наведение (!!!!! в EVENT   !!!@! 
	void update(Event& event, RenderWindow& window) {

		Vector2i mousePosition = Mouse::getPosition(window);
		Vector2f pos = window.mapPixelToCoords(mousePosition);//переводим их в игровые (уходим от коорд окна)

		//если нажфта
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

	

	//дать звук
	void getSound(string failAudio) {

		buffer.loadFromFile(failAudio);

		sound.setBuffer(buffer);

		


	}


	//играть звук
	void soundPlay() {

		sound.play();

	}

	//поменять громкость
	void soundSetVolume(int volume) {

		sound.setVolume(volume);

	}






	//поменять размеры квадрата кнопки 
	void setButtonSize(float W, float H) {

		w = W;
		h = H;

		button.setSize(Vector2f(W, H));


	}


	//Поменять на центр 
	void setOringCenter() {


		button.setOrigin(w / 2, h / 2);


	}



	//поменять позицию
	void setPosition(float x, float y)  override {

		button.setPosition(x, y);

	}

	//поменять цвет квадрата
	void setFillRacktengelColor(float R, float G1, float B) {

		button.setFillColor(Color(R, G1, B));



	}



	//в конце PRESSED
	void braek() {

		pressed = false;

	};



};



int main()
{
	RenderWindow window(VideoMode(640, 480), "lol");
	
	

	SoundBuffer buffer;
	buffer.loadFromFile("sound/presse.ogg");// тут загружаем в буфер что то
   
	Button a(100, 40, "audio");

	a.setPosition(200, 200);

	while (window.isOpen())
	{
		Vector2i mousePoz = Mouse::getPosition(window);
		


		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		
			a.update(event, window);
		
			 


		}


		window.clear(Color(0, 128, 129));

		a.draw(window);


		if (a.pressed) {

			a.getSound("sound/presse.ogg");
			a.soundPlay();
			a.soundSetVolume(100);

			
			a.braek();  //типо конец нажатия
		}
	

		if (a.conectMouse) {

			a.setFillRacktengelColor(250, 0, 0);


		}

		else a.setFillRacktengelColor(255, 255, 255);
		


		window.display();
	}
	return 0;
}}