#include <stdio.h>
#include <stdlib.h>
#define T 5  //<---definido en forma global. No ocupa lugar en la memoria

// miVector{1,4,5,6,1};
//={}llaves para indicar donde se inicia el v
int main()
{
    /*int const T=5;      const <---definido en forma local. Ocupa un lugar en la memoria*/
    int miVector[T];
    int i;
    int aux;
    int flag=0;

    for(i=0; i < T; i++) //este for permite ingresar numeros
    {
        printf("Ingrese un numero: ");
        scanf("%d", &miVector[i]);
    }

    printf("ingrese un numero a buscar: ");
    scanf("%d", &aux);

    for(i=0; i < T; i++)
    {
        if(aux == miVector[i])
        {
            flag=1;
            printf("posicion %d", i);
            break;
        }
    }

    if(flag==0)
    {
        printf("no se encontro el dato");
    }

    for(i=0; i < T; i++) //este for muestra los numeros ingresados
    {
        if(miVector[i]%2 == 0) //A la funcion se le asignara un in
        {
            printf("\n\nNumero par: %d\n\n", miVector[i]);
        }
    }
    return 0;
}
