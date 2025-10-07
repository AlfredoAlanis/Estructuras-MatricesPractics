#include <iostream>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));
//definir tama

//crear 3 matrices
int A[4][4];
int B[4][4];
int C[4][4];


//llenar matriz con numeros aleatorios
printf("Llenando matriz A...\n");
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        A[i][j] = rand() % 100; //numeros aleatorios de 0 a 99
    }
} 

//llenar matriz con numeros aleatorios
printf("Llenando matriz B...\n");
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        B[i][j] = rand() % 100; //numeros aleatorios de 0 a 99
    }
}

//llenar matriz C con SUMA de numeros aleatorios

for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        C[i][j] = A[i][j] + B[i][j]; //numeros aleatorios de 0 a 99
    }
}

//Imprimir matriz A 
printf("\n=== MATRIZ A ===\n");
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        printf("%2d ", A[i][j]);
    }
    printf("\n");
}

//Imprimir matriz B 
printf("\n=== MATRIZ B ===\n");

for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        printf("%2d ", B[i][j]);
    }
    printf("\n");
}
//Imprimir matriz C(Suma de A y B) 
printf("\n=== MATRIZ C (A + B)===\n");
for(int i = 0; i < 4; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < 4; j++)
    {
        printf("%3d ", C[i][j]);
    }
    printf("\n");
}
return 0;
}