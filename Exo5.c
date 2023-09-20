#include <stdio.h>
#include <math.h>

int main(){
    char num1, num2, num3;
    char somme, produit, moyenne;

    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    somme = num1 + num2 + num3;
    printf("Somme des entier: ",num3);

    produit = num1 * num2 * num3;
    printf("Produit des entiers :", &produit);

    moyenne = (num1 + num2 + num3)/3;
    printf("Moyene des entiers: ", moyenne);
}
