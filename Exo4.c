#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, discriminant, x1, x2;

    printf("Entrez le coefficient a : ");
    scanf("%d", &a);
    printf("Entrez le coefficient b : ");
    scanf("%d", &b);
    printf("Entrez le coefficient c : ");
    scanf("%d", &c);

    discriminant = b*b-4*a*c;

    if (a==0) {
        printf("La variable n'est pas du second degres, (a=0)");
    }
    else if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2.0 * a);
        x2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Deux solutions distinctes: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
    else if (discriminant == 0) {
        x1 = -b / (2.0 * a);
        printf("Une solution reelle: x = %.2lf\n", x1);
    }
    else {
        double realPart = -b / (2.0 * a);
        double imaginaryPart = sqrt(-discriminant) / (2.0 * a);
        printf("Deux solutions complexes conjuguees : x1 = %.2lf + %.2lfi, x2 = %.2lf - %.2lfi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
