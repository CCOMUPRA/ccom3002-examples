#include <iostream>
#include "interactable.h"

using namespace std;

Interactable::Interactable()
{
	name = "Default";
	isInteracted = false;
	powerup = NONE;
}

Interactable::Interactable(string name, bool isInteracted, effect powerup)
{
	this->name = name;
	this->isInteracted = isInteracted;
	this->powerup = powerup;
}

void Interactable::setName(string name)
{
	this->name = name;
}

string Interactable::getName()
{
	return name;
}

void Interactable::setIsInteracted(bool isInteracted)
{
	this->isInteracted = isInteracted;
}

bool Interactable::getIsInteracted()
{
	return isInteracted;
}

void Interactable::setPowerup(effect powerup)
{
	this->powerup = powerup;
}

effect Interactable::getPowerup()
{
	return powerup;
}
