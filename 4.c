#include <stdio.h>
/* Programa: MenorAMayor.c */
/*
Análisis del problema: 
Entrada: Leer 10 (diez) valores numericos.
Proceso: Ordenar el arreglo de menor a mayor.
Salida: Imprimir los valores del arreglo de menor a mayor.
*/

int main(){

    int numeros[10];
    int a, b, c;

    printf("\n* Ordenar numeros de Menor a Mayor  *\n");
    printf("\n-Programa hecho por: Luis Espinosa / 8-992-2338\n-Salon: ISF-111\n");
    printf("\n* A continuacion ingrese los numeros que desea ordenar  *\n\n");

    for ( a = 0; a < 10; a++)
    {
        printf("- Ingresa el N°%i: ", a+1);
        scanf("%i", &numeros[a]);
    }

    for (a = 0; a < 10; a++)//En este bucle for se ordena el arreglo
    {
        for (b = 0, c = 1; c < 10; b++, c++)//la variable 'b' hace referencia a un valor dentro del arreglo (Valor de la izquierda).
        {                          //la variable 'c' hace referencia a un valor dentro del arreglo (Valor de la derecha).
            if(numeros[b] > numeros[c])
            {
                int luisEspinosa = numeros[c]; 
                numeros[c] = numeros[b];
                numeros[b] = luisEspinosa;
            }
        }  
    }
    
    printf("\n* Arreglo ordenado: \n");
    

    for (a= 0; a < 10; a++)//En este bucle se imprime el arreglo ordenado de menor a mayor
    {
        printf("Valor menor %i: %i\n", a+1, numeros[a]);
    }

    return 0;
} 
