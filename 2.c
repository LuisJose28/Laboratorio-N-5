#include <stdio.h>

int main(){

    float calificaciones[10];
    float suma, promedio;
    int i;
    
    printf("\n* A continuacion escriba sus calificaciones *\n\n");
    for ( i = 0; i < 10; i++)
    {
        printf("-Calificacion N°%i: ", i+1);
        scanf("%f", &calificaciones[i]);
    }

    //suma de todas las notas
    for ( i = 0; i < 10; i++)
    {
        suma = suma + calificaciones[i];
    }
    
    //promedio de las calificaciones
    printf("\n* Promedio de las calificaciones ingresadas *\n");
    promedio = (suma / 10);
    printf("\n-El promedio de todas sus calificaciones es de: %.2f\n", promedio); 

    return 0;
}
