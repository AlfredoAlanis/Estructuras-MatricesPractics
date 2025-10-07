#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));
 // Definir el tamaño de la matriz cuadrada
    int n = 4;
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4];



//llenar matriz
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = rand() % 10; //numeros aleatorios de 0 a 9
    }
}
//mostrar matriz
printf("Matriz %dx%d:\n", n, n);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        //imprimir elemento
        printf("%2d ", matriz[i][j]);
        
    }
    printf("\n");
}

// Variables para almacenar las sumas de las diagonales
    int suma_principal = 0;    // Suma de la diagonal principal
    int suma_secundaria = 0;   // Suma de la diagonal secundaria

//mostrar y calcular diagonal principal i=j
printf("\nDiagonal Principal: ");
for (int i = 0; i < n; i++)
{
    printf("%d ", matriz[i][i]);
    //acumular la suma de elementos
    suma_principal += matriz[i][i];
}

//mostrar y calcular diagonal secundaria i + j = n-1
printf("\nDiagonal Principal: ");
for (int i = 0; i < n; i++)
{
    printf("%d ", matriz[i][n-1-i]);
    //acumular la suma de elementos
    suma_secundaria += matriz[i][n-1-i];
}
// Mostrar los resultados de las sumas
    printf("\n\nSuma diagonal principal: %d", suma_principal);
    printf("\nSuma diagonal secundaria: %d", suma_secundaria);

    return 0;
}