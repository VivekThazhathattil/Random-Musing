#include <SFML/Graphics.hpp>
#include "creature.h"
#include <vector>

class Env{
	private:
		std::vector<Creature> m_creatures;
	public:
		Env();
		~Env();
		void addCreatureToEnv();
		void removeCreatureFromEnv(const unsigned &creatureIdx);
		void removeAllCreaturesFromEnv();
		void mutate(); // mutation on the newly created creature.
		void inputOutputAction();
		void replicate(); // top 3 creatures replicated with mutations
};
