#pragma once
#include <iostream>
using namespace std;
class Employer
{
private:
	string nom;
	const int matricule;
	double indice;
	static int compteur;
	static double val;
public:
	Employer(string,double);
	virtual double calculerSal(double val) const;//il faut ajouter const pourque salaire de base ne change pas
	virtual void afficher()const;
	~Employer();

};

