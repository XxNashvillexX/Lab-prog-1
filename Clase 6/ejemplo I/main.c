#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20]="matias";    //a la variable nombre se le asigno un vector que admite veinte caracteres
    char otroNombre[20]="hugo";
   // int cantidad;
    int compara;

    compara = strcmp(nombre, otroNombre);

    if(compara == 0)
    {
        printf("Son iguales");
    }
    else
    {
        if(compara > 0)
        {
            printf("%s esta antes que %s",otroNombre,nombre);
        }
        else
        {
            printf("%s esta antes que %s",nombre,otroNombre);
        }
    }
    return 0;
}
