#include "Personnel.h"
Personnel:: Personnel() {
        nbEmp = 0;
        tab = NULL;
    }

void Personnel:: ajouterEmploye(Employer* e) {

        Employer** temp = new Employer * [nbEmp + 1];

        for (int i = 0; i < nbEmp; i++) {
            temp[i] = tab[i];
        }

        temp[nbEmp] = e;

        delete[] tab;

        tab = temp;
        nbEmp++;
    }

double Personnel:: sommeSalaires() const {

        double somme = 0;

        for (int i = 0; i < nbEmp; i++) {
            somme += tab[i]->calculerSal(somme);
        }

        return somme;
    }

    void Personnel::afficherPersonnel() const {

        for (int i = 0; i < nbEmp; i++) {
            tab[i]->afficher();
        }
    }

    Personnel:: ~Personnel() {
        delete[] tab;
    }

