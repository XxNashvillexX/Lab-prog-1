#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cccc.h"

char letraMayus(char caracter[])
{
    int i;
    int largo;

    caracter[0] = toupper(caracter[0]);
    largo = strlen(caracter);

    for(i=0; i<largo; i++)
    {
        if(caracter[i] == ' ')
        {
            i = i+1;
            caracter[i] = toupper(caracter[i]);
        }
    }

    return caracter;

}

int maxCadena(char cadena[])
{
    int i=0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}


char cargarNombre(char vector[], int tam, char texto[])
{
    int limiteCadena;

    printf("%s", texto);
    fflush(stdin);

    gets(vector);

    while(limiteCadena = maxCadena(vector) > 20)
    {
        printf("\n\nEl dato ingresado supera el limite de almacenamiento. Intente denuevo: ");
        setbuf(stdin,NULL);
        gets(vector);
    }
}

