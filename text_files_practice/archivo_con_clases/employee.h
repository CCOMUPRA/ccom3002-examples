#include <iostream>

using namespace std;

// Crear un struct Person con la info personal de la persona.
struct Person
{
	string name;
	string lastname;
	int age;
	string homeTown;
};

class Employee
{
private:
	// Una variable de persona con su info personal
	Person infoPersonal;
	double rate;
	double salary;
	double hoursWorked;

public:
	// Inicializa las variables a 0
	Employee();
	Employee(Person pi, double r, double s, double h);
	void setPersonalInfo(Person);
	Person getPersonalInfo();
	void setRate(double);
	double getRate();
	void setSalary(double);
	double getSalary();
	void print();
};