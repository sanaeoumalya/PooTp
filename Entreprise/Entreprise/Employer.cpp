#include "Employer.h"
 int Employer:: compteur = 0;
double Employer ::val = 0;
Employer::Employer(string nom,double indice):matricule(compteur++)//diff entre compt++ et ++compt
{
	this->nom = nom;
    this->indice = indice;

}

double Employer::calculerSal(double val) const
{
		double salaireAj = 0.0;
		salaireAj = (indice + indice * val) / 100;
		return salaireAj;
}

void Employer::afficher() const
{
	cout << "le nom d'employer est :" << this->nom << endl;
	cout << "le matricule est :" << this->matricule << endl;
	cout << "le indice est :" << this->indice<< endl;
	cout << "le salaire d'employer est :" << calculerSal(this->val) << endl;
}



Employer::~Employer()
{
}
