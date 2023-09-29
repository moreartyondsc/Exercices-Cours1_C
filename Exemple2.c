# include <stdio.h>
# include <stdlib.h>
int main ( int argc , char * argv []) {
    int a, b;
    
    if ( argc != 3) {
        printf("\nErreur : nombre invalide d 'arguments ");
        printf("\nUsage : %s int int \n",argv [0]) ;
        return( EXIT_FAILURE );
    }
    a = atoi( argv [1]) ;
    b = atoi( argv [2]) ;
    printf("\nLa somme de %d et %d vaut : %d\n", a, b, a + b);
    int i;
    for (i =0; i < argc ; i ++)
        printf (" Argument %d : %s\n", i+1 , argv [i]) ;
    return( EXIT_SUCCESS );
}