#include <stdio.h>
#include <stdlib.h>
#define T 5  //<---definido en forma global. No ocupa lugar en la memoria

void cargarVector(int[], int);
void ordenarVector(int[], int);
void mayorVector(int[], int);
void menorVector(int[], int);
void acumVector(int[], int);
                                                                    //={}llaves para indicar donde se inicia el v
int main()
{
                                                                    /*int const T=5;      const <---definido en forma local. Ocupa un lugar en la memoria*/
    int miVector[T] = {};
    int i;

    int buscar;
    int flag = 0;


    cargarVector(miVector, T);

    ordenarVector(miVector, T);

    mayorVector(miVector, T);

    menorVector(miVector, T);

    acumVector(miVector, T);

    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &buscar);

    for(i=0; i < T; i++)
    {
        if(buscar == miVector[i])
        {
            flag = 1;
            printf("Posicion: %d\n", i);
            break;
        }
    }

    if(flag==0)
    {
        printf("No se encontro el dato\n");
    }

    for(i = 0 ; i < T ; i++)
    {
        printf("%d\n", miVector[i]);
    }

    for(i=0; i < T; i++) //este for muestra los numeros ingresados
    {
        if(miVector[i]%2 == 0)
        {
            printf("\n%d\n", miVector[i]);
        }
    }

    return 0;
}

void cargarVector(int vector[], int tam)  //se debe pasar el tamaño del vector
{
    int i;                      //permite ingresar numeros
    for(i=0; i < tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
}

void ordenarVector(int vector[], int tam)
{
    int i;
    int j;
    int aux;

    for(i=0 ; i < tam-1 ; i++)
    {
        for(j=i+1 ; j < tam ; j++)
        {
            if(vector[i] > vector[j])
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }
}

void mayorVector(int vector[], int tam)
{
    int maxValor = 0;
    int i;

    for(i=0; i < tam ; i++)
    {
        if(maxValor < vector[i])
        {
            maxValor=vector[i];
        }
    }

    printf("\nEl mayor valor es: %d\n",maxValor);

}

void menorVector(int vector[], int tam)
{
    int minValor = 100000;
    int i;

    for(i=0; i < tam ; i++)
    {
        if(minValor > vector[i])
        {
            minValor=vector[i];
        }
    }

    printf("\nEl menor valor es: %d\n",minValor);
}

void acumVector(int vector[], int tam)
{
    int suma = 0;
    int i;

    for(i=0; i < tam ; i++)
    {
        suma+=vector[i];
    }

    printf("\nLa suma de todos los valores del vector es: %d\n", suma);
}
