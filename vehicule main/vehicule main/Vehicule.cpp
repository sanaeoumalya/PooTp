#include "Vehicule.h"

Vehicule::Vehicule(string m, int v)
{
	this->marque = m;
	this->Vitesse = v;
}

void Vehicule::afficher()
{
	cout << "la marque est :" << marque << endl;
	cout << "la vitesse est :" << Vitesse << endl;
}

Vehicule::~Vehicule()
{
}
