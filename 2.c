#include <stdio.h>

/* Programa: Calificaciones.c */
/*
Análisis del problema: 
Entrada: Se almacenan 10(diez) calificaciones.
Proceso: Se obtiene la suma de las 10(diez) calificaciones.
Salida: Se imprime el promedio de las calificaciones.
*/

int main(){
    
    printf("\n-Programa hecho por: Luis Espinosa / 8-992-2338\n-Salon: ISF-111\n");

    float calificaciones[10];
    float suma;//Esta varibale acumulara la suma de todas las calificaciones ingresas
    float luisEspinosa; //variable donde estara el promedio de las calificaciones
    int i;//contador
    
    printf("\n* A continuacion escriba sus calificaciones *\n\n");
    for ( i = 0; i < 10; i++)
    {
        printf("-Calificacion N°%i: ", i+1);
        scanf("%f", &calificaciones[i]);//en esta parte, el usuario ingresara sus calificaciones
    }

    //suma de todas las notas
    for ( i = 0; i < 10; i++)
    {
        suma = suma + calificaciones[i];//Suma de todas las notas
    }
    
    //promedio de las calificaciones
    printf("\n* Promedio de las calificaciones ingresadas *\n");
    luisEspinosa = (suma / 10);//calculo del promedio final
    printf("\n-El promedio de todas sus calificaciones es de: %.2f\n", luisEspinosa); 

    return 0;
}
