#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un número entero positivo n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "El número n debe ser un entero positivo." << std::endl;
        return 1;
    }

    int numeroAnterior = 0;
    int numeroActual = 1;

    std::cout << "Los primeros " << n << " números de la secuencia de Fibonacci hasta n son:" << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cout << numeroActual << " ";

        int siguienteNumero = numeroAnterior + numeroActual;
        numeroAnterior = numeroActual;
        numeroActual = siguienteNumero;

        if (numeroActual > n) {
            break;  // Detenerse si superamos n
        }
    }

    std::cout << std::endl;

    return 0;
}
