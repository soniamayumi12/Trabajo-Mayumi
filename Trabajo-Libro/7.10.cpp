#include <iostream>
#include <vector>
#include <limits>

struct ElementoMatriz {
    int valor;
    int columna;
};

void encontrarMayordecadacolumna(const std::vector<std::vector<int>>& matriz) {
    int columnas = matriz[0].size();

    ElementoMatriz mayordecadafila;
    ElementoMatriz menordecadafila;

    mayor.valor = std::numeric_limits<int>::min();
    
    
        for (int j = 0; j < columnas; j++) {
            int elemento = matriz[i][j];

            if (elemento > mayor.valor) {
                mayor.valor = elemento;
                mayor.fila = i;
                mayor.columna = j;
            }

            if (elemento < menor.valor) {
                menor.valor = elemento;
                menor.fila = i;
                menor.columna = j;
            }
        }
    }

    std::cout << "Elemento mayor: " << mayor.valor << std::endl;
    std::cout << "Posición: Fila " << mayor.fila << ", Columna " << mayor.columna << std::endl;

    std::cout << "Elemento menor: " << menor.valor << std::endl;
    std::cout << "Posición: Fila " << menor.fila << ", Columna " << menor.columna << std::endl;
}

int main() {
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    encontrarMayorYMenor(matriz);

    return 0;
}