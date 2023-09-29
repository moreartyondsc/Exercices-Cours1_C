#include <stdio.h>

int main() {
    int p;
    float a, b;
    float r;

    printf("Entrez un nombre entier: \n");
    scanf("%f", &a);
    printf("Entrez un autre nombre entier: \n");
    scanf("%f", &b);

    printf("Quelle opération souhaitez-vous faire ? (1 pour + | 0 pour - | 2 pour * | 3 pour /)\n");
    scanf("%d", &p);

    switch (p)
    {
    case 1:
        r = a + b;
        printf("Le résultat de l'addition est: %f\n", r);
        break;

    case 0:
        r = a - b;
        printf("Le résultat de la soustraction est: %f\n", r);
        break;

    case 2:
        r = a * b;
        printf("Le résultat de la multiplication est: %f\n", r);
        break;

    case 3:
        if (b != 0) {
            r = (float)a / b;
            printf("Le resultat de la division est: %f\n", r);
        } else {
            printf("Division par zéro n'est pas autorisée.\n");
        }
        break;

    default:
        printf("Opération inconnue\n");
        printf("Veuillez entrer un nombre entre 0 et 3\n");
        break;
    }

    return 0;
}
