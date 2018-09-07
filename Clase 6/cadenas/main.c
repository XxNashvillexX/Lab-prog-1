#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
\0 <-- sirve como limite entre los caracteres ingresado en la cadena, y la basura restante
"scanf" no es util para trabajar con cadenas.
por otro lado la funci�n gets() recibe como �nico argumento la variable en la que debe almacenarse una entrada de usuario que va a ser considerada como una cadena de caracteres.


gets se diferencia de scanf en que scanf s�lo captura una cadena de texto hasta que aparece
el primer espacio o fin de l�nea (desechando todo lo que venga a continuaci�n).
De este modo si tratamos de capturar con scanf el texto �Amanece un maravilloso d�a aqu� en Alaska�
lo �nico que capturaremos es �Amanece�, perdi�ndose el resto del texto.
En cambio con gets se captura todo el texto.
Tanto con scanf como con gets se introduce autom�ticamente un fin de cadena (\0)
al final del texto capturado (de ah� que un array de caracteres siempre tenga un car�cter adicional
adem�s del texto visible, el correspondiente al final de cadena.)

tipos de funciones para manejar cadenas:

1� strlen(); recibe cadena de caracteres. devuelve entero. retorna la cantidad de caracteres ingresados

2� strcpy(destino, origen) origen: donde esta guardado el dato. destino: la variable donde se guardara
asignarle una valor de una variable en otra. tener en cuenta la capacidad de las variables para no desbordar

3� strcmp(); permite comparar dos cadenas. devuelve un entero.
*/

int main()
{
    char nombre[20]="matias";  //a la variable nombre se le asigno un vector que admite veinte caracteres
    char otroNombre[20]="hugo";
   // int cantidad;
    int compara;

    compara = strcmp(otroNombre, nombre);

    if(compara == 0)
    {
        printf("Son iguales");
    }
    else
    {
        if(compara > 0)
        {
            printf("%s esta antes que %s",otroNombre,nombre);
        }
        else
        {
            printf("%s esta antes que %s",nombre,otroNombre);
        }
    }
/*
    strcpy(nombre, otroNombre);


    printf("Ingrese su nombre: ");
    setbuf(stdin,NULL);
    gets(nombre);
    printf("%s", nombre);

    cantidad = strlen(nombre);

    printf("\nLa cantidad de caracteres %d", cantidad);

*/
    return 0;


}
