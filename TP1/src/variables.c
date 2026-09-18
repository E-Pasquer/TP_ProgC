#include <stdio.h>

int main(void) {
    /* 1. Char */
    char c = 'A';
    signed char sc = -120;
    unsigned char uc = 250U;

    /* 2. Short */
    short s = -32000;
    signed short ss = -15000;
    unsigned short us = 65000U;

    /* 3. Int */
    int i = -2147483647;
    signed int si = -42;
    unsigned int ui = 4294967295U;

    /* 4. Long Int */
    long int li = -2147483648L;
    signed long int sli = -100000L;
    unsigned long int uli = 4000000000UL;

    /* 5. Long Long Int */
    long long int lli = -9223372036854775807LL;
    signed long long int slli = -1234567890123LL;
    unsigned long long int ulli = 18446744073709551615ULL;

    /* 6. Float */
    float f = 3.141592f;

    /* 7. Double */
    double d = 2.718281828459045;

    /* 8. Long Double */
    long double ld = 1.6180339887498948482L;

    /* Affichage avec spécificateurs de format stricts */
    printf("=== CHAR ===\n");
    printf("char               : %c (code ASCII: %d)\n", c, c);
    printf("signed char        : %hhd\n", sc);
    printf("unsigned char      : %hhu\n\n", uc);

    printf("=== SHORT ===\n");
    printf("short              : %hd\n", s);
    printf("signed short       : %hd\n", ss);
    printf("unsigned short     : %hu\n\n", us);

    printf("=== INT ===\n");
    printf("int                : %d\n", i);
    printf("signed int         : %d\n", si);
    printf("unsigned int       : %u\n\n", ui);

    printf("=== LONG INT ===\n");
    printf("long int           : %ld\n", li);
    printf("signed long int    : %ld\n", sli);
    printf("unsigned long int  : %lu\n\n", uli);

    printf("=== LONG LONG INT ===\n");
    printf("long long int      : %lld\n", lli);
    printf("signed long long   : %lld\n", slli);
    printf("unsigned long long : %llu\n\n", ulli);

    printf("=== FLOTTANTS ===\n");
    printf("float              : %.6f\n", f);
    printf("double             : %.15f\n", d);
    printf("long double        : %.19Lf\n", ld);

    return 0;
}