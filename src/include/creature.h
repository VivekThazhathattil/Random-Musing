#include "include/network.h"
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
class Creature{
	private:
		Network network; /* creature's mind */
		sf::CircleShape body; /* creature's body */
		Position pos;

		void setCreatureBody();
		void setRandomPosition();
	public:
		Creature();
		~Creature();

		void setPosition(const Position pos) { this->pos = pos; }
		Position getPosition() const { return pos; }
};
