#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla;

    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("333333333333333333333333333333333333333");
    printf("\n\nIngrese tecla v para limpiar pantalla: ");
    scanf("%c", &tecla);

    if(tecla == 'v')
    {
        system("cls");
        printf("Limpieza de pantalla completa");
    }
    else
    {
        printf("No se realizo limpieza de pantalla");
    }
    return 0;
}
