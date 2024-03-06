#include <iostream>
#include "entity.h"

using namespace std;
#ifndef ENEMY_H
#define ENEMY_H

#include "character.h" // Include the header file that defines the 'Character' class

class Enemy : public Entity
{
public:
	Enemy();
	Enemy(string name, int health, int damage, int defense, bool isAlive);

	void insult(string insultMessage);

	void attack(Character &character);
};

#endif; // ENEMY_H
