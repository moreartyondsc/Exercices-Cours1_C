#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int U0 = 1;


    printf("Entrée le nombre n:");
    scanf("%d", &n);

    for (int i=0;i < n;i++){
        U0 = 5*U0+3;
    }

    printf("n: %d\n", n);
    printf("Un = %d", U0);

}
