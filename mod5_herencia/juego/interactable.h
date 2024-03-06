#include <iostream>

using namespace std;

#ifndef INTERACTABLE_H
#define INTERACTABLE_H

enum effect
{
	NONE,
	DAMAGE,
	HEAL,
	BUFF,
	DEBUFF
};

class Interactable
{
private:
	string name;
	bool isInteracted;
	effect powerup;

public:
	Interactable();
	Interactable(string name, bool isInteracted, effect powerup);

	void setName(string name);
	string getName();

	void setIsInteracted(bool isInteracted);
	bool getIsInteracted();

	void setPowerup(effect powerup);
	effect getPowerup();
};

#endif; // INTERACTABLE_H
