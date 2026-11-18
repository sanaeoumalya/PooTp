#pragma once
#include "Employer.h"
#include<iostream>
using namespace std;
class Commercial : public Employer
{
private:
    double fixe;
    double ventes;
    double taux;
public:
    Commercial(string n, double in, double i, double f, double t);
    void modifierVentes(double v);
    double calculerSal(double) const override;
    void afficher() const override;
}