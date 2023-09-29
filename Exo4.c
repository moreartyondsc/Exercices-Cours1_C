#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double D, x1, x2;

    // Demander à l'utilisateur d'entrer les coefficients a, b et c
    printf("Entrez les coefficients a, b et c de l'equation (ax^2 + bx + c = 0) :\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        // Équation du premier degré (bx + c = 0)
        if (b != 0) {
            x1 = -((double)c / b);
            printf("Une seule solution reelle :\n");
            printf("x = %.2lf\n", x1);
        } else if (c == 0) {
            printf("Toute valeur reelle de x est une solution de l'equation.\n");
        } else {
            printf("Pas de solution reelle.\n");
        }
    } else {
        // Équation du second degré
        // Calcul du discriminant
        D = (double)b * b - 4 * a * c;

        if (D > 0) {
            // Deux solutions réelles distinctes
            x1 = (-b + sqrt(D)) / (2.0 * a);
            x2 = (-b - sqrt(D)) / (2.0 * a);
            printf("Deux solutions reelles distinctes :\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        } else if (D == 0) {
            // Une seule solution réelle (double)
            x1 = -b / (2.0 * a);
            printf("Une seule solution reelle (double) :\n");
            printf("x = %.2lf\n", x1);
        } else {
            // Pas de solution réelle
            printf("Pas de solution reelle.\n");
        }
    }

    return 0;
}
