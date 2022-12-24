#include"SFML\System.hpp"
#include"SFML\Graphics.hpp"
#include"SFML\Window.hpp"
#include"SFML\Audio.hpp"
#include"SFML\Network.hpp"

using namespace sf;

int main() {
	
	RenderWindow window(VideoMode(800, 600), "OKE JALAN", Style::Default);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		// Update

		// Draw
		window.clear();
		
		// Draw stuff
		
		// Finished Drawing
		window.display();

		// Add Lobby screen
		// Fix bug Lobby screen

		// Edit code
		for (int i = 0; i < 5; i++) {
			// oke
			// riyaldi
			// fix bug
			// test
		}

		//itaa
    
		// ini dari rifqi

	}

	return 0;
}