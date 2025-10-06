#include <iostream>
using namespace std;

int main(){
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4];

//ciclo para recorrer las filas de la matriz
//a partir de aqui solicitara tambien los datos a guardar para la matriz
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    
    {
        //aqui mando a solicitar los valores
        printf("Ingrese el valor para [%d][%d]", i, j);
        //aqui lee el valor y lo guarda
        scanf( "%d", &matriz[i][j]);
    }
} 
printf("la matriz resultante es: \n");
//ciclo para que imprima el resultado
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    
    {
        //aqui mando a que imprima los valores
        printf( "%d ", matriz[i][j]);
    }
    printf("\n");
}
return 0;
}