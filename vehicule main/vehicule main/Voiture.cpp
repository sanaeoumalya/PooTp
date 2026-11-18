#include "Voiture.h"

Voiture::Voiture(string ma, int vi , int q,Moteur*m):Vehicule(ma,vi)
{
	this->QteFuel = q;
	this->moteur = m;
}

void Voiture::afficher()
{
	this->moteur->afficher();
	cout << "la quantite de fuel est :" << this->QteFuel << endl;
	this->Vehicule::afficher();
}

Voiture::~Voiture()
{
}
