#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    float resultat;
    printf("Entrée la valeur de a : ");
    scanf("%f", &a);
    printf("Entrée la valeur de b : ");
    scanf("%f", &b);

    if (a == 0 && b != 0) {
        printf("La valeur de a est nulle et la valeur de b est differente de 0 donc Ax+b ne peut pas etre egal a 0\n");
    }
    else if (b == 0 && a!= 0) {
        printf("La valeur de b est nulle et la valeur de a est differente de 0 donc Ax+b ne peut pas etre egal a 0\n");
    }
    else if (a == 0 && b == 0) {
        printf("La valeur de a est nulle et la valeur de b est nulle donc Ax+b est egual a 0\n");
    }
    else if(a != 0 && b != 0) {
        resultat = (0 - b)/a;
        printf("La valeur de x est : %f\n", resultat);
    }
}
