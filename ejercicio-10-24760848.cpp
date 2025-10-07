#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));

//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4];

// Variables para almacenar las sumas de las diagonales
    int suma_principal = 0;    // Suma de la diagonal principal
    int suma_secundaria = 0;   // Suma de la diagonal secundaria

//llenar matriz
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = rand() % 10; //numeros aleatorios de 0 a 9
    }
}
//mostrar matriz
printf("Matriz 4 x 4:\n");
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        //imprimir elemento
        printf("%2d ", matriz[i][j]);
        printf("\n");
    }
}

//mostrar y calcular diagonal principal i=j

}