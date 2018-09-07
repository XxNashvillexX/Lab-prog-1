#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[20]="anibal";
    char otroNombre[20]="anibal";

    strlwr(nombre);
    strupr(otroNombre);

    printf("%s", nombre);
    printf("\n\n%s", otroNombre);

    return 0;
}
