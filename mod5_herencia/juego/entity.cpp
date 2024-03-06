#include <iostream>
#include "entity.h"

using namespace std;

Entity::Entity()
{
	name = "Default";
	health = 100;
	damage = 10;
	defense = 5;
	isAlive = true;
}

Entity::Entity(string name, int health, int damage, int defense, bool isAlive)
{
	this->name = name;
	this->health = health;
	this->damage = damage;
	this->defense = defense;
	this->isAlive = isAlive;
}

void Entity::setName(string name)
{
	this->name = name;
}

string Entity::getName()
{
	return name;
}

void Entity::setHealth(int health)
{
	this->health = health;
}

int Entity::getHealth()
{
	return health;
}

void Entity::setDamage(int damage)
{
	this->damage = damage;
}

int Entity::getDamage()
{
	return damage;
}

void Entity::setDefense(int defense)
{
	this->defense = defense;
}

int Entity::getDefense()
{
	return defense;
}

void Entity::setIsAlive(bool isAlive)
{
	this->isAlive = isAlive;
}

bool Entity::getIsAlive()
{
	return isAlive;
}
