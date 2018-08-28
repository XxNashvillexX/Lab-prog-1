#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroA;
    float numeroB;
    float suma;

    printf("ingrese el primer numero: ");
    setbuf(stdin,NULL);
    scanf("%d", &numeroA);

    printf("ingrese el segundo numero: ");
    scanf("%f", &numeroB);

    suma= (float)numeroA + numeroB;

    printf("numero %d y numero %.2f al sumarlos da %.2f",numeroA,numeroB,suma);

    return 0;
}
