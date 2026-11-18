#include "Responsable.h"
#include <iostream>
using namespace std;
Responsable::Responsable(string n, double d, int numsub, int nummax) :Employer(n, d)
{
	this->numSub = numsub;
	this->numSubMax = nummax;
	tab = new Employer * [numSubMax];
	for (int i = 0; i < numSubMax; i++) {
		tab[i] = nullptr;
	}
}
void Responsable::afficher() const
{
	this->Employer::afficher();
	for (int i = 0; i < numSub; i++) {
		cout << this->tab[i] << endl;
	}

}
