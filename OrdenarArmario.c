// Esquema de la entrada: caso de prueba que marca el final
#include <stdio.h>
#include <string.h>
int casoDePrueba()
{

     // LEER CASO DE PRUEBA
     char prendas[2];
     int final = 0;
     scanf("%s ", prendas);
     if (!strcmp(prendas, "."))
          return 0;
     while (1)
     {
          if (!strcmp(prendas, "V ")){
               final++;
               goto next;
          }
          else if (!strcmp(prendas, "I ")){
               final--;
               goto next;
          }
          if (!strcmp(prendas, "."))
          {
               if (final == 0)
               {
                    printf("EMPATE\n");
                    return 1;
               }
               else if (final > 0)
               {
                    printf("VERANO\n");
                    return 1;
               }
               else
               {
                    printf("INVIERNO\n");
                    return 1;
               }
          }
          next: ;
          scanf("%s ", prendas);
     }

} // casoDePrueba

int main()
{

     while (casoDePrueba())
          ;

     return 0;

} // main