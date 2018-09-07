#include <stdio.h>
#include <stdlib.h>
// \0 <-- sirve como limite entre los caracteres ingresado en la cadena, y la basura restante
//"scanf" no es util para trabajar con cadenas.
//por otro lado la funci�n gets() recibe como �nico argumento la variable en la que debe almacenarse una entrada de usuario que va a ser considerada como una cadena de caracteres.

/*
gets se diferencia de scanf en que scanf s�lo captura una cadena de texto hasta que aparece
el primer espacio o fin de l�nea (desechando todo lo que venga a continuaci�n).
De este modo si tratamos de capturar con scanf el texto �Amanece un maravilloso d�a aqu� en Alaska�
lo �nico que capturaremos es �Amanece�, perdi�ndose el resto del texto.
En cambio con gets se captura todo el texto.
Tanto con scanf como con gets se introduce autom�ticamente un fin de cadena (\0)
al final del texto capturado (de ah� que un array de caracteres siempre tenga un car�cter adicional
adem�s del texto visible, el correspondiente al final de cadena.)
*/

int main()
{
    char nombre[20];    //a la variable nombre se le asigno un vector que admite veinte caracteres

    printf("Ingrese su nombre: ");
    setbuf(stdin,NULL);
    gets(nombre);

    printf("%s", nombre);

    return 0;
}
