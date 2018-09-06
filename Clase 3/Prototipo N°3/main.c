#include <stdio.h>
#include <stdlib.h>

int tercerSuma(void);  // Prototipo N°3: Devuelve (1) / No recibe (0)

int main()
{
    int suma;
    suma=tercerSuma();
    printf("\nLa suma es %d\n",suma);

    return 0;
}

int tercerSuma(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("\nIngrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma=numeroUno + numeroDos;

    return suma;
}
