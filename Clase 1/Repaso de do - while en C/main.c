#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respuesta;         //variables: a diferencia de JS, donde la sintaxis para cada variable era "var"
    int numero;             //en C, cada tipo de dato posee su propia sintaxis: char=caracteres, int=numero entero float=numero decimal
    int sumPositivos = 0;
    int sumNegativos = 0;
    int contPositivos = 0;
    int contNegativos = 0;
    int contCeros = 0;
    int contPares = 0;
    float promPositivos;
    float promNegativos;

    do
    {
        printf("Ingrese un numero: ");              //printf: La función printf transporta datos desde la memoria a la pantalla
        scanf("%d", &numero);                       //scanf: Envía datos desde el teclado para almacenarlos en la memoria "MASCARA DE ENTRADA"
                                                    //el símbolo “&” debe colocar se antes del nombre de la variable
        printf("¿continuar ingresando numeros? ");
        setbuf(stdin,NULL);                         //Limpiar buffer con setbuf: utilizar setbuf para vaciar el buffer de entrada: setbuf(stdin,NULL). De este modo rellenamos el buffer con nada, es decir lo vaciamos
        scanf("%c", &respuesta);                    //MODIFICADOR DE FORMATO: %i;%d;%f;%c
                                                    //un símbolo que tomara el valor que ingrese desde la funcion printf
        if(numero >= 1)                             //luego sera reemplazado por un valor en el momento en que se imprime el mensaje
        {
            sumPositivos=sumPositivos + numero;
            contPositivos++;                        //contPositivos+=1
        }
        else
        {
            if(numero < 0)
            {
                sumNegativos=sumNegativos + numero;
                contNegativos++;
            }
            else
            {
                contCeros++;
            }
        }

        if(numero % 2 == 0)
        {
            contPares++;
        }

    } while(respuesta == 's');

    promPositivos= (float)sumPositivos / contPositivos;     //CASTING: conversion de dato. ej: entero a decimal
    promNegativos= (float)sumNegativos / contNegativos;                                      //(int)   (float)

    printf("La suma de los positivos es %d\n",sumPositivos);
    printf("La suma de los negativos es %d\n",sumNegativos);
    printf("La cantidad de positivos ingresados es %d\n",contPositivos);
    printf("La cantidad de negativos ingresados es %d\n",contNegativos);
    printf("La de ceros ingresados es %d\n",contCeros);
    printf("La cantidad de numeros pares ingresados es %d\n",contPares);
    printf("El promedio de los positivos es %.2f\n",promPositivos);
    printf("El promedio de los negativos es %.2f\n",promNegativos);

    return 0;
}
