#ifndef OPERAC_H_INCLUDED
#define OPERAC_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

double pedirSum(double N1, double N2);
double pedirRes(double N1, double N2);
double pedirMul(double N1, double N2);
double pedirDiv(double N1, double N2);

double pedirSum(double N1, double N2)
{
    return (N1 + N2);
}

double pedirRes(double N1, double N2)
{
    return (N1 - N2);
}

double pedirMul(double N1, double N2)
{
    return (N1 * N2);
}

double pedirDiv(double N1, double N2)
{
    if(N2 == 0)
    {

    printf("No es posible dividir por 0");

    }

    return (N1 / N2);
}

#endif // OPERAC_H_INCLUDED
