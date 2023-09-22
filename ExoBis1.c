#include <stdio.h>

int main(){
    int N, i;
    int Tab[4];
    int Bat[4];
    int Result[4];

    printf("Donner 4 valeurs pour le premier tableau :\n");
    scanf("%d %d %d %d", &Tab[0], &Tab[1], &Tab[2], &Tab[3]);
    printf("Donner 4 valeurs pour le second tableau :\n");
    scanf("%d %d %d %d", &Bat[0], &Bat[1], &Bat[2], &Bat[3]);

    Result[0] = Tab[0] * Bat[0] + Tab[1] * Bat[2];
    Result[1] = Tab[0] * Bat[1] + Tab[1] * Bat[3];
    Result[2] = Tab[2] * Bat[0] + Tab[3] * Bat[2];
    Result[3] = Tab[2] * Bat[1] + Tab[3] * Bat[3];

    printf("\n \n");
    printf("Tableau A:\n");
    printf("%d %d \n%d %d\n", Tab[0], Tab[1], Tab[2],Tab[3]);
    printf("\n");
    printf("Tableau B:\n");
    printf("%d %d \n%d %d\n", Bat[0], Bat[1], Bat[2],Bat[3]);
    printf("\n \n");
    printf("Résultat:\n");
    printf("%d %d \n%d %d\n", Result[0], Result[1], Result[2],Result[3]);
}
