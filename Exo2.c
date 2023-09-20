#include <stdio.h>
#include <math.h>

int main(){
    int XA, YA, XB, YB, DIST;

    printf("Coordonnees du point A: ");
    scanf("%i %i", &XA, &YA);
    printf("Coordonnees du point B: ");
    scanf("%i %i", &XB, &YB);

    DIST = sqrt(pow(XB - XA, 2) + pow(YB - YA, 2));
    printf("Distance entre A et B: %lf\n", DIST);

    return 0;
}
