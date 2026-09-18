#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1 = 12;  /* 0000 1100 en binaire */
    int num2 = 5;   /* 0000 0101 en binaire */
    char op = '&';

    printf("Operandes : num1 = %d (0x%X), num2 = %d (0x%X)\n", num1, num1, num2, num2);
    printf("Operateur : '%c'\n\n", op);

    switch (op) {
        case '+':
            printf("Resultat (%d + %d) = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Resultat (%d - %d) = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Resultat (%d * %d) = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Erreur : Division par zero impossible.\n");
                return EXIT_FAILURE;
            }
            printf("Resultat (%d / %d) = %d (division entiere)\n", num1, num2, num1 / num2);
            printf("Resultat (%d / %d) = %.2f (division flottante)\n", num1, num2, (float)num1 / num2);
            break;

        case '%':
            if (num2 == 0) {
                fprintf(stderr, "Erreur : Modulo par zero impossible.\n");
                return EXIT_FAILURE;
            }
            printf("Resultat (%d %% %d) = %d\n", num1, num2, num1 % num2);
            break;

        case '&':
            printf("Resultat (%d & %d) = %d (Hex: 0x%X)\n", num1, num2, num1 & num2, num1 & num2);
            break;

        case '|':
            printf("Resultat (%d | %d) = %d (Hex: 0x%X)\n", num1, num2, num1 | num2, num1 | num2);
            break;

        case '~':
            /* Attention : '~' est un operateur unaire, il s'applique sur num1 seul */
            printf("Resultat (~%d) = %d (Hex: 0x%X)\n", num1, ~num1, ~num1);
            break;

        default:
            fprintf(stderr, "Erreur : Operateur '%c' non reconnu.\n", op);
            return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}