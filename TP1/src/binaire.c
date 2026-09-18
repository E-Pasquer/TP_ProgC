#include <stdio.h>
#include <stdlib.h>

void afficher_binaire(int val) {
    /* Détermination du nombre de bits d'un type int (généralement 32 bits) */
    int nb_bits = sizeof(int) * 8;

    printf("Decimal : %-7d | Hex : 0x%-8X | Binaire : ", val, val);

    /* On parcourt les bits du MSB (31) jusqu'au LSB (0) */
    for (int i = nb_bits - 1; i >= 0; i--) {
        /*
         * (val >> i) décale le i-ème bit en position 0.
         * & 1 masque le reste pour ne conserver que ce bit (0 ou 1).
         */
        int bit = (val >> i) & 1;
        printf("%d", bit);

        /* Ajout d'un espace tous les 4 bits pour la lisibilité */
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void) {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("=== CONVERSION EN BINAIRE (MASQUAGE BIT A BIT) ===\n\n");

    for (int i = 0; i < taille; i++) {
        afficher_binaire(nombres[i]);
    }

    return EXIT_SUCCESS;
}