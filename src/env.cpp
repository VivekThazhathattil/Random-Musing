#include "include/env.h"

Env::Env() {}
Env::~Env() {}
void Env::addCreatureToEnv() {
	creature.push_back(Creature());
}
void Env::removeCreatureFromEnv(const unsigned &creatureIdx) {
	creatures.erease(vec.begin() + creatureIdx);
}
void Env::removeAllCreaturesFromEnv(){
	creatures.clear();
}
