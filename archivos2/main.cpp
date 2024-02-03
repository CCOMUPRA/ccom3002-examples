#include <iostream>
#include <fstream>

using namespace std;

const int NO_STUDENTS = 280;

// Get the average for one student only.
void getStudentAverageByIndex(int gradesExam1[], int gradesExam2[], int gradesExam3[], int index);
// Get the average for one student only.
void getStudentAverageByStudentNumber(int numEstudiantes[], int gradesExam1[], int gradesExam2[], int gradesExam3[], int numEstudianteBusqueda);
// Get the average of one exam only.
void getExamAverage(int gradesExam1[], int gradesExam2[], int gradesExam3[], int examChoice);

int main()
{

	int numEstudiantes[NO_STUDENTS];
	int gradesExam1[NO_STUDENTS];
	int gradesExam2[NO_STUDENTS];
	int gradesExam3[NO_STUDENTS];
	ifstream studentsTxt("students.txt");
	int i = 0;

	while (!studentsTxt.eof())
	{
		int numEst, exam1, exam2, exam3;
		// Represent la línea donde estoy.
		studentsTxt >> numEst >> exam1 >> exam2 >> exam3;
		// Guardar en los arreglos.
		numEstudiantes[i] = numEst;
		gradesExam1[i] = exam1;
		gradesExam2[i] = exam2;
		gradesExam3[i] = exam3;
		i++;
	}

	int sum = 0;
	for (int i = 0; i < NO_STUDENTS; i++)
	{
		cout << "Num estudiante " << numEstudiantes[i] << endl;
		cout << "Nota Ex 1 " << gradesExam1[i] << endl;
		cout << "Nota Ex 2 " << gradesExam2[i] << endl;
		cout << "Nota Ex 3 " << gradesExam3[i] << endl;

		double res = (gradesExam1[i] + gradesExam2[i] + gradesExam3[i]) / 3;
		cout << "Promedio estudiante en posición" << i << " = " << res << endl;

		sum = sum + gradesExam1[i];
	}

	cout << "Promedio Examen 1 " << sum / NO_STUDENTS << endl;

	getStudentAverageByStudentNumber(numEstudiantes, gradesExam1, gradesExam2, gradesExam3, 11111);

	return 0;
}

void getStudentAverageByIndex(int gradesExam1[], int gradesExam2[], int gradesExam3[], int index)
{
	double avg = (gradesExam1[index] + gradesExam2[index] + gradesExam3[index]) / 3;
	cout << "El promedio del estudiante en la posición " << index << " es " << avg << endl;
}

void getStudentAverageByStudentNumber(int numEstudiantes[], int gradesExam1[], int gradesExam2[], int gradesExam3[], int numEstudianteBusqueda)
{
	for (int i = 0; i < NO_STUDENTS; i++)
	{
		if (numEstudiantes[i] == numEstudianteBusqueda)
		{
			getStudentAverageByIndex(gradesExam1, gradesExam2, gradesExam3, i);
		}
	}
}

void getExamAverage(int gradesExam1[], int gradesExam2[], int gradesExam3[], int examChoice)
{

	// CODIGO 1
	int sum = 0;
	for (int i = 0; i < NO_STUDENTS; i++)
	{
		if (examChoice == 1)
			sum += gradesExam1[i];
		else if (examChoice == 2)
			sum += gradesExam2[i];
		else
			sum += gradesExam3[i];
	}

	cout << "Promedio es " << sum / NO_STUDENTS << endl;

	// CODIGO 2
	if (examChoice == 1)
	{
		int sum = 0;
		double promedio = 0;
		for (int i = 0; i < NO_STUDENTS; i++)
		{
			sum += gradesExam1[i];
		}
		cout << "Promedio " << sum / NO_STUDENTS << endl;
	}
	else if (examChoice == 2)
	{
		int sum = 0;
		double promedio = 0;
		for (int i = 0; i < NO_STUDENTS; i++)
		{
			sum += gradesExam2[i];
		}
		cout << "Promedio " << sum / NO_STUDENTS << endl;
	}
	else
	{
		int sum = 0;
		double promedio = 0;
		for (int i = 0; i < NO_STUDENTS; i++)
		{
			sum += gradesExam3[i];
		}
		cout << "Promedio " << sum / NO_STUDENTS << endl;
	}
}