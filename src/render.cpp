#include "include/render.h"

Render::Render(const unsigned &winW, const unsigned &winH) : m_window(sf::RenderWindow(sf::VideoMode(winW,\
				winH), "Random Musing",sf::Style::Close)) {}
Render::~Render() {}

void Render::runSimulation(){
	sf::RectangleShape rect;
	rect.setSize(sf::Vector2f(100,200));
	rect.setPosition(sf::Vector2f(300,300));
	rect.setFillColor(sf::Color::White);

	m_window.setPosition(sf::Vector2i(100,100));
	while(m_window.isOpen()){
		sf::Event e;
		while(m_window.pollEvent(e)){
			switch(e.type){
				case sf::Event::Closed:
					m_window.close();
					break;
			}
		}
		m_window.clear();
		updateState();
		drawNDisplay(rect);
		m_window.display();
	}
}

void Render::updateState(){
}

void Render::drawNDisplay(const sf::RectangleShape &rect){
	m_window.draw(rect);
}
