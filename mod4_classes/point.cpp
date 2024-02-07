#include <iostream>

using namespace std;

class point
{
private:
	double x;
	double y;

public:
	// Default constructor
	point()
	{
		x = 0;
		y = 0;
	}
	point(double newX, double newY)
	{
		x = newX;
		y = newY;
	}
	double getX();
	double getY();
	void showPoint();
	double calcDistance(point);
};

int main()
{
	point punto1(5.0, 7.0), punto2(7.0, 10.0);

	cout << punto1.getX() << endl;
	cout << punto1.getY() << endl;
	punto1.showPoint();

	cout << punto2.getX() << endl;
	cout << punto2.getY() << endl;
	punto2.showPoint();

	cout << punto1.calcDistance(punto2) << endl;
	cout << punto2.calcDistance(punto1) << endl;
	cout << punto1.calcDistance(punto1) << endl;

	return 0;
}

double point::getX()
{
	return x;
}

double point::getY()
{
	return y;
}

void point::showPoint()
{
	cout << "(" << x << ", " << y << ")" << endl;
}

double point::calcDistance(point p)
{
	double x1, x2, y1, y2;
	// Punto 1 (yo)
	x1 = x;
	y1 = y;
	// Punto 2 (el otro)
	x2 = p.getX();
	y2 = p.getY();

	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
