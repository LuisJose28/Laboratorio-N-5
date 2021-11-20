#include <stdio.h>

int main(){

    float producto[10];
    float porcentaje;
    int i; 
    int mayor50 = 0;


    printf("\n* Precio de los Productos *\n");
    printf("\n-A continuacion agregue el precio de los productos: \n");

    for (i = 0; i <= 9; i++)
    {
        printf("Producto N°%i: ", i+1);
        scanf("%f", &producto[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (producto[i] > 50)
        {
            mayor50++;
        }
    }
    porcentaje = ((float)mayor50 / 10) * 100;
    
    printf("\n* Porcentaje de los productos mayores a 50$ *\n");
    printf("\n-El porcentaje fue de: %.2f%%\n", porcentaje);    

    return 0;
}
