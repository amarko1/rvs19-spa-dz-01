#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
	// smoothed edges(Antialiased shapes)
	sf::ContextSettings settings;
	settings.antialiasingLevel = 11;

	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!", sf::Style::Default, settings);
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}