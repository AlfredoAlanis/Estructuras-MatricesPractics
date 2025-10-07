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
//imprimir la matriz con suma de filas y columnas
printf("Matriz : \n");

for(int i = 0; i < 4; i++){
    
    for (int j = 0; j < 4; j++)
    
    {
        //imprimir la suma de filas
        printf( "%2d ", matriz[i][j]);
    }
    printf("\n Suma fila %d: %d\n", i, sumaFila[i]);
}
//separacion 
printf("---\n");

//imprimir suma de columnas
printf("Suma columnas: ");
for (int j = 0; j < 4; j++)
{
    printf("%d ", sumaColumna[j]);
}

return 0;

}