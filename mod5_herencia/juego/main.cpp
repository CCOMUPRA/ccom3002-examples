#include <iostream>
#include "enemy.h"
#include "character.h"
#include "level.h"
#include "interactable.h"

using namespace std;

int main()
{
	Character player("Player", 100, 10, 5, true);
	Enemy enemy("Enemy", 100, 10, 5, true);
	Interactable interactables[5];
	Enemy enemies[5];

	// Fill in interactables
	for (int i = 0; i < 5; i++)
	{
		interactables[i] = Interactable("Interactable", "This is an interactable", HEAL);
	}

	// Fill in enemies
	for (int i = 0; i < 5; i++)
	{
		enemies[i] = Enemy("Enemy", 100, 10, 5, true);
	}

	Level level("Background", 100, interactables, enemies, false);
	level.setCharacter(player);

	player.attack(enemy);
	enemy.attack(player);

	return 0;
} //juan