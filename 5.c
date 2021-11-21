#include <stdio.h>

int main(){

    long int x, y;
    int arbol[11][21];
    long int colUna, colDos, colTres, colCuatro, colCinco, colSeis;
    long int colSiete, colOcho, colNueve, colDies;

    printf("\n* Arbol de Navidad *\n");
    for (x = 0; x < 11; x++)
    {
        for (y = 0; y < 21; y++)
        {
            switch (x)
            {
            case 1:
                colUna = 1111111114111111111;
            case 2:
                colDos = 1111111144411111111;
            case 3:
                colTres = 1111111444441111111;
            case 4:
                colCuatro = 1111114444444111111;
            case 5:
                colCinco = 1111144444444411111;
            case 6:
                colSeis = 1111444444444441111;
            case 7:
                colSiete = 1114444444444444111;
            case 8:
                colOcho = 1144444444444444411;
            case 9:
                colNueve = 1444444444444444441;
            case 10:
                colDies = 4444444444444444444;
            
                
            
            default:
                break;
            }
            
        } 
    }
    
    printf("\n%li\n", colUna);
    printf("%li\n", colDos);
    printf("%li\n", colTres);
    printf("%li\n", colCuatro);
    printf("%li\n", colCinco);
    printf("%li\n", colSeis);
    printf("%li\n", colSiete);
    printf("%li\n", colOcho);
    printf("%li\n", colNueve);
    printf("%li\n", colDies);

}
