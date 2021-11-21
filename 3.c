#include <stdio.h>

//las funciones la utilice de tipo 'void', ya que debía darle un parametro, pero NO queria retornar nada.
void NotaUno(float parametro) //esta funcion servira para saber la equivalencia de la nota del estudiante 1.
{
    float total = parametro;
    if (total >= 91)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una A. ", total);
    }
    else if(total >=81 && total <= 90)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una B.", total);
    }
    else if(total >= 71 && total <= 80)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una C.", total);
    }
    else if(total >= 61 && total <= 70)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una D.", total);
    }
    else
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una F.", total);
    }
    return;
}

void NotaDos(float parametro) //esta funcion servira para saber la equivalencia de la nota del estudiante 2.
{
    float total = parametro;
    if (total >= 91)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una A. ", total);
    }
    else if(total >=81 && total <= 90)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una B. ", total);
    }
    else if(total >= 71 && total <= 80)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una C. ", total);
    }
    else if(total >= 61 && total <= 70)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una D. ", total);
    }
    else
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una F. ", total);
    }
    return;
}
void NotaTres(float parametro) //esta funcion servira para saber la equivalencia de nota del estudiante 3.
{
    float total = parametro;
    if (total >= 91)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una A. ", total);
    }
    else if(total >=81 && total <= 90)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una B. ", total);
    }
    else if(total >= 71 && total <= 80)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una C", total);
    }
    else if(total >= 61 && total <= 70)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una D. ", total);
    }
    else
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una F. ", total);
    }
    return;
}
void NotaCuatro(float parametro) //esta funcion servira para saber la equivalencia de la nota del estudiante 4.
{
    float total = parametro;
    if (total >= 91)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una A. ", total);
    }
    else if(total >=81 && total <= 90)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una B. ", total);
    }
    else if(total >= 71 && total <= 80)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una C. ", total);
    }
    else if(total >= 61 && total <= 70)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una D. ", total);
    }
    else
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una F. ", total);
    }
    return;
}

int main(){
    int x, y; // la variable 'x' equivale a las filas. La variable 'y' equivale a las columnas.
    float calificaciones[4][3];
    float notaUno, notaDos, notaTres, notaCuatro;//En cada una de estas variables se almacena la sumatoria de las 3 calificaciones de cada estudiante.
    float promedioUno, promedioDos, promedioTres, promedioCuatro;//En cada una de estas variables se almacena el promedio de cada estudiante.

    printf("\n* Calificaciones de los estudiantes *\n");
    printf("\n* A continuacion agregue los datos para completar la matriz \n\n");

    for ( x = 0; x < 4; x++){
        for (y = 0; y < 3; y++)
        {
            printf("-Agregue sus calificaciones [Estudiante: %i][Nota: %i]: ", x+1, y+1);
            scanf("%f" ,&calificaciones[x][y]); //Aqui el usuario agregara sus notas a la matriz [0][0]
        }
    }

    for ( x = 0; x < 4; x++){//Este bucle servira para calcular el promedio de cada estudiante
        for (y = 0; y < 3; y++)
        {
            if (x == 0)
            {
                notaUno = notaUno + calificaciones[x][y];
                promedioUno = notaUno / 3;//promedio del Estudiante 1
                
            }
            else if (x ==1)
            {
                notaDos = notaDos + calificaciones[x][y];
                promedioDos = notaDos / 3;//promedio del Estudiante 2

            }
            else if (x ==2)
            {
                notaTres = notaTres + calificaciones[x][y];
                promedioTres = notaTres / 3;//promedio del Estudiante 3

            }
            else if (x ==3)
            {
                notaCuatro = notaCuatro + calificaciones[x][y];
                promedioCuatro = notaCuatro / 3;//promedio del Estudiante 4

            }
        }
    }
    
    printf("\n* Resumen de notas *\n");

    NotaUno(promedioUno);
    NotaDos(promedioDos);
    NotaTres(promedioTres);
    NotaCuatro(promedioCuatro);

    return 0;
}
