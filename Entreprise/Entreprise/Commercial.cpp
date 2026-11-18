#include "Commercial.h"

Commercial::Commercial(string n,double in , double i, double f, double t):Employer(n,in)
{
    this->fixe = f;
    this->taux = t;
    this->ventes = 0;
}
void Commercial::modifierVentes(double v)
{
    this->ventes = v;
}
double Commercial::calculerSal(double fixe) const
{
    return fixe + ventes * taux;
}
void Commercial::afficher() const
{
   this-> Employer::afficher();

    cout << "Ventes : " << ventes << endl;
    cout << "Salaire commercial : "<< calculerSal(fixe) << endl;
}
