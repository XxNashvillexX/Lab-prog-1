#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*          nombre[strlen(nombre) -1 = \0
strcat
strcat(destino, origen);
tolower: descompone la cadena, compara un caracter con otro y devuelve iguales

int main()
{
    char nombre[20]="matias";           //la cadena puede tratarse caracter por caracter
//    char otroNombre[20]="juan";
    int i;

    while(nombre[i] != '\0')                    //for(i=0; i<strlen(nombre); i++)
    {
        if(tolower(nombre[i])=='a')
        printf("%c", nombre[i]);
        i++;
    }


    char nombre[20]="anibal";
    char otroNombre[20]="juan";

    strcat(otroNombre," "); //espacio para que no salga el nombre sin espacio
    strcat(otroNombre , nombre);

    strupr(otroNombre);

    printf("\n\n%s", otroNombre);


    return 0;
}


EJERCICIO:

variables:
nombre , apellido  --> ingreso maximo de 20 caracteres = [20] .se desconoce el limite de caracteres que se ingresa

apellido y nombre --> concatena y el siguiente formato:

                        Gomez,Juan Luis  *cada sustantivo propio se muestra con mayuscula

 se desconoce si el usuario ingreso minusculas o mayusculas

 solo se puede modificar la variable "apellido y nombre"

*/
int main()
{
    char nombre[20];
    int cantidad;

    printf("ingrese su nombre: ");
    //scanf("%[^\n]", nombre);
    fgets(nombre,20, stdin); //<-- con esta funcion no se va a desbordar la cadena

    nombre[strlen(nombre)-1]= '\0';                            //<-- fgets devuelve tambien un salto de linea
    cantidad = strlen(nombre);

    printf("Cantidad %d", cantidad);

    return 0;
}
