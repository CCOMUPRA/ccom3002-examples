#include <iostream>
#include "character.h"
using namespace std;

Character::Character()
{
	name = "Default";
	health = 100;
	damage = 10;
	defense = 5;
	isAlive = true;
}

Character::Character(string name, int health, int damage, int defense, bool isAlive)
{
	this->name = name;
	this->health = health;
	this->damage = damage;
	this->defense = defense;
	this->isAlive = isAlive;
}

void Character::jump()
{
	cout << name << " jumps!" << endl;
}

void Character::useItem(Interactable &item)
{
	cout << name << " uses " << item.getName() << "!" << endl;

	if (item.getPowerup() == HEAL)
	{
		health += 10;
		cout << name << " heals for " << 10 << " health!" << endl;
	}
	else if (item.getPowerup() == DAMAGE)
	{
		damage += 30;
		cout << name << " gains " << 30 << " damage!" << endl;
	}
	else if (item.getPowerup() == BUFF)
	{
		damage += 20;
		defense += 20;
		cout << name << " gains " << 20 << " defense!" << endl;
	}
}

void Character::attack(Enemy &enemy)
{
	cout << name << " attacks " << enemy.getName() << " for " << damage << " damage!" << endl;
	enemy.setHealth(enemy.getHealth() - damage);
	if (enemy.getHealth() <= 0)
	{
		enemy.setIsAlive(false);
	}
}