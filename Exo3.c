#include <stdio.h>
#include <math.h>

int main(){
    int N, X;

    printf("Entrez la valeur de N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
            X += 1.0 / i;
        }

    printf("La somme des %d premiers termes de la serie harmonique est : %li\n", N, X);

    return 0;
}
