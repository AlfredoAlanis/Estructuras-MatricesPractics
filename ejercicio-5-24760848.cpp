#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    // Inicializar semilla para números aleatorios
    srand(time(NULL));
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4];
//variables para maximo y minimo
int maximo, minimo;
int fila_Max, columna_Max, fila_Min, columna_Min;

//ciclo para recorrer las filas de la matriz
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = rand() % 100;  // Número aleatorio entre 0 y 99
    }
} 
//inicializar maximos y minimos
maximo = matriz[0][0];
minimo = matriz[0][0];
fila_Max = 0;
columna_Max = 0;
fila_Min = 0;
columna_Min = 0;

//busca maximo y minimo en la matriz
for(int i = 0; i <4; i++){
    for (int j = 0; j < 4; j++)
    {
        //buscar maximo
        if (matriz[i][j] > maximo){
            maximo = matriz[i][j];
            fila_Max = i;
            columna_Max = j;
        }
        
            //buscar minimo
        if (matriz[i][j] < minimo){
            minimo = matriz[i][j];
            fila_Min = i;
            columna_Min = j;
        }
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