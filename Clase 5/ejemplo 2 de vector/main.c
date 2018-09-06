#include <stdio.h>
#include <stdlib.h>
#define T 10  //<---definido en forma global. No ocupa lugar en la memoria

void cargarVector(int[], int);
// miVector{1,4,5,6,1};
                                                                    //={}llaves para indicar donde se inicia el v
int main()
{
    /*int const T=5;      const <---definido en forma local. Ocupa un lugar en la memoria*/
    int miVector[T];
    int i;
    int j;
    int aux;
    //int flag=0;

    cargarVector(miVector, T);

    for(i=0; i < T; i++) //este for permite ingresar numeros
    {
        printf("Ingrese un numero: ");
        scanf("%d", &miVector[i]);
    }



    for(i=0; i < T; i++) //este for muestra los numeros ingresados
    {
        if(miVector[i]%2 == 0) //A la funcion se le asignara un in
        {
            printf("\n%d\n\n", miVector[i]);
        }
    }

    for(i=0 ; 1<T-1 ; i++)
    {
        for(j=i+1 ; j < T ; j++)//j=i+1 por que i mas el siguiente elemento
        {
            if(miVector[i] > miVector[j])//CRITERIO DE ORDENAMIENTO
            {
                aux=miVector[i];
                miVector[i]=miVector[j];       //algoritmo "burbujeo"
                miVector[j]=aux;
            }
        }
    }
    return 0;

void cargarVector(int vector[], int tam);   //se debe pasar el tamaño del vector
{
    int i;
    int vector;

    for(i=0; i < tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
}


}
