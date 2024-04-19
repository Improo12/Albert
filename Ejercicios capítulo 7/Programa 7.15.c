# include <stdio.h>
# include <ctype.h>

/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por números y letras. */

void interpreta(char *); /* Prototipo de función. */

void main(void)  /* Cambiar void a int para que main tenga un valor de retorno */
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
    return 0;  /* Agregar un valor de retorno a main */
}

void interpreta(char *cadena)
/* Esta función se utiliza para decodificar la cadena de caracteres. */
{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i]))
        {
            k = cadena[i - 1] - 48;
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
