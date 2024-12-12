// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <array>
#include <vector>

// Make code easier to type with "using namespace"
using namespace sf;
const int Xmax = 1920;
const int Ymax = 1080;
Clock tiempo;
Time dt = tiempo.restart();

int main()
{

		struct CloudStructure {
		Sprite dibuix;
		bool Active;
		float Speed;
	} ;

	
	// Track whether the game is running
	bool paused = true;


	// Create a video mode object
	VideoMode vm(Xmax, Ymax);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("./graphics/background.png");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	// make a tree
	Texture textureTree;
	textureTree.loadFromFile("./graphics/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(810, 0);


	// bee 
	Texture textureBee;
	textureBee.loadFromFile("./graphics/bee.png");
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);

	//is the currently moving?
	bool beeActive = false;

	// How fast can the bee fly
	float beeSpeed = 0.0f;

	

	// fer 3 nuvols from 1 texture
	Texture textureCloud;
	//load 1 new texture
	textureCloud.loadFromFile("graphics/cloud.png");

	// 3 New sprites with the same texture
	
	const int NumMaxClouds = 3;
	CloudStructure spriteCloud[NumMaxClouds];

	for (int i = 0; i < NumMaxClouds; i++)
	{
		spriteCloud[i].dibuix.setTexture(textureCloud);
		spriteCloud[i].dibuix.setPosition(0, i * 250);
		spriteCloud[i].Active = false;
		spriteCloud[i].Speed = 0.0f;
	}
	// Position the clouds on the left of the screen


	// Are the clouds currently on screen?
	bool cloud0Active = false;
	bool cloud1Active = false;
	bool cloud2Active = false;
	// How fast is each cloud?
	float cloud0Speed = 0.0f;
	float cloud1Speed = 0.0f;
	float cloud2Speed = 0.0f;




	// Position the clouds on the left of the screen

	while (window.isOpen())
	{

		/*
		****************************************
		Handle the players input
		****************************************
		*/

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}


		/*
		****************************************
		Update the scene
		****************************************
		*/

		// measure time
		Time dt = tiempo.restart();

		// setup the bee
		if (!beeActive)
		{
			//how fast is the bee
			srand((int)time(0));
			beeSpeed = (rand() % 200) + 200;

			//how high is the bee
			srand((int)time(0) * 10);
			float height = (rand() % 500) + 500;
			spriteBee.setPosition(2000, height);
			beeActive = true;
		}
		else
			// move the bee
		{
			spriteBee.setPosition(
				spriteBee.getPosition().x -
				(beeSpeed * dt.asSeconds()),
				spriteBee.getPosition().y);

			// has the bee reached the left-hand edge of the screen?
			if (spriteBee.getPosition().x < -100)
			{
				//set it up ready to be a whole new bee next fframe
				beeActive = false;
			}
		}


		for (int i = 0; i < NumMaxClouds; i++)
		{
			if (!spriteCloud[i].Active)
			{
				srand((int)time(0) * 10);
				spriteCloud[i].Speed = (rand() % 200);
				spriteCloud[i].dibuix.setPosition(-200, (rand() % 500));
				spriteCloud[i].Active = true;
			}

			else
			{
				spriteCloud[i].dibuix.setPosition(
					spriteCloud[i].dibuix.getPosition().x +
					(spriteCloud[i].Speed * dt.asSeconds()),
					spriteCloud[i].dibuix.getPosition().y);
				if (spriteCloud[i].dibuix.getPosition().x > Xmax)
				{
					spriteCloud[i].Active = false;
				}
			}
		}





		
		/*
		****************************************
		Draw the scene
		****************************************
		*/

		// Clear everything from the last frame
		
		window.clear();


		// Draw our game scene here
		

		// Draw the clouds				

		window.draw(spriteBackground);
		for (int i = 0; i < NumMaxClouds; i++)
		{
			window.draw(spriteCloud[i].dibuix);
		}
		window.draw(spriteTree);
		window.draw(spriteBee);


		// Start the game
		if (Keyboard::isKeyPressed(Keyboard::Return))
		{
			paused = false;
		}

		// Show everything we just drew
		window.display();


	}

	return 0;
}