#include <stdio.h>

int main() {
    int A, B, C;

    printf("Entrez trois entiers A, B et C : ");
    scanf("%d %d %d", &A, &B, &C);

    int max, min;
    max = min = A;

    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }
    if (B < min) {
        min = B;
    }
    if (C < min) {
        min = C;
    }

    printf("Le maximum est : %d\n", max);
    printf("Le minimum est : %d\n", min);

    return 0;
}
