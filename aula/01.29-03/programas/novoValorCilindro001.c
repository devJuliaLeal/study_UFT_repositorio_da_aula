/* ============================================================================
    Autor: Julia
    Data:  Março de 2023

============================================================================ */

/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Função Principal --- */
main()
{
    float pi = 3.1415,
          raio = 2.0,
          altura = 4.0,
          volume;

    volume = pi * raio * raio * altura;

    printf("O volume = %.2f\n", volume);

    system("PAUSE");
    return 0;

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */