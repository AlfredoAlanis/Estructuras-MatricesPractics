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
