#include <stdio.h>

/* Suma positivos.
El programa, al recibir como datos N números enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: variables de tipo entero. */

void main(void)
{
int I, N, NUM, SUM;
SUM = 0;
printf("Ingrese el número de datos:\t");
scanf("%d", &N);
for (I=1; I<=N; I++)
{
     printf("Ingrese el dato número %d:\t", I);
     scanf("%d", &NUM);
     if (NUM > 0)
         SUM = SUM + NUM;
}
printf("\nLa suma de los números positivos es: %d", SUM);
}
/*En este caso "for" permite que se ingresen números y se acumule la suma de los números positivos.
I=1: significa que la variable I comienza en 1
I<=N: significa que mientras que I sea menor o igual que N, "for" seguirá ejecutándose.
I++: significa que con cada interacción I incrementará 1. */
