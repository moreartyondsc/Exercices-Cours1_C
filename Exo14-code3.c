#include <stdio.h>
float x, a;

int main()
{
    for (x=1; x<=10; x++) {
        a = x-7;
        if (a == 0) {
            printf (" Division par 0 \n");
            break ;
        }
        printf ("%f \n", 1/a );
    }
    return 0;
}

/* Dans ce code, tant que x est inferieur ou egual 10 alors on divise 1 par x-7 définis avant la division et on ajoute 1 a x sauf si x est egual a 7, dans ce cas la, on renvoie une érreur car on
    tenterais de diviser par 0 puis on casse la boucle
Les resultat obtenue est: -0.1666 / -0.2 / -0.25 / -0.3333 / -0.5 / -1 / division par 0
"*/
