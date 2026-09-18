#include <stdio.h>

int main(void) {
    /* Types entiers avec variantes signed et unsigned */
    printf("sizeof(char)               = %zu octet(s)\n", sizeof(char));
    printf("sizeof(signed char)        = %zu octet(s)\n", sizeof(signed char));
    printf("sizeof(unsigned char)      = %zu octet(s)\n\n", sizeof(unsigned char));

    printf("sizeof(short)              = %zu octet(s)\n", sizeof(short));
    printf("sizeof(signed short)       = %zu octet(s)\n", sizeof(signed short));
    printf("sizeof(unsigned short)     = %zu octet(s)\n\n", sizeof(unsigned short));

    printf("sizeof(int)                = %zu octet(s)\n", sizeof(int));
    printf("sizeof(signed int)         = %zu octet(s)\n", sizeof(signed int));
    printf("sizeof(unsigned int)       = %zu octet(s)\n\n", sizeof(unsigned int));

    printf("sizeof(long int)           = %zu octet(s)\n", sizeof(long int));
    printf("sizeof(signed long int)    = %zu octet(s)\n", sizeof(signed long int));
    printf("sizeof(unsigned long int)  = %zu octet(s)\n\n", sizeof(unsigned long int));

    printf("sizeof(long long int)      = %zu octet(s)\n", sizeof(long long int));
    printf("sizeof(signed long long)   = %zu octet(s)\n", sizeof(signed long long int));
    printf("sizeof(unsigned long long) = %zu octet(s)\n\n", sizeof(unsigned long long int));

    /* Types flottants (non signés uniquement) */
    printf("sizeof(float)              = %zu octet(s)\n", sizeof(float));
    printf("sizeof(double)             = %zu octet(s)\n", sizeof(double));
    printf("sizeof(long double)        = %zu octet(s)\n", sizeof(long double));

    return 0;
}