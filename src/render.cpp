#include "include/render.h"

Render::Render(const unsigned &winW, const unsigned &winH) : window(sf::RenderWindow(sf::VideoMode(winW, winH), "Random Musing",sf::Style::Close)) {}
Render::~Render() {}

void Render::runSimulation(){
	sf::RectangleShape rect;
	rect.setSize(sf::Vector2f(100,200));
	rect.setPosition(sf::Vector2f(300,300));
	rect.setFillColor(sf::Color::White);

	while(window.isOpen()){
		sf::Event e;
		while(window.pollEvent(e)){
			switch(e.type){
				case sf::Event::Closed:
					window.close();
					break;
			}
		}
		window.clear();
		updateState();
		drawNDisplay(rect);
		window.display();
	}
}

void Render::updateState(){
}

void Render::drawNDisplay(const sf::RectangleShape &rect){
	window.draw(rect);
}
