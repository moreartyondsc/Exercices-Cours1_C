# include <stdio.h>
# include <stdlib.h> // Pour la fonction atoi

int main ( int argc , char * argv [])
{
int a, b;
    if ( argc != 3) {
        printf("\nErreur : nombre invalide d 'arguments ");
        printf("\nUsage : %s int int \n",argv [0]) ;
        return( EXIT_FAILURE );
    }
    a = atoi ( argv [1]) ; // prend en argument une cha îne de caract ères et retourne l'entier dont elle est l'é criture dé cimale
    b = atoi ( argv [2]) ;
    printf ("\nLa somme de %d et %d vaut : %d\n", a, b, a + b);
    return ( EXIT_SUCCESS );
}