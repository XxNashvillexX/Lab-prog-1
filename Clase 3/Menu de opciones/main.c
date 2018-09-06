#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char opcion;

    do
    {
            printf("(N Nuevo usuario\n");
            printf("(B) Baja de usuario\n");
            printf("(M) Modificacion de usuario\n");
            printf("(S) Salida\n");

            printf("Eliga una de las opciones: ");
            fflush(stdin);
            scanf("%c", &opcion);
            opcion = toupper(opcion);

            while (opcion!='N' && opcion!='B' && opcion!='M' && opcion!='S')
            {
                printf("Opcion incorrecta // Intente denuevo\n");
                printf("Eliga una de las opciones: ");
                setbuf(stdin,NULL);

                scanf("%c", &opcion);

                opcion = toupper(opcion);   //funcion toupper(); --> esta funcion es para pasar el contenido de una variable tipo char ( char letra ) o array de cadena ( char cad[20] ), a mayusculas. Debes tener incluida la biblioteca <ctype.h>.
            }

            switch (opcion)
            {
            case 'N':
                printf("-");
                break;
            case 'B':
                printf("-");
                break;
            case 'M':
                printf("-");
                break;
            case 'S':
                break;
            }

            system("pause");    //system("pause") detiene el programa al finalizar para mostrar todo lo que se realizo. No termina a menos que presione una tecla.
            system("cls");      //system("cls") limpia pantalla

    }while (opcion!='S');


    return 0;
}
