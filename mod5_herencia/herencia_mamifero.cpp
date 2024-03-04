#include <iostream>

using namespace std;

class Mamifero
{
private:
	int patas;
	bool pelaje;
	string dieta;
	string tamano;

public:
	Mamifero()
	{
		patas = 4;
		pelaje = true;
		dieta = "Omnivoro";
		tamano = "Grande";
	}

	void alimentarCria()
	{
		cout << "Alimentando a la cria" << endl;
	}

	void comer()
	{
		cout << "Comiendo" << endl;
	}

	void parir()
	{
		cout << "Pariendo" << endl;
	}

	// Setters and getters
	void setPatas(int p)
	{
		patas = p;
	}

	int getPatas()
	{
		return patas;
	}

	void setPelaje(bool pelaje)
	{
		this->pelaje = pelaje;
	}

	bool getPelaje()
	{
		return pelaje;
	}

	void setDieta(string dieta)
	{
		this->dieta = dieta;
	}

	string getDieta()
	{
		return dieta;
	}

	void setTamano(string tamano)
	{
		this->tamano = tamano;
	}

	string getTamano()
	{
		return tamano;
	}
};

class Perro : public Mamifero
{
private:
	string raza;
	string nombre;
	string dueno;

public:
	Perro()
	{
		raza = "Pastor Aleman";
		nombre = "Firulais";
		dueno = "Juan";
	}

	void ladrar()
	{
		cout << "Ladrando" << endl;
	}

	void comer()
	{
		if (getTamano() == "Grande")
			cout << "Devouring" << endl;
		else
			cout << "Nibbling" << endl;
	}

	// Setters and getters
	void setRaza(string raza)
	{
		this->raza = raza;
	}

	string getRaza()
	{
		return raza;
	}

	void setNombre(string nombre)
	{
		this->nombre = nombre;
	}

	string getNombre()
	{
		return nombre;
	}

	void setDueno(string dueno)
	{
		this->dueno = dueno;
	}

	string getDueno()
	{
		return dueno;
	}
};

int main()
{
	Perro p;
	p.comer();
	p.Mamifero::comer();
	p.setTamano("Pequeno");
	p.comer();

	cout << "ACA ESTA EL MAMIFERO" << endl;
	Mamifero m;
	m.comer();

	return 0;
}