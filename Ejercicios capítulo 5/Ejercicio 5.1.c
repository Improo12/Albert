#include <stdio.h>

/* Cuenta números
El programa, al recibir datos como un arreglo unidimesional de tipo entero y un números entero, determina cuántas veces se encuentra el número en el arreglo. */

void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[15];                                  /* Declaración del arreglo*/
    for (I=0; I<15; I++)
    {
       printf("Ingrese el elemento %d del arreglo:", I+1);
       scanf("%d", &ARRE[I]);                     /*Lecutra asignación- del arreglo. */
    }
    printf("\n\nIgrese el número que se va a buscar en el arreglo:");
    scanf("%d", &NUM);
     for (I=0; I<15; I++)
        if (ARRE[I] == NUM)                 /*Comparación del número con los elementos del arreglo.*/

              CUE++;
     printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
 }
