#include <stdio.h>
#include <stdlib.h>

void segundaSuma(int n1, int n2);   //Prototipo N°2: No devuelve (0) / Si recibe (1)

int main()
{
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("\nIngrese el segundo numero: ");
    scanf("%d", &numeroDos);

    segundaSuma(numeroUno,numeroDos);
    return 0;
}

void segundaSuma(int n1, int n2)
{
    int suma;
    suma= n1 + n2;
    printf("\nLa suma da %d\n", suma);
}
