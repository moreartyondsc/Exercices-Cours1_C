#include <stdio.h>

int main() {
    int N, i;
    float Tab[50];
    float X;

    printf("Entrez la taille du tableau >50: ");
    scanf("%d", &N);

    if (N < 1 || N > 50) {
        printf("La taille du tableau doit etre comprise entre 1 et 50.\n");
        return 7;
    }

    printf("Elements du tableau :\n");
    for (i = 0; i < N; i++) {
        printf("Tab[%d] = ", i);
        scanf("%f", &Tab[i]);
    }

    printf("Entrez la valeur de X: ");
    scanf("%f", &X);

    int existe = 0;

    for (i = 0; i < N; i++) {
        if (Tab[i] == X) {
            existe = 1;
            break;
        }
    }

    if (existe) {
        printf("La valeur %.2f existe dans le tableau.\n", X);
    } else {
        printf("La valeur %.2f n'existe pas dans le tableau.\n", X);
    }

    return 0;
}
