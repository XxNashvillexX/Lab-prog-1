#include <stdio.h>
#include <stdlib.h>

//funcion escalar -> solo puede guardar un valor. ej: int x = 1;

//array = vector y matriz. son unitipo, solo pueden guardar un tipo de valor. ej, vector de enteros = matriz de enteros

//existen dos tipos de carga al vector. secuencial o aleatoria.

//secuencial: va alojando los datos desde el inicio del vector hasta el final.

//cargar por extension: int miVector[5]={5,9,3,4,7};


int main()
{
                                                        // subindice: identifica cada elemento del vector. limite inferio
    int miVector[5]={5,9,3,4,7};                         //  ejemplo de llamada de vector de subindice 2. miVector[2]
    int i;

    for(i=0; i < 5; i++)
    {
    printf("%d\t", miVector[i]);  //variable de control [i] , para posicionarse dentro del vector                                  // miVector[2] = 158;
    }                                                                                                                       // printf("%d", &miVector[2]);

                                                                                    //printf("%d", sizeof(miVector));
                                                                                    //"sizeof".muestra el peso de cada variable

    return 0;
}
