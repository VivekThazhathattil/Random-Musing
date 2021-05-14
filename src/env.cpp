#include "include/env.h"

Env::Env() {}
Env::~Env() {}
void Env::addCreatureToEnv() {
	m_creatures.push_back(Creature());
}
void Env::removeCreatureFromEnv(const unsigned &creatureIdx) {
	m_creatures.erase(m_creatures.begin() + creatureIdx);
}
void Env::removeAllCreaturesFromEnv(){
	m_creatures.clear();
}
