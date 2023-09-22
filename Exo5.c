#include <stdio.h>

int main() {
    int num1, num2, num3;
    int somme, produit;
    float moyenne;

    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    somme = num1 + num2 + num3;
    printf("Somme des entiers : %d\n", somme);

    produit = num1 * num2 * num3;
    printf("Produit des entiers : %d\n", produit);

    moyenne = (float)(num1 + num2 + num3) / 3;
    printf("Moyenne des entiers : %.2f\n", moyenne);

    return 0;
}
