#include "Window.h"



Window::Window(sf::Vector2f windowSize, std::string title)
{
	this->winSize = windowSize;
	this->winTitle = title;

	window.create(sf::VideoMode(winSize.x, winSize.y), winTitle);
}


Window::~Window()
{
}
