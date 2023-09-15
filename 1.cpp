#include <iostream>
#include <cmath>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Ingrese un número entero positivo n: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "El número debe ser mayor que 1." << std::endl;
        return 1;
    }

    std::cout << "Los números primos hasta " << n << " son:" << std::endl;

    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

