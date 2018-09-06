#include <stdio.h>
#include <stdlib.h>

int cuartaSuma(int, int);       //Prototipo N°4: Si devuelve (1) / Si recibe (1)

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = cuartaSuma(numeroUno,numeroDos);
    printf("\nLa suma es %d\n",suma);

    return 0;
}

int cuartaSuma(int numeroUno, int numeroDos)
{
    int suma;
    suma = numeroUno + numeroDos;

    return suma;
}
