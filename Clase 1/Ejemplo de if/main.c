#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("Ingrese una edad: ");
    scanf("%i",&edad);

    if(edad >= 18)
    {
        printf("eres mayor de edad");
    }
    else
    {
        if(edad >= 13 && edad <= 17)
        {
            printf("eres un adolecente");
        }
        else
        {
            printf("eres menor de edad");
        }
    }

}

