#include <stdio.h>

#define N 3


void transposeMatrix(int matrix[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}


void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N];
    int result[N][N];


    printf("Entrez les elements de la matrice %dx%d ligne par ligne :\n", N, N);
    for (int i = 0; i < N; i++) {
        printf("Colone %d : ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, result);

    printf("\n \n");
    printf("Matrice transposee :\n");
    printMatrix(result);

    return 0;
}
