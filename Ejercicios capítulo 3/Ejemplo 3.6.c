#include <stdio.h>

 /*Nómina de profesores
 El programa, al recibir como datos los salarios de los profesores de una universida, obtiene la nómina y el promedio de los salarios.

 I: varaible de tipo entero.
 SAL, NOM Y PRO: variable de tipo real. */

 void main(void)
 {
     int I = 0;
     float SAL, PRO, NOM = 0;
    printf("ngrese el salario del profesor:\t");
    /* Observa que al menos se necesita ingresar el salario de un profesor para que no ocurra un error de ejecución del programa. */
    scanf("%f", &SAL);
    do
{
        NOM = NOM + SAL;
        I = I + 1;
        printf("Ingrese el salario del profesor -0 para terminar- :\t");
        scanf("%f", &SAL);
}
    while (SAL);
    PRO = NOM / I;
    printf("\nNómina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}
/*En este caso el buble "do-while" permite al programa recibir y procesar salarios de profesores en un ciclo hasta que el usuario indique que ha terminado ingresando un salario igual a cero.*/
