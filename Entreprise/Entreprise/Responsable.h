#pragma once
#include "Employer.h"

class Responsable : public Employer
{
private:
    Employer** tab;
     int numSubMax;
     int numSub;

public:
    Responsable(string,double,int,int);
    void afficher() const override;
    

};

