#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    // Inicializar semilla para números aleatorios
    srand(time(NULL));
    
    //variables para la matriz y búsqueda
    int matriz[4][4];
    int numeroBuscar;
    int contador = 0;

    //llenar matriz ademas de recorrer filas y columnas
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        matriz[i][j] = rand() % 100; //numeros aleatorios de 0 a 99
    }
}
//imprimir la matriz
printf("Matriz generada (4x4): \n");
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        //imprimir elemento
        printf("%2d ", matriz[i][j]);
        
    }
    printf("\n");
}
//solicitar numero a usuario
printf("\nIngrese el numero a buscar");
scanf("%d", &numeroBuscar);

//ciclo para buscar en la matriz
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if(matriz[i][j] == numeroBuscar){
            contador++; //esto aumenta el contador
            printf(" - Encontrado en posicion [%d][%d]\n", i, j);
        }
    }
    
}
//mostrar resultados de busqueda
if (contador > 0)
{
    printf("\nEl numero %d aparece %d veces en la matriz.\n", numeroBuscar, contador);
}else{
    printf("\nEl numero %d NO se encuentra en la matriz.\n", numeroBuscar);
}
return 0;

}
