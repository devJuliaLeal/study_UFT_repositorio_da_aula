/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=
    Autor: Julia
    Data:  Março de 2023
/* =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=*/
/* --- Função Principal --- */
main()
{
    float C = 0.0,
          F = 0.0;

    printf("Coloque o valor de C: ");
    scanf("%f", &C);

    F = (1.8 * C) + 32;

    printf("F = %.2f ", F);

} /* end main */

/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=*/
/* --- Final do Programa --- */