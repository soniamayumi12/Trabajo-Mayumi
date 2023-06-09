#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    const int filas = 4, columnas = 4; // Tamaño de la matriz
    int matriz[filas][columnas] = { {1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12},
                                    {13, 14, 15, 16} };
    
   
    cout << "La suma de las filas es:" << endl;
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j]; 
        }
        cout << "La suma de la fila " << i << " es: " << suma << endl;
    }
    
    
    int sumaMenor = INT_MAX; 
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j]; 
        }
        if(suma < sumaMenor) sumaMenor = suma; // Actualizar la suma menor si la suma actual es menor
    }
    
    cout << "La suma menor de las filas es: " << sumaMenor << endl;
    
    return 0;
}