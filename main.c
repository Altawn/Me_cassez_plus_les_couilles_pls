#include "not_the_main.h"
/*
 * Ce qui a changé depuis l'ancienne version :
 * Nouvelle affichage pour la sauvegarde
 * Fin du choix entre credits et regles
 * Quand option 4 choisie dans le menu, affichage direct des credits et regles
 */
int main()
{
   int choix;

   choix = menu();
   conditions(choix);

}

/*
 * Table des accents :
 * 130 = é
 * 133 = à
 * 138 = è
 * 135 = ç
 * 136 = ê
 */