#include "network.h"
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
/**
 * \brief The creature that will have its own physical attributes and behaviour that is modulated at each timestep.
 *
 * This class serves as the blueprint for the 'creature' that will be released to the virtual environment where it
 * will try to emulate the basic essence of primal life forms - to replicate.
 */
class Creature{
	private:
	  	/**
		 * \brief Creature's mind 
		 *
		 * An object of class Creature will have its own 'mind' represented by its neural network */
		Network m_network;
		
		/**
		 * \brief Creature's body
		 *
		 * Whenever a Creature object is created, it will result in the creation of its body as well 
		 * The body's representational form is an SFML object*/
		sf::CircleShape m_body; 

		/**
		 * \brief Current m_position of the creature's body
		 */
		Position m_pos;

		/** \brief sets the graphical features of the creature's body */
		void setCreatureBody();

		/** \brief sets a random m_position for the current creature's body */
		void setRandomPosition();
	public:
		Creature();
		~Creature();

		/** \brief sets a specific m_position for the creature's body */
		void setPosition(const Position m_pos) { this->m_pos = m_pos; }

		/** \brief gets the current m_position for the creature's body */
		Position getPosition() const { return m_pos; }
};
