#ifndef NOTTHEMENU_NOT_THE_MAIN_H
#define NOTTHEMENU_NOT_THE_MAIN_H

#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>

#define le_prenom_devient_long 100
#define nombre_joueurs_max 4
#define nombre_joueurs_min 2
#define couleur_blanche 15

int menu();
void color(int t,int f);
void conditions(int choix);
void nouvelle_partie();
void regles_et_credits();
void resume_pions(int joueurs, int numero[3], char nom[nombre_joueurs_max][le_prenom_devient_long]);

#endif //NOTTHEMENU_NOT_THE_MAIN_H
