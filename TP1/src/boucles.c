#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int compteur = 5;

    /* Validation du contrat de pré-condition */
    if (compteur <= 0 || compteur >= 10) {
        fprintf(stderr, "Erreur : compteur (%d) doit etre strictement inférieur a 10 et positif.\n", compteur);
        return EXIT_FAILURE;
    }

    printf("=== VERSION 1 : Boucles 'for' ===\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            /* Première ligne, dernière ligne ou bords verticaux/diagonaux */
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    printf("\n=== VERSION 2 : Boucle 'while' avec contrôle de flux ===\n");
    int i = 1;
    while (1) {
        if (i > compteur) {
            break; /* Branchement inconditionnel de sortie */
        }

        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return EXIT_SUCCESS;
}