#include <stdio.h>

int main() {
    int N; // Taille de la matrice carrée
    printf("Entrez la taille de la matrice carree : ");
    scanf("%d", &N);

    // Déclaration et initialisation de la matrice
    int M[N][N];
    printf("Entrez les elements de la matrice :\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    double X; // Le réel par lequel on multiplie la matrice
    printf("Entrez la valeur reelle X : ");
    scanf("%lf", &X);

    // Multiplication de la matrice par X
    printf("Matrice resultante :\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double result = X * M[i][j];
            printf("%.2lf\t", result);
        }
        printf("\n");
    }

    return 0;
}
