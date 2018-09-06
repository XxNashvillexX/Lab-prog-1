#include <stdio.h>
#include <stdlib.h>

void primerSuma(void); //prototipo N°1: No devuelve (0) / No recibe (0)


int main()
{                       //
    primerSuma();       //  <---- Declaracion de la funcion
    return 0;           //
}

void primerSuma()
{
    int numeroUno;                                                          //
    int numeroDos;                                                          //
    int suma;                                                               //
                                                                            //
    printf("Ingrese el primer numero: \n");                                 //
    scanf("%d", &numeroUno);                                                //  /_______ Desarrollo
    printf("Ingrese el segundo numero: \n");                                //  \        de la funcion
    scanf("%d", &numeroDos);                                                //
                                                                            //
    suma=numeroUno + numeroDos;                                             //
                                                                            //
    printf("El resultado de %d + %d es %d", numeroUno, numeroDos, suma);    //
}
