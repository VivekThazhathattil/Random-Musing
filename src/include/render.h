#include <SFML/Graphics.hpp>
#include "env.h"
/** 
 *  \brief Produces the graphical output on screen	
 */ 
class Render{
	private:
		/*!
		 * An SFML RenderWindow object that handles window related operations:w
		 */
		sf::RenderWindow m_window;
		/*!
		 * draws the passed SFML objects on screen and directs window to display them.
		 * @param rect RectangleShape object which is the representation of a rectangle.
		 */
		void drawNDisplay(const sf::RectangleShape &rect);
		/*!
		 * Env object that acts as a container for holding every other objects to be 
		 * displayed onscreen.
		 */
		Env m_env;
	public:
		Render(const unsigned &winW, const unsigned &winH);
		~Render();
		void runSimulation();
		void updateState();
};
