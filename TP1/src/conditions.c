#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int somme = 0;
    int dernier_nombre = 0;

    for (int i = 1; i <= 1000; i++) {
        /* 1. Règle d'exclusion : arrêt immédiat de l'itération si divisible par 11 */
        if (i % 11 == 0) {
            continue;
        }

        /* 2. Règle d'inclusion : divisible par 5 OU par 7 */
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
            dernier_nombre = i;
        }

        /* 3. Règle d'arrêt global : accumulation supérieure à 5000 */
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale     : %d\n", somme);
    printf("Dernier ajoute   : %d\n", dernier_nombre);

    return EXIT_SUCCESS;
}