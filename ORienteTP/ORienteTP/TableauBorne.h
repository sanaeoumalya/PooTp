#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
private:
    float min;
    float max;
public:
    TableauBorne(float min=0, float max=0,int=0);
    float operator[](int i)const;
    ~TableauBorne();
};

