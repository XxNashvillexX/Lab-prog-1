#include <stdio.h>
#include <stdlib.h>

void productoDosEnteros (int entero1, int entero2)      //�Qu� es un dato sin valor en C?
                                                        //Un dato sin valor (void en lenguaje C) es un dato que no puede tomar por valor nig�n valor, es decir, es un dato vac�o (nulo).
{
    int resultado= 0;
    resultado= entero1 * entero2;
    printf("El producto entre %d y %d es %d", entero1,entero2,resultado);

    return;
}

int main()
{
    productoDosEnteros(5,5);

    return 0;
}

