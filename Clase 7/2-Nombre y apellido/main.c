#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//introduciendo los datos almacenados de una variable a otra

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41]; // 38, + coma, 39, + espacio, 40, + barra0 "\0", 41.
    char buffer[1000];
    int i;

    puts("Ingrese su nombre: ");    // se introduce el nombre
    fflush(stdin);
    gets(buffer);                   // se aloja en la variable buffer
    while (strlen(buffer) > 19)
    {
        puts("Reingrese su nombre: ");         //el bucle se iniciara solicitando nuevo dato hasta que lo ingresado no supere mas de 19 caracteres
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre, buffer);     //se copia el dato del buffer a la variable nombre


    puts("Ingrese su apellido: ");              //se ingresa un nuevo dato
    fflush(stdin);
    gets(buffer);                               //se aloja en el buffer(al haber copiado el nombre a otra variable quedo vacio)
    while (strlen(buffer) > 19)
    {
        puts("Reingrese su apellido: ");
        fflush(stdin);                          //el bucle se iniciara solicitando nuevo dato hasta que lo ingresado no supere mas de 19 caracteres
        gets(buffer);
    }

    strcpy(apellido, buffer);                   //se copia el dato del buffer a la variable apellido
    strcpy(nombreCompleto, apellido);           //se copia el dato del apellido a la variable nombreCompleto

    strcat(nombreCompleto, ", ");               //se concatena la variable nombreCompleto con una coma + espacio
    strcat(nombreCompleto, nombre);             //luego la misma variable modificada concatenada con variable nombre

    strlwr(nombreCompleto);

    nombreCompleto[0]= toupper(nombreCompleto[0]);
    for(i=1; i<strlen(nombreCompleto); i++)
    {
        if (isspace(nombreCompleto[i]) != 0)
        {
            nombreCompleto[i+1] = toupper(nombreCompleto[i+1]);
        }

    }// end for

    strcat(nombreCompleto, " es su apellido y nombre");
    puts(nombreCompleto);

    //printf("Hello world!\n");
    return 0;
}//end
