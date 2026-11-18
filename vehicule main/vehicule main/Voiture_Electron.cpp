#include "Voiture_Electron.h"
Voiture_Electron::Voiture_Electron(string ma, int v,Moteur* mo, int Q , double ni):Voiture(ma,v,Q,mo)
{
	this->NiveauBatt = ni;
}

void Voiture_Electron::afficher()
{
	cout << "le niveaau de batterie est :" << this->NiveauBatt << endl;
	this->Voiture::afficher();
}

Voiture_Electron::~Voiture_Electron()
{
}
