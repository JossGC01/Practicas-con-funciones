#include <stdio.h>

int main() {
    mostrarDigitos();
    return 0; 
}

void mostrarDigito(int numero) {
    printf("%d\n", numero);
}

void mostrarDigitos() {
    int numero = 0;
    while (numero <= 9) {
        mostrarDigito(numero);
        numero++;
    }
}
