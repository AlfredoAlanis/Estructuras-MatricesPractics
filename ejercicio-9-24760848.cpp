#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));
//definir tamano 
int m = 2;
int n = 3;
int p = 2;

printf("====MULTIPLICACION DE MATRICES =====\n");
printf("Dimensiones fijas: \n");
printf("A(%dx%d) × B(%dx%d) = C(%dx%d)\n", m, n, n, p, m, p);

//crear 3 matrices
int A[2][3];
int B[3][2];
int C[2][2];


//llenar matriz con numeros aleatorios
printf("\nLlenando matriz A (%dx%d)...", m, n);
for(int i = 0; i < m; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < n; j++)
    {
        A[i][j] = rand() % 9 + 1; //numeros aleatorios de 0 a 9
    }
} 

//llenar matriz con numeros aleatorios
printf("\nLlenando matriz B (%dx%d)...", n, p);
for(int i = 0; i < n; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < p; j++)
    {
        B[i][j] = rand() % 9 + 1; //numeros aleatorios de 0 a 9
    }
}

// INICIALIZAR matriz C con ceros
    for(int i = 0; i < m; i++){
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
        }
    }

//llenar matriz C con multiplicacion de numeros aleatorios
printf("\nMultiplicando matrices...\n");
for(int i = 0; i < m; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < p; j++)
    {
        for (int k = 0; k < n; k++)
{
    C[i][j] += A[i][k] * B[k][j];
}
    }}


//Imprimir matriz A 
 printf("\n=== MATRIZ A (%dx%d) ===\n", m, n);
for(int i = 0; i < m; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < n; j++)
    {
        printf("%2d ", A[i][j]);
    }
    printf("\n");
}

//Imprimir matriz B 
 printf("\n=== MATRIZ B (%dx%d) ===\n", n, p);
for(int i = 0; i < n; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < p; j++)
    {
        printf("%2d ", B[i][j]);
    }
    printf("\n");
}
//Imprimir matriz C(Multiplicacion de A y B) 
 printf("\n=== MATRIZ C (A x B) (%dx%d) ===\n", m, p);
for(int i = 0; i < m; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < p; j++)
    {
        printf("%3d ", C[i][j]);
    }
    printf("\n");
}
return 0;
}