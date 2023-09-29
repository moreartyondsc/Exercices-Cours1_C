#include <stdio.h>

#define MAX_SIZE 5

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Fonction pour remplir un tableau
void remplirTableau(int tableau[], int taille) {
    printf("Saisissez %d elements pour le tableau :\n", taille);
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }
}

// Fonction pour afficher un tableau
void afficherTableau(const int tableau[], int taille) {
    printf("Tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int a, b;
    int tableau[MAX_SIZE];
    int taille;

    //Entrée de valeurs
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    printf("Entrez la taille du tableau (ne dépassez pas %d) : ", MAX_SIZE);
    scanf("%d", &taille);

    swap(a, b);

    //Permutation résultat
    printf("\n \n");
    printf("Avant la permutation : a = %d, b = %d\n", a, b);

    printf("Après la permutation : a = %d, b = %d\n", b, a);


    // Remplissage du tableau
    if (taille <= 0 || taille > MAX_SIZE) {
        printf("La taille du tableau n'est pas valide.\n");
        return 1;
    }
    remplirTableau(tableau, taille);

    printf("\n");
    // Affichage du tableau
    afficherTableau(tableau, taille);

    return 0;
}
