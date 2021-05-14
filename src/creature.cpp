#include "include/creature.h"

Creature::Creature(){
	setRandomPosition();
}

Creature::~Creature(){}

void Creature::setCreatureBody(){
	m_body.setPosition(sf::Vector2f());
}

void Creature::setRandomPosition(){
}
