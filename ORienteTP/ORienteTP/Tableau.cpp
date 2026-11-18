#include "Tableau.h"
#include <exception>

Tableau::Tableau(int t)
{
	this->taille = t;
	this->tab=new float[taille];
	for (int i = 0; i < taille; i++) {
		tab[i] = 0;
	}
}

Tableau::Tableau(const Tableau& a)
{
	this->taille =a.taille;
	this->tab = new float[a.taille];
	for (int i = 0; i < taille; i++) {
		tab[i] = a.tab[i];
	}
}

Tableau& Tableau::operator=(const Tableau a)
{
	if (this != &a) {
		delete[]tab;
		this->taille = a.taille;
		this->tab = new float[taille];
		for (int i = 0; i < taille; i++) {
			tab[i] = a.tab[i];
		}
	}
	return *this;
}
float& Tableau::operator[](int i)
{
	if (i >=0 && i < this->taille) {
		return this->tab[i];
	}
	else {
		exit(-1);
	}
}

Tableau::~Tableau()
{
	delete[] tab;
}
