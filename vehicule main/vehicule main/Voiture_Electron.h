#pragma once
#include "Voiture.h"
class Voiture_Electron : public Voiture
{
	private:
	double NiveauBatt;
public:
	Voiture_Electron(string, int,Moteur*, int, double);
	void afficher() override;
	~Voiture_Electron();
};

