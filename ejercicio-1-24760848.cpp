//aclaro que este codigo lo hice antes en otro repositorio por que no habia echo el fork al respositorio que puso
#include <iostream>
using namespace std;

int main(){
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4] = {0};

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