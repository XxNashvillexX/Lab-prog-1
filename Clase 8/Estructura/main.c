#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int legajo;
char nombre[50];    // Guarda una cadena. Por eso es un vector.
char direccion[50];
float promedio;
}eAlumno;       //ESTRUCTURA ALUMNO. ENTRE LLAVES, LAS VARIABLES QUE CONFORMAN LA ESTRUCTURA


void mostrarAlumno (eAlumno alumnoParametro);   //en esta funcion se indica el uso de la estructura y una variable propia de la funcion

int main()
{
    eAlumno miAlumno; // LE ASIGNO UN NOMBRE. EL PRIMERO ES LA ESTRUCTURA. EL SEGUNDO ES EL NOMBRE.

    printf("INGRESE LOS SIGUIENTES DATOS\n");

    printf("Ingrese el legajo: ");
    scanf("%d", &miAlumno.legajo);  // SE GUARDA EL DATO INGRESADO EN:
                                    // estructura eAlumno, se hace llamado a ella con miAlumno, y por medio del operador punto se aloja el dato en una variable conveniente que pertenece a la estructura
    printf("\nIngrese su nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("\nIngrese su direccion: ");
    fflush(stdin);
    gets(miAlumno.direccion);

    printf("\nIngrese el promedio: ");
    scanf("%f", &miAlumno.promedio);

    system("pause");
    system("cls");

    printf("MUESTRA DE LOS DATOS INGRESADOS\n");

    mostrarAlumno(miAlumno);

    return 0;
}

void mostrarAlumno (eAlumno alumnoParametro)    //una funcion hecha para imprimir los datos ingresados
{
    printf("\nNúmero de legajo: %d\n\nNombre del usuario: %s\n\nDireccion del usuario: %s\n\nPromedio logrado: %.2f", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.direccion, alumnoParametro.promedio);
}                                  //se usa el operador punto para designar que tipo de dato,correspondiete a X variable se mostrara. Dentro de la estructura
