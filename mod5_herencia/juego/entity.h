#include <iostream>

using namespace std;

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
protected:
	string name;
	int health;
	int damage;
	int defense;
	bool isAlive;

public:
	Entity();
	Entity(string name, int health, int damage, int defense, bool isAlive);

	void setName(string name);
	string getName();

	void setHealth(int health);
	int getHealth();

	void setDamage(int damage);
	int getDamage();

	void setDefense(int defense);
	int getDefense();

	void setIsAlive(bool isAlive);
	bool getIsAlive();
};

#endif // ENTITY_H
