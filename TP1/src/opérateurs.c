#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 16;
    int b = 3;

    /* 1. Addition */
    printf("a + b = %d\n", a + b);

    /* 2. Soustraction */
    printf("a - b = %d\n", a - b);

    /* 3. Multiplication */
    printf("a * b = %d\n", a * b);

    /* 4. Division entière et cast explicite */
    printf("a / b (division entiere) = %d\n", a / b);
    printf("a / b (division flottante) = %.2f\n", (float)a / b);

    /* 5. Modulo */
    printf("a %% b = %d\n", a % b);

    /* 6. Égalité (Opérateur relationnel) */
    bool est_egal = (a == b);
    printf("a == b : %s\n", est_egal ? "true" : "false");

    /* 7. Supériorité stricte */
    bool est_superieur = (a > b);
    printf("a > b  : %s\n", est_superieur ? "true" : "false");

    return 0;
}