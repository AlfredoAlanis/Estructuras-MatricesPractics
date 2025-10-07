#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
// Inicializar semilla para números aleatorios
    srand(time(NULL));
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4
int matriz[4][4];
//variables para suma de filas y columnas
int sumaFila[4] = {0};
int sumaColumna[4] = {0};

//ciclo para recorrer las filas de la matriz
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = rand() % 100;  // Número aleatorio entre 0 y 99
    }
} 

for(int i = 0; i <4; i++){
    for (int j = 0; j < 4; j++)
    {
        //calcular suma de filas
        sumaFila[i] += matriz[i][j];

        //calcular suma columnas
        sumaColumna[j] += matriz[i][j];
        }
    }
//imprimir la matriz
printf("Matriz con numeros aleatorios: \n");
//ciclo para que imprima el resultado
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    
    {
        //aqui se manda a imprimir
        printf( "%d ", matriz[i][j]);
    }
    printf("\n");
}

//aqui manda a imprimir el numero maximo y minimo
printf("\nMaximo: %d en posicion [%d][%d]\n", maximo, fila_Max, columna_Max);
printf("\nMinimo: %d en posicion [%d][%d]\n", minimo, fila_Min, columna_Min);

return 0;

}