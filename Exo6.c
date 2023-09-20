#include <stdio.h>
#include <math.h>

int main(){
    int entree;

    printf("Nombre entier de 6 chiffre :");
    scanf("%d", &entree);

    int annee = entree % 100;
    entree /= 100;
    int mois = entree % 100;
    int jour = entree / 100;

    printf("Date: %02d/%02d/20%02d\n", jour, mois, annee);
}
