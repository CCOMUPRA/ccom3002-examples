#include <iostream>

using namespace std;

class Character
{
protected:
	string name;
	int health;

public:
	Character()
	{
		name = "Default";
		health = 100;
	}

	void printInfo()
	{
	}

	virtual void attack() = 0;
	virtual void defend() = 0;
};

class Warrior : public Character
{
private:
	int strength;

public:
	Warrior()
	{
		name = "Warrior";
		health = 150;
		strength = 10;
	}
};

class Mage : public Character
{
private:
	int mana;

public:
	Mage()
	{
		name = "Mage";
		health = 100;
		mana = 100;
	}
};

int main()
{
	// Create objects of derived classes using the Character base class pointer type.

	// Execute printInfo, attack and defend methods of the derived classes.

	return 0;
}