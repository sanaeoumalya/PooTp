#pragma once
class Tableau
{
protected:
	int taille;
	float* tab;
public:
	Tableau(int t=0);
	Tableau(const Tableau &);
	Tableau& operator=(const Tableau);
	 float& operator[](int i);
	~Tableau();
};

