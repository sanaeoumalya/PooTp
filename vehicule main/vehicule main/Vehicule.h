#pragma once
#include<iostream>
using namespace std;
class Vehicule
{
private:
	string marque;
	int Vitesse;
public:
	Vehicule(string, int);
	virtual void afficher();
	~Vehicule();

};

