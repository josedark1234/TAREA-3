#include <iostream>

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 1; // Inicializamos con 1 porque todos los números son divisibles por 1.
    
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            sumaDivisores += i;
            if (i != numero / i) {
                sumaDivisores += numero / i;
            }
        }
    }
    
    return sumaDivisores == numero;
}

int main() {
    int n;
    std::cout << "Ingrese un número entero positivo n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "El número n debe ser un entero positivo." << std::endl;
        return 1;
    }

    std::cout << "Los números perfectos en el rango de 1 a " << n << " son:" << std::endl;

    for (int i = 1; i <= n; ++i) {
        if (esNumeroPerfecto(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
