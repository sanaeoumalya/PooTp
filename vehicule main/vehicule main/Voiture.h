#pragma once
#include "Vehicule.h"
#include "Moteur.h"
class Voiture :public Vehicule
{
	private:
	int QteFuel;
	Moteur* moteur;
public:
	Voiture(string, int, int,Moteur*);
	void afficher() override;
	~Voiture();
};

