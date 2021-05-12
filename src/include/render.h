#include <SFML/Graphics.hpp>
#include "env.h"
class Render{
	private:
		sf::RenderWindow window;
		void drawNDisplay(const sf::RectangleShape &rect);
		Env env;
	public:
		Render(const unsigned &winW, const unsigned &winH);
		~Render();
		void runSimulation();
		void updateState();
};
