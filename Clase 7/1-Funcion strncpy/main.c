#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena1[10];
    char cadena2[50] = "Hola a todos, como estan?";

    strncpy(cadena1,cadena2, 21);   //el numero indica la cantidad de caracteres a mostrar

    puts(cadena1);

    return 0;
}
