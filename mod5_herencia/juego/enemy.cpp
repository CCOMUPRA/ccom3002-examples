#include <iostream>

#include "enemy.h"

using namespace std;

Enemy::Entity()
{
	name = "Default";
	health = 100;
	damage = 10;
	defense = 5;
	isAlive = true;
}

Enemy::Entity(string name, int health, int damage, int defense, bool isAlive)
{
	this->name = name;
	this->health = health;
	this->damage = damage;
	this->defense = defense;
	this->isAlive = isAlive;
}

void Enemy::insult(string insultMessage)
{
	cout << insultMessage << endl;
}

void Enemy::attack(Character &character)
{
	cout << name << " attacks " << character.getName() << " for " << damage << " damage!" << endl;
	character.setHealth(character.getHealth() - damage);
	if (character.getHealth() <= 0)
	{
		character.setIsAlive(false);
	}
}