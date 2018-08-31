#include <stdio.h>
#include <stdlib.h>

int pedirNumero(char[]);
float pedirFlotante(char[]);
char pedirChar(char[]);


int main()
{
    int legajo;
    float nota;
    char nombre;


    legajo= pedirNumero("Ingrese un legajo: ");
    nota= pedirFlotante("Ingrese una nota: ");
    nombre= pedirChar("Ingrese el nombre: ");

    printf("\nLegajo N°: %d\n",legajo);
    printf("Nota obtenida: %f\n",nota);
    printf("El nombre del alumno: %c\n",nombre);


    return 0;
}


int pedirNumero(char texto[])
{
    int numero;
    printf("%s", texto);
    scanf("%d", &numero);

    return numero;
}

float pedirFlotante(char texto[])
{
    float numeroF;
    printf("%s", texto);
    scanf("%f", &numeroF);

    return numeroF;
}

char pedirChar(char texto[])
{
    char nombre;
    printf("%s", texto);
    setbuf(stdin,NULL);
    scanf("%c", &nombre);

    return nombre;
}
