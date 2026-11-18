#include "TableauBorne.h"
#include <exception>
TableauBorne::TableauBorne(float min, float max, int taille) :
	Tableau(taille),min(min),max(max)
{
	tab[0] = min;
	tab[taille - 1] = max;
}

float TableauBorne::operator[](int i) const
{
	if (i < 0 || i >= taille) 
		exit(-1);
	
	return tab[i];

	
}

TableauBorne::~TableauBorne()
{
}


