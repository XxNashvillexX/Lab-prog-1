#include <stdio.h>
#include <stdlib.h>

/*funcion: modulo (pequeña porcion de memoria) en el que se desarolla una tarea específica. Reciben datos y devuelven informacion.
sus ventajas son: poder dividir el codigo en pequeñas partes, poder reutilizarlo. Optima lectura del codigo. Independencia del codigo:
no importa el origen de la misma, siempre lograra cometer su tarea.
mejor depuracion: mayor arreglo de errores.
mantenimiento de la funcion.

estructura en C:
1-prototipo: declaracion de la funcion.debe pensarse para que se utilizara la funcion. tambien que tipo de dato se usara en esa funcion y que va a devolver.

devuelven - reciben
        0       0       = "void" = puede guardarse cualquier dato. se usara para no devolver dato

                            ej: void sumar(void); <--- obligatorio. esta funcion debe declararse arriba de "main"



2-definicion de la funcion: desarrollar el algoritmo que ejecutara la funcion.

ej: "funcion tipo nula" / no debe programarse, pero se debe saber
*/


/*
void sumar(void);  //<---1encabezado

int main()
{
    sumar();        //3<----llamada por medio de funcion "int main"             implicitamente devuelve un entero la funcion sumar
    return 0;
}

void sumar(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");           //2- desarrollo
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("el resultado de la suma es: %d",suma);
}
*/
//funcion de control: indica que debe hacerse sin realizarlo ellas.

/*segundo prototipo: devuelve = 0 / recibe = 1
*/
/*
void sumar(int n1, int n2);  //no es necesario nombrar a las variables

int main()
{
    int numeroUno;
    int numeroDos;  //<----- parametro actual: varian dependiendo el valor que ingrese el usuario.

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);
                                        //<-funcion local: se encuentran dentro de las llaves
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    sumar(numeroUno,numeroDos);

    return 0;
}

void sumar(int n1, int n2) //parametros formales de la funcion: no cambian.
{

    int suma;
                                        //no es necesario pedir datos porque la funcion ya incorpora dos
    suma = n1 + n2;

    printf("el resultado de la suma es: %d",suma);
}
*/
/*
//3º prototipo: devuelve = 1 / recibe = 0

int sumar(void);

int main()
{
    int suma;

    suma = sumar();

    printf("El resultado de la suma es: %d", suma);

    return 0;
}

int sumar(void)
{

    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    return suma;    // esto devolvera el resultado en la funcioin main. ocupara el valor de la funcion suma en "main".

}
*/

//4º prototipo = recibe = 1 / devuelve = 1

int sumar(int, int);

int main()
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumar(numeroUno, numeroDos);

    printf("El resultado de la suma es: %d", suma);

    return 0;
}

int sumar(int numeroUno, int numeroDos) //entran y salen datos. en este caso suma los datos. sin la importancia de donde provienen los datos (independencia).
{                                       //puede darse uso desde distintas funciones.

    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}
