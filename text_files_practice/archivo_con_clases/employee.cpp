#include <iostream>
#include "employee.h"

using namespace std;

Employee::Employee()
{
	rate = 0.0;
	salary = 0.0;
	hoursWorked = 0.0;
	infoPersonal.name = "";
	infoPersonal.lastname = "";
	infoPersonal.age = 0;
	infoPersonal.homeTown = "";
}

Employee::Employee(Person pi, double r, double s, double h)
{
	rate = r;
	salary = s;
	hoursWorked = h;
	infoPersonal = pi;
}

void Employee::setPersonalInfo(Person pi)
{
	infoPersonal = pi;
}

Person Employee::getPersonalInfo()
{
	return infoPersonal;
}

void Employee::setRate(double r)
{
	rate = r;
}

double Employee::getRate()
{
	return rate;
}

void Employee::setSalary(double h)
{
	salary = rate * h;
}

double Employee::getSalary()
{
	return salary;
}

void Employee::print()
{
	cout << "El nombre de la persona es " << infoPersonal.name << " " << infoPersonal.lastname << endl;
	cout << "El salario es: " << salary << endl;
}