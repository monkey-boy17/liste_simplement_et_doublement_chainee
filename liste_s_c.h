#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define T 100

typedef struct objet{

    char v;
    int suivant;

} objet;

typedef struct LSC {

    objet tab[T];
    int positionPremierLibre;
    int positionTete;
    int positionCle;

} LSC;

void creerListe(LSC* lsc);
