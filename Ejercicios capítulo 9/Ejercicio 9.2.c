#include <stdio.h>

/* Archivos y caracteres.
  El programa lee carateres de una archivo. */

  void main(void)
  {
      char p1;
      FILE *ar;
      if ((ar = fopen("arc.text", "r")) != NULL)     /* Se abre el archivo para lectura. */
        /* Observa que las dos construcciones del programa 9.1 necesarias para abrir un archivo y verificar que éste en realidad se haya abierto, se pueden agrupar en una sola instrucción. */
      {
          while (!feof(ar))
            /* Se leen caracteres del archivo mientras no se detecte el fin del archivo. */
          {
              p1 = fgetc(ar);            /* Lee el caracter del archivo. */
              putchar (p1);              /* Despliega el caracter en la pantalla. */
          }
          fclose(ar);
     }
     else
        printf("No se puede abrir el archivo");
     }
