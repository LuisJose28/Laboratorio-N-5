#include <stdio.h>
/* Programa: ArbolDeNavidad.c */
/*
Análisis del problema: 
Entrada: Utilizando (1) y (4) cargar un arreglo [11][21].
Proceso: Con un ciclo repetitivo hacer que los (4) formen un triangulo.
Salida: Imprimir para que quede en forma de arbol navideño.
*/

int main(){

    int x;
    int luis[11][21];

    printf("\n* Arbol de Navidad *\n");
    printf("\n-Programa hecho por: Luis Espinosa / 8-992-2338\n-Salon: ISF-111\n");

    for (x = 0; x < 11; x++)
    {
        if (x == 0)
        {
            printf("\n111111111141111111111\n");
        }
        else if (x == 1)
        {
            printf("111111111444111111111\n");
        }
         else if (x == 2)
        {
            printf("111111114444411111111\n");
        }
        else if (x == 3)
        {
            printf("111111144444441111111\n");
        }
        else if (x == 4)
        {
            printf("111111444444444111111\n");
        }
        else if (x == 5)
        {
            printf("111114444444444411111\n");
        }
        else if (x == 6)
        {
            printf("111144444444444441111\n");
        }
        else if (x == 7)
        {
            printf("111444444444444444111\n");
        }
        else if (x == 8)
        {
            printf("114444444444444444411\n");
        }
        else if (x == 9)
        {
            printf("144444444444444444441\n");
        }
        else if (x == 10)
        {
            printf("444444444444444444444\n\n");
        }   
    }

return 0;
}
