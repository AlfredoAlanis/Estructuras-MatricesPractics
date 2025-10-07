#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    // Inicializar semilla para números aleatorios
    srand(time(NULL));
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4];
//variables para contar pares e impares
int pares = 0;
int impares = 0;

//ciclo para recorrer las filas de la matriz
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = rand() % 10;  // Número aleatorio entre 0 y 9

        //contar pares e impares
        if(matriz[i][j] % 2 ==0){
            pares++;//si es par aumenta el contador
        } else{
            impares++;//si es impar aumenta
        }
    }
} 
//imprimir la matriz
printf("la matriz resultante es: \n");
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

//aqui manda a imprimir el numero de pares e impares
printf("\nCantidad de numeros pares: %d\n", pares);
printf("\nCantidad de numeros impares: %d\n", impares);

return 0;

}