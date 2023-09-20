#include <stdio.h>

#define N 3


void multiplyMatrixByScalar(int matrix[N][N], float scalar, int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = (int)(matrix[i][j] * scalar);
        }
    }
}


void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]); // Utilisation de \t pour la tabulation
        }
        printf("\n");
    }
}


int main() {
    int matrix[N][N];
    float scalar;
    int result[N][N];


    printf("Entrez les elements de la matrice %dx%d :\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entrez le reel X : ");
    scanf("%f", &scalar);


    multiplyMatrixByScalar(matrix, scalar, result);


    printf("\n \n");
    printf("Matrice resultante :\n");
    printMatrix(result);

    return 0;
}
