#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
#define T 5

int main()
{
    int miVector[T];
    int suma;
    int opcion;

    do
    {
        printf("1.cargar\n2.mostrar\n3.sumar\n4.salir");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                cargarVector(miVector, T);
                break;

            case 2:
                mostrarVector(miVector, T);
                break;

            case 3:
                suma=sumarValores(miVector, T);
                printf("La suma es: %d", suma);
                break;
        }

    }while(opcion != 4);

    return 0;
}
