#include "include/creature.h"

Creature::Creature(){
	setRandomPosition();
}
Creature::~Creature(){}

void Creature::setCreatureBody(){
	body.setPosition(sf::Vector2f());
}

void Creature::setRandomPosition(){
	pos.x = rand()%
}
