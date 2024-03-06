#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include "entity.h"
#include "interactable.h"

using namespace std;

#include "enemy.h"

class Character : public Entity
{
public:
	Character();
	Character(string name, int health, int damage, int defense, bool isAlive);

	void useItem(Interactable &item);
	void attack(Enemy &enemy);
	void jump();
};
#endif; // CHARACTER_H