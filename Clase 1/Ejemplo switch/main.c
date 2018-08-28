#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;

    printf("Ingrese una hora: ");
    scanf("%i",&hora);

        switch(hora)
        {
        case 00:

        case 1:

        case 2:

        case 3:

        case 4:

        case 5:

        case 6:

        case 20:

        case 21:

        case 22:

        case 23:
            printf("Es de noche");
            break;

        case 7:

        case 8:

        case 9:

        case 10:

        case 11:

        case 12:
            printf("Es de mañana");
            break;

        case 13:

        case 14:

        case 15:

        case 16:

        case 17:

        case 18:

        case 19:
            printf("Es de tarde");
            break;

        default:
            printf("No es un dato valido");
            break;
        }
}
