#include <iostream>
#include "character.h"
#include "level.h"

using namespace std;

Level::Level()
{
	background = "Default";
	floorSpace = 0;
	endFlag = false;
}

Level::Level(string background, float floorSpace, Interactable interactables[], Enemy enemies[], bool endFlag)
{
	this->background = background;
	this->floorSpace = floorSpace;
	this->endFlag = endFlag;

	for (int i = 0; i < 5; i++)
	{
		this->interactables[i] = interactables[i];
		this->enemies[i] = enemies[i];
	}
}

void Level::setBackground(string background)
{
	this->background = background;
}

string Level::getBackground()
{
	return background;
}

void Level::setFloorSpace(float floorSpace)
{
	this->floorSpace = floorSpace;
}

float Level::getFloorSpace()
{
	return floorSpace;
}

void Level::setInteractables(Interactable interactables[])
{
	for (int i = 0; i < 5; i++)
	{
		this->interactables[i] = interactables[i];
	}
}

void Level::setEnemies(Enemy enemies[])
{
	for (int i = 0; i < 5; i++)
	{
		this->enemies[i] = enemies[i];
	}
}

void Level::setEndFlag(bool endFlag)
{
	this->endFlag = endFlag;
}

bool Level::getEndFlag()
{
	return endFlag;
}

void Level::setCharacter(Character character)
{
	this->character = character;
}

Character Level::getCharacter()
{
	return character;
}
