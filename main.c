/*#include <stdio.h>
#define PRECIO_GALON 290.10

    int main()
    {
    char p1;
    FILE *ar;
    ar = fopen("Albert Vasquez.txt", "w");


    char nombre[50];
    float kilometros, litros,rendimiento,pago_de_seguro,seguro_por_kilometros,mantenimineto,precio_de_manteniminto_por_kilometros,aceite,consumo_de_aceite,consu_precio,gastos_totales;

    printf("-----BIENVENIDO/A-----\n");
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", nombre);

    if(ar != NULL)
    {

        while ((p1=getchar()) != '\n')


        fclose(ar);



   /* printf("-----BIENVENIDO/A-----\n");
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", nombre);

    printf("Ingrese la cantidad de kilometros recorridos: ");
    scanf("%f", &kilometros);

    printf("Ingrese la cantidad de litros de gasolina consumidos: ");
    scanf("%f", &litros);
    printf("\n");

    printf("-----Gastos anual-----");
    printf("\n");

    printf("Ingrese el pago mensual del seguro: ");
    scanf("%f", &pago_de_seguro);


    printf("Ingrese el precio de mantenimiento del vehiculo: ");
    scanf("%f", &mantenimineto);
    printf("\n");

    }

    consu_precio = PRECIO_GALON / litros;
    precio_de_manteniminto_por_kilometros = mantenimineto / kilometros;
    rendimiento = kilometros / litros;
    seguro_por_kilometros = pago_de_seguro / kilometros;
    gastos_totales = pago_de_seguro + mantenimineto + consu_precio ;

    printf("-----------------------------|Cliente|-----------------------------: \n   \t\t\t%s\n\n", nombre);


    printf("Distancia\tCombustible\tGastos Anuales\t\tTotal\n");
    printf("%.2f\t\t%.2f\t\t%.2f\t%.2f\t%.2f\t%.2f\n", rendimiento, consu_precio, seguro_por_kilometros, precio_de_manteniminto_por_kilometros, gastos_totales);




   /* printf("Rendimiento de combustible: %.2f kilometros por litro\n", rendimiento);
    printf("Rendimiento de combustible en peso por kilometros es: %.2f pesos \n", consu_precio);
    printf("Pago de seguro por kilometros en pesos : %.2f \n", seguro_por_kilometros);
    printf("El precio de mantenimiento por kilometros es : %.2f \n",precio_de_manteniminto_por_kilometros);
    printf("El total de gastos es: %.2f Pesos\n",gastos_totales);

    printf("\n-----VUELVA PRONTO-----\n\n");


 return 0;
}

*/
#include <stdio.h>

int main() {
    float km_recorridos;
    float precio_combustible;
    float seguro;
    float precio_gomas;
    float consumo_max = 16.0;
    float consumo_min = 8.0;
    float precio_gasolina = 193.0;
    float litros_por_galon = 3.78541;

    printf("Ingrese los kilómetros recorridos: ");
    scanf("%f", &km_recorridos);

    printf("Ingrese el precio del combustible: ");
    scanf("%f", &precio_combustible);

    printf("Ingrese el costo del seguro anual: ");
    scanf("%f", &seguro);

    printf("Ingrese el costo de las gomas: ");
    scanf("%f", &precio_gomas);

    // Cálculo de los gastos varios
    float gastos_anual_km = seguro + (precio_gomas * km_recorridos);
    float gastos_totales = gastos_anual_km * km_recorridos;

    // Cálculo del costo total
    float costo_total = 0.0;

    char cliente[100]; // Se declara cliente como una variable local
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", cliente);

    FILE *ar = fopen("Albert Vasquez de Jesus.txt", "w");
    if (ar == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("\n------------------------------------------------------------------------------------|Cliente|------------------------------------------------------------------------------------- \n   \t\t\t\t\t\t\t\t\t\t%s\n\n", cliente);
    printf("\nL/100\nConsumo promedio\tNombre\t\t\tKM/Galon\tCombustible costo x km\t\tGastos anual x km\tPrecio x galon\t\tCosto Total\t\tKM\n");

    fprintf(ar, "\n------------------------------------------------------------------------------------|Cliente|------------------------------------------------------------------------------------- \n   \t\t\t\t\t\t\t\t\t\t%s\n\n", cliente);
    fprintf(ar, "\nL/100\nConsumo promedio\tNombre\t\t\tKM/Galon\tCombustible costo x km\t\tGastos anual x km\tPrecio x galon\t\tCosto Total\t\tKM\n");

    float precision = 0.1; // Variable para incrementar consumo_promedio en el bucle

    for (float consumo_promedio = consumo_min; consumo_promedio <= consumo_max; consumo_promedio += precision) {
        float consumo = 100.0 / (litros_por_galon / consumo_promedio);
        float km_por_galon = litros_por_galon * consumo_promedio;
        costo_total = precio_combustible * km_recorridos / km_por_galon + gastos_totales;

        printf("%.1f\t\t\t%s\t\t%.2f\t\t\t%.2f\t\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t%.2f\t\t\n",
               consumo_promedio, cliente, km_por_galon, precio_combustible * km_recorridos / km_por_galon,
               gastos_anual_km, precio_combustible, costo_total, km_recorridos);

        fprintf(ar, "%.1f\t\t\t%s\t\t%.2f\t\t\t%.2f\t\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t%.2f\t\t\n",
                consumo_promedio, cliente, km_por_galon, precio_combustible * km_recorridos / km_por_galon,
                gastos_anual_km, precio_combustible, costo_total, km_recorridos);

        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n   \t\t\t\t\t\t\t\t\t\n\n");

    }
    fclose(ar);
    printf("\nLos resultados se han guardado correctamente en el archivo Albert Vasquez De Jesus.txt.\n");


    return 0;
}
