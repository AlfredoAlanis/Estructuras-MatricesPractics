#include<iostream>
#include<stdlib>
#include<time>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));
//variable para decidir el numero de datos que tendra la matriz en este caso 4x4, ademas de que sean ceros
int matriz[4][4];

//llenar matriz
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        matriz[i][j] = rand() % 10; //numeros aleatorios de 0 a 9
    }
    
}

}