#include <stdio.h>
#include <stdlib.h>

        //brief incrementa en 10 el valor recibido

        //param int el valor sobre el que voy a incrementa

        //return int 1 si el valor es mayor que 15 y [0]


int miFuncion(int* valor);

int main()
{
    int miEntero=3;
    int estado;

    estado = miFuncion(&miEntero);

    printf("El nuevo valor es %d\n", miEntero);

    if(estado==1)
    {
        printf("El nuevo valor es %d", miEntero);
    }
    else
    {
        printf("El valor es menor o igual a 15");
    }
    return 0;
}

int miFuncion(int* pValor)
{
    int queDevuelve=0;
    int aux;
    aux = (*pValor);

    aux += 10;

    (*pValor) += 10;

    if(aux > 15)
    {
        queDevuelve=1;
    }

    (*pValor) = aux;

    return queDevuelve;
}
