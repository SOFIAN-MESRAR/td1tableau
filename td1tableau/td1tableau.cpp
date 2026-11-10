// td1tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

    #include <iostream>
    #include "Tableau.h"
    #include "TableauBorne.h"
    using namespace std;

 

    int main() {
        
        Tableau t1(3); 

        t1[0] = 5.5;
        t1[1] = 12.0;
        t1[2] = 8.3;

        cout << "T1[1] = " << t1[1] << endl;

       
        Tableau t2 = t1;
        cout << "T2[1]  = " << t2[1] << endl;

        TableauBorne tb(3, 1.0, 20.0);
        cout << "TableauBorne[0] = " << tb[0] << endl;

        return 0;
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
