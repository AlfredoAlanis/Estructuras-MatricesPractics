#include <iostream>
using namespace std;

int main(){
//inicializar semilla para numeros aleatorios
srand(time(NULL));
//definir tamano 
int n = 2;
int m = 2;
int p = 2;

printf("====MULTIPLICACION DE MATRICES =====\n");
printf("Dimensiones fijas: \n");
printf("A (%d) x B (%d) = C (%d)\n", m, n,n,p,m,p);

//crear 3 matrices
int A[2][3];
int B[3][2];
int C[2][2];


//llenar matriz con numeros aleatorios
printf("Llenando matriz A...\n");
for(int i = 0; i < m; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < n; j++)
    {
        A[i][j] = rand() % 9 + 1; //numeros aleatorios de 0 a 9
    }
} 

//llenar matriz con numeros aleatorios
printf("Llenando matriz B...\n");
for(int i = 0; i < n; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < p; j++)
    {
        B[i][j] = rand() % 9 + 1; //numeros aleatorios de 0 a 9
    }
}

//llenar matriz C con SUMA de numeros aleatorios
printf("\n=== MATRIZ A (%dx%d) ===\n", m, n);
for(int i = 0; i < m; i++){
    //esta otra parte para las columnas
    for (int j = 0; j < p; j++)
    {
        C[i][j] += A[i][j] * B[i][j]; //multiplicacion
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