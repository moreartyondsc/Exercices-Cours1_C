# include <stdio.h>
# include <stdlib.h>
# define ENTREE " entree . txt "

int main ( void ){
    FILE * f_in ;
    int c;
    if (( f_in = fopen ( ENTREE ,"r")) == NULL ) {
        fprintf (stderr , "\ nErreur : Impossible de lire le fichier %s\n"
        ,ENTREE );
        return ( EXIT_FAILURE );
    }

    while ((c = fgetc ( f_in )) != EOF ) {
        if (c == '0')
            ungetc ('.',f_in ) ;
        putchar (c);
        }
        fclose ( f_in ) ;
    return ( EXIT_SUCCESS );
}