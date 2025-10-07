#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    // Inicializar semilla para números aleatorios
    srand(time(NULL));
//variables para las matrices
    int A[3][4];
    int AT[4][3];

//ciclo para recorrer las filas de la matriz A
for(int i = 0; i < 3; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        A[i][j] = rand() % 10;  // Número aleatorio entre 1 y 9
       
    }
} 

//calcular la transpuesta
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        AT[j][i] = A[i][j]; // cambiar filas por columnas
    }
    
}


//imprimir la matriz original
printf("Matriz original A (3X4): \n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}

//imprimir la matriz traspuesta
printf("Matriz original A (4x3): \n");
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", AT[i][j]);
    }
    printf("\n");
}

return 0;

}