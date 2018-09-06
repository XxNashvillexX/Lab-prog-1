#include <stdio.h>
#include <stdlib.h>
// miVector{1,4,5,6,1};
//={}llaves para indicar donde se inicia el v
int main()
{
    int miVector[5];
    int i;

    for(i=0; i < 5; i++) //este for permite ingresar numeros
    {
        printf("Ingrese un numero: ");
        scanf("%d", &miVector[i]);
    }



    for(i=0; i < 5; i++) //este for muestra los numeros ingresados
    {
        if(miVector[i]%2 == 0) //A la funcion se le asignara un in
        {
            printf("\n%d\n\n", miVector[i]);
        }
    }
    return 0;
}
