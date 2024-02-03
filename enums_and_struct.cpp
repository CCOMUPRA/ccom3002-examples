#include <iostream>
using namespace std;

// Ejemplo para declaración de enumeradores
enum colors
{
	RED,
	BLUE,
	WHITE
};
colors colorFavorito = BLUE;

struct studentStruct
{
	string firstName;
	string lastName;
	int age;
	string municipality;
	colors favoriteColor;
};

void fillIn(studentStruct students[]);
colors assignEnum(int enteredValue);
string printStringBasedOnEnum(colors val);

int main(int argc, char const *argv[])
{

	studentStruct students[2];
	fillIn(students);

	for (int i = 0; i < 2; i++)
	{
		cout << students[i].firstName << " ";
		cout << students[i].lastName << endl;
		cout << students[i].age << endl;
		cout << students[i].municipality << endl;
		cout << printStringBasedOnEnum(students[i].favoriteColor) << endl;
		cout << endl;
	}

	return 0;
}

void fillIn(studentStruct students[])
{
	for (int i = 0; i < 2; i++)
	{
		int tempEnumValue = 0;
		cin >> students[i].firstName;
		cin >> students[i].lastName;
		cin >> students[i].age;
		cin >> students[i].municipality;
		// Un enumerador no se puede entrar directamente a través del terminal.
		cin >> tempEnumValue;
		// Asignar el valor real.
		students[i].favoriteColor = assignEnum(tempEnumValue);
	}
}

colors assignEnum(int enteredValue)
{
	if (enteredValue == 0)
		return RED;
	else if (enteredValue == 1)
		return BLUE;
	else if (enteredValue == 2)
		return WHITE;
}

string printStringBasedOnEnum(colors val)
{
	if (val == RED)
		return "red";
	else if (val == BLUE)
		return "blue";
	else if (val == WHITE)
		return "white";
}
