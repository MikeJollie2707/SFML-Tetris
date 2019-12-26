#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Window
{
public:
	Window(sf::Vector2f windowSize = sf::Vector2f(800, 600), std::string title = "Title");
	~Window();

	sf::RenderWindow& getWindow() { return window; }
	sf::Vector2f getSize() { return winSize; }

private:
	sf::RenderWindow window;
	sf::Vector2f winSize;
	std::string winTitle;
};

