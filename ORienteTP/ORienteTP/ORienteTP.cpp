// ORienteTP.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "TableauBorne.h"
#include "Tableau.h"
using namespace std;
int main()
{
    Tableau T(4);
    T[0] = 10;
    T[1] = 31;
    T[2] = 15;
    T[3] = 20;
    for (int i=0; i < 4; i++) {
    cout << T[i] << endl;
}
    Tableau T1(T);
    cout << "tableau T1:" << endl;
    for (int i=0; i < 4; i++) {
        cout << T1[i] << endl;
    }
    TableauBorne A(1, 5, 12);
    for (int i = 0; i < 12; i++) {
        cout << A[i] << endl;
    }







}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
