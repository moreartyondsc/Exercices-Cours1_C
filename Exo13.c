#include <stdio.h>

int main() {
    int p, r;
    int a, b;

    printf("Entrez un nombre entier: \n");
    scanf("%d", &a);
    printf("Entrez un autre nombre entier: \n");
    scanf("%d", &b);

    printf("Quel opération souhaitez vous faire ? (1 pour + et 0 pour -)\n");
    scanf("%d", &p);

    switch (p)
    {
    case (int)1:
        r = a + b;
        printf("Le résultat de l'addition est: %d\n", r);
        break;

    case (int)0:

        r = a - b;
        printf("Le résultat de la soustraction est: %d\n", r);
        break;

    default:
        printf("Opération inconnue\n");
        printf("Veuillez entrer un nombre entre 0 et 1\n");
        break;
    }
}
