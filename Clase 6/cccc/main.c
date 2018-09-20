#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cccc.h"

#define T 20
/*
EJERCICIO

variables:
nombre , apellido  --> ingreso maximo de 20 caracteres = [20] .se desconoce el limite de caracteres que se ingresa
apellido y nombre --> concatena y el siguiente formato:
                        Gomez,Juan Luis  *cada sustantivo propio se muestra con mayuscula

se desconoce si el usuario ingreso minusculas o mayusculas
solo se puede modificar la variable "apellido y nombre"
*/

int main()
{

    char nombre[T];
    char apellido[T];
    //char apellidoyNombre;

    cargarNombre(nombre, T, "Ingrese su nombre: " );

    cargarNombre(apellido, T, "\n\nIngrese su apellido: ");

    letraMayus(nombre);

    letraMayus(apellido);

    strcat(apellido,", "); //espacio para que no salga el nombre sin espacio
    strcat(apellido, nombre);

    printf("\n\nUsted se llama %s", apellido);

    strcpy(apellido, nombre);

    printf("\n\nUnsted se llama: %s", apellido);

    return 0;
}
