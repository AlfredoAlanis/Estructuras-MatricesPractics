#include <iostream>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));

//crear 3 matrices
int A[4][4];
int B[4][4];
int C[4][4];

//ciclo para recorrer las filas de la matriz
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        //aqui mando a que imprima los valores
        printf ( "%d ", matriz[i][j]);
    }
    printf("\n");
} 
return 0;
}