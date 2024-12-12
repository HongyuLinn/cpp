// proba entorn grafic.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <SFML/window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(2550, 1200), "Animation");
	// Set target frames per second
	window.setFramerateLimit(60);

	RectangleShape rect(Vector2f(50, 50));
	rect.setFillColor(Color::Red);
	rect.setOrigin(Vector2f(25, 25));
	rect.setPosition(Vector2f(50, 50));

	RectangleShape rect1(Vector2f(50, 50));
	rect1.setFillColor(Color::Blue);
	rect1.setOrigin(Vector2f(25, 25));
	rect1.setPosition(Vector2f(1000, 150));



	while (window.isOpen())
	{
		rect.rotate(999999.9f);
		rect.move(Vector2f(50, 0));

		rect1.rotate(99999.9f);
		rect1.move(Vector2f(0, 50));

		window.clear(Color::White);
		window.draw(rect);
		window.draw(rect1);
		window.display();

		if (rect.getPosition().x >=window.getSize().x)
		{

			rect.setPosition(Vector2f(0, 50));
		}
		if (rect1.getPosition().y >= window.getSize().y)
		{

			rect1.setPosition(Vector2f(1000, 50));
		}
	}



	return 0;
}
