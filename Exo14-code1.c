#include <stdio.h>
int x, a;

int main()
{
    x=1;
    while (x<=10) {
        if (x == 7) {
            printf(" Division par zero !");
            continue ;
        }

        a = 1/( x-7);
        printf("%f", a );
        x++;
        sleep(1);
    }
    return 0;
}

/* Dans ce code, tant que x est inferieur ou egual 10 alors on divise 1 par x-7 et on ajoute 1 a x sauf si x est egual a 7, dans ce cas la, on renvoie une erreur car on
    tenterais de diviser par 0
Les resultat obtenue est: -0.1666 / -0.2 / -0.25 / -0.3333 / -0.5 / -1 puis on tente de diviser par 0
"*/
