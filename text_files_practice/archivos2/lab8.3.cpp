#include <iostream>
#include <iomanip>

using namespace std;

void tempAlta(int temperatures[], int size);

int main(int argc, char const *argv[])
{

	return 0;
}

void tempAlta(int temperatures[], int size)
{
	string meses[size] = {"enero", "febrero"};

	// Variable para temp mayor
	int mayor = temperatures[0];
	string mesMayor = meses[0];

	for (int i = 0; i < size; i++)
	{
		if (temperatures[i] > mayor)
		{
			mayor = temperatures[i];
			mesMayor = meses[i];
		}
	}

	// Presentar info
	cout << "mes"
		 << setw(20) << "temperatura" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(12) << left << meses[i] << setw(2) << right << temperatures[i] << endl;
	}

	cout << "Temperatura máxima: " << mayor << endl;
	cout << "mes: " << mesMayor << endl;
}
