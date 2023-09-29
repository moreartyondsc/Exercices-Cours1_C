#include <stdio.h>
#include <stdlib.h>
#define ENTREE "entree.txt"
#define SORTIE "sortie.txt"

int main ( void ) {
    FILE *f_in , * f_out ;
    int c;

    if (( f_in = fopen ( ENTREE ,"r")) == NULL ) {
        fprintf(stderr,"\nErreur : Impossible de lire le fichier %s\n",ENTREE );
        return( EXIT_FAILURE ); }
    if (( f_out = fopen ( SORTIE ,"w") ) == NULL ) {
        fprintf(stderr,"\nErreur : Impossible d 'é crire dans le fichier%s\n", SORTIE );
        return( EXIT_FAILURE ); }
    while ((c = fgetc( f_in ))!= EOF )
        fputc(c, f_out );
    fclose(f_in) ;
    fclose(f_out);
    return(EXIT_SUCCESS);
}