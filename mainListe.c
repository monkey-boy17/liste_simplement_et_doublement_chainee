#include "./interfaceListeSC.c"




int main () {

    listSC liste;
    creerListe(&liste);
    insereEnTete(&liste, 'G');
    insereEnTete(&liste, 'K');
    insereEnTete(&liste, 'Y');
    insereApres(&liste, 'W');
    printf("taille : %d\n", liste.taille);
    printf("premier : %d\n", liste.taille);
    printf("prLibre : %d\n", liste.prLibre);
    printf("cle : %d\n", liste.cle);
    printf("val : %c\n", liste.tab[liste.premier].val);
    int i = liste.tab[liste.premier].idSuiv;
    printf("val : %c\n", liste.tab[i].val);

    return 0;
}
