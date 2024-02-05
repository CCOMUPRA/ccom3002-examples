#include <iostream>
#include <fstream>
#include "employee.h"

using namespace std;

int main(int argc, char const *argv[])
{

	Employee employees[4];
	ifstream employeeTxt("employees.txt");
	ofstream variable("employees2.txt");
	fstream ejemplo("employees2.txt");
	Person josephPersona;
	cout << josephPersona.age;
	int i = 0;

	Employee joseph;

	while (!employeeTxt.eof())
	{
		string n, ln;
		int a;
		double r, h;
		// Represent la línea donde estoy.
		employeeTxt >> n >> ln >> a >> r >> h;
		variable << n << endl;

		ejemplo << n << endl;

		josephPersona.name = n;
		josephPersona.lastname = ln;
		josephPersona.age = a;
		josephPersona.homeTown = "Arecibo";

		employees[i].setPersonalInfo(josephPersona);
		employees[i].setRate(r);
		employees[i].setSalary(h);
		employees[i].print();
		i++;
	}

	ejemplo << 9 << endl;
	ejemplo.close();

	// joseph.print();
	// // Llamar las funciones de la clase
	// joseph.setPersonalInfo(josephPersona);
	// joseph.setRate(25.0);
	// joseph.setSalary(40.0);

	// joseph.print();

	// joseph.setRate(35.0);

	// joseph.setSalary(40.0);

	// joseph.print();
	// Llenar un arreglo de empleados con un archivo de texto

	return 0;
}
