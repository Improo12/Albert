#include <stdio.h>

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el último mes.

PAG y SPA: variables de tipo real.*/

void main(void)
{
float PAG, SPA = 0;
printf("Ingrese el primer pago:\t");
scanf("%f", &PAG);
/* Observa que al utilizar la estructura do-while al menos se necesita un pago.*/
do
{
     SPA = SPA + PAG;
     printf("Ingrese el siguiente pago -0 para terminar-:\t ");
     scanf("%f", &PAG);
}
while (PAG);
printf("\nEl total de pagos del mes es: %.2f", SPA);
}
/*En este caso el "while" es el que se encarga de determinar si el bucle continua o no, el "while" verifica la condición que es PAG, si PAG es distinto que 0 el bucle continua,
si PAG es igual a 0 el bucle se detiene y se muestra la suma de los datos ingresados. */
