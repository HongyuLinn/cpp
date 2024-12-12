// Dibujo SFML.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <SFML/window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;


int main()
{
	// carga i fer la imatge que li diem
	Texture valTexture;
	Sprite valSprite;

	Texture baTexture;
	Sprite baSprite;

	Texture susTexture;
	Sprite susSprite;

	Texture amoTexture;
	Sprite amoSprite;

	// tamany de la finestra
	RenderWindow window(VideoMode(1470, 980), "Dibujo");

	window.setFramerateLimit(60);

	// cap i cara del personatge

	CircleShape circ(50);
	circ.setFillColor(Color(253, 188, 180,255));
	circ.setPosition(Vector2f(1000, 300));

	RectangleShape rect5(Vector2f(20, 5));
	rect5.setFillColor(Color::Black);
	rect5.setPosition(Vector2f(1015, 320));

	RectangleShape rect6(Vector2f(20, 5));
	rect6.setFillColor(Color::Black);
	rect6.setPosition(Vector2f(1065, 320));

	RectangleShape rect7(Vector2f(50, 5));
	rect7.setFillColor(Color::Black);
	rect7.setPosition(Vector2f(1025, 370));

	// cos

	RectangleShape rect(Vector2f(100, 200));
	rect.setFillColor(Color(64, 64, 64, 255));
	rect.setPosition(Vector2f(1000, 400));

	// cames i braços

	RectangleShape rect1(Vector2f(35, 150));
	rect1.setFillColor(Color(64,64,64,255));
	rect1.setPosition(Vector2f(1000, 600));

	RectangleShape rect2(Vector2f(35, 150));
	rect2.setFillColor(Color(64, 64, 64, 255));
	rect2.setPosition(Vector2f(1065, 600));

	RectangleShape rect3(Vector2f(35, 150));
	rect3.setFillColor(Color(64, 64, 64, 255));
	rect3.setPosition(Vector2f(965, 400));

	RectangleShape rect4(Vector2f(35, 150));
	rect4.setFillColor(Color(64, 64, 64, 255));
	rect4.setPosition(Vector2f(1100, 400));

	//banyes

	ConvexShape tri;
	tri.setPointCount(3);
	tri.setPoint(0, Vector2f(-15, 0));
	tri.setPoint(1, Vector2f(0, -40));
	tri.setPoint(2, Vector2f(15, 0));
	tri.setFillColor(Color::Red);
	tri.setPosition(1025,310);
	tri.rotate(-25);

	ConvexShape tri2;
	tri2.setPointCount(3);
	tri2.setPoint(0, Vector2f(-15, 0));
	tri2.setPoint(1, Vector2f(0, -40));
	tri2.setPoint(2, Vector2f(15, 0));
	tri2.setFillColor(Color::Red);
	tri2.setPosition(1075, 310);
	tri2.rotate(25);







	// descarga les imatges
	valTexture.loadFromFile("Assets/graphics/16.png");
	baTexture.loadFromFile("Assets/graphics/17.png");
	susTexture.loadFromFile("Assets/graphics/20.png");
	amoTexture.loadFromFile("Assets/graphics/21.png");

	// fica les imatges
	valSprite.setTexture(valTexture);
	baSprite.setTexture(baTexture);

	// fem que la imatge bala 
	baSprite.setScale(0.1f, 0.1f);
	//tamany de la finestra
	int ancho_ventana = 214, alto_ventana = 326; 
	//coordenadas iniciales de figura 
	int x_coord = ancho_ventana / 2;
	int y_coord = alto_ventana / 2; 
	baSprite.setPosition(x_coord, y_coord);


	susSprite.setTexture(susTexture);
	//tamaño de la ventana
	int ancho_ventana1 = 214, alto_ventana1 = 326; 
	//coordenadas iniciales de figura 
	int x_coor = ancho_ventana1 / 2;
	int y_coor = alto_ventana1 / 2; 
	susSprite.setPosition(0,0);
	susSprite.setScale(0.8f, 0.8f);

	// fica la imatge del among us i el fa mes petit
	amoSprite.setTexture(amoTexture);
	amoSprite.setPosition(-300, 100);
	amoSprite.setScale(0.4f, 0.4f);
	amoSprite.setOrigin (0, 0);


	// obre la finestra
	while (window.isOpen())
	{
		// dibuixa en la finestra tot lo que hem ficat
		window.draw(valSprite);
		
		window.draw(tri);
		window.draw(tri2);

		window.draw(circ);

		window.draw(rect);
		window.draw(rect1);
		window.draw(rect2);
		window.draw(rect3);
		window.draw(rect4);
		window.draw(rect5);
		window.draw(rect6);
		window.draw(rect7);

		
		window.draw(amoSprite);

		// moviment i rotacio del among us
		amoSprite.move(Vector2f(4, 0));
		amoSprite.rotate(0.4);

		// moure la imatge bala
		window.draw(baSprite);

		if (Keyboard::isKeyPressed(Keyboard::Right))
			x_coord += 10;
		if (Keyboard::isKeyPressed(Keyboard::Left))
			x_coord -= 10;
		if (Keyboard::isKeyPressed(Keyboard::Up))
			y_coord -= 10;
		if (Keyboard::isKeyPressed(Keyboard::Down))
			y_coord += 10;
		baSprite.setPosition(x_coord, y_coord); 
		window.draw(baSprite);
		
		

		// pitjar tecla espai surt la imatge d'un payaso
		if (Keyboard::isKeyPressed(Keyboard::Space))
			//payaso
		{
			window.draw(susSprite);
		}
		
		window.display();
		
	 }
	return 0;
}

