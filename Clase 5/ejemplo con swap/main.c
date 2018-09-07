#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int miVector[T]={2,6,1,3,4};
    int i;
    int j;
    int aux;
//    int flag=0;

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
}
