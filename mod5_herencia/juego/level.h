#include <iostream>
#include "interactable.h"
#include "enemy.h"

using namespace std;

#ifndef LEVEL_H
#define LEVEL_H

class Level
{
private:
	string background;
	float floorSpace;
	Interactable interactables[5];
	Enemy enemies[5];
	Character character;
	bool endFlag;

public:
	Level();
	Level(string background, float floorSpace, Interactable interactables[], Enemy enemies[], bool endFlag);

	void setBackground(string background);
	string getBackground();

	void setFloorSpace(float floorSpace);
	float getFloorSpace();

	void setInteractables(Interactable interactables[]);

	void setEnemies(Enemy enemies[]);

	void setEndFlag(bool endFlag);
	bool getEndFlag();

	void setCharacter(Character character);
	Character getCharacter();
};

#endif; // LEVEL_H