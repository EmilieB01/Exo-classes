// Exo classes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <iostream>

int main()
{
    StaticObject stObject(0,0);
    BreakableObject brObject(10, 10, 20);
    Mob mob(20, 20, 50, 1, 1);
    Player player(15, 15, 100, 4, 2);

    stObject.SetPos(1, 2);
    stObject.GetPos();

    brObject.GetHealth();
    brObject.GetMaxHealth();    
    brObject.TakeDamage(10);
    brObject.GetHealth();

    mob.GetPos();
    mob.GetDirX();
    mob.GetDirY();
    mob.SetDirection(1, 2);
    mob.GetDirX();
    mob.GetDirY();
    mob.Move();
    mob.GetPos();


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
