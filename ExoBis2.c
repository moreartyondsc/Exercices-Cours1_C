#include <stdio.h>

int main(){
    int N;
    int Tab[4];

    printf("Donner 4 valeurs pour le tableau :\n");
    scanf("%d %d %d %d", &Tab[0], &Tab[1], &Tab[2], &Tab[3]);

    N = Tab[0]*Tab[3]-Tab[2]*Tab[1];

    printf("\n \n");
    printf("Le determinant est:\n");
    printf("%d\n",N);

}
