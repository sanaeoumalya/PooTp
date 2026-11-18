#pragma once
#include "Employer.h"
class Personnel
{
private:
    Employer** tab;
    int nbEmp;
public:
    Personnel();
    void ajouterEmploye(Employer* e);
    double sommeSalaires() const;
    void afficherPersonnel() const;
    ~Personnel();
}