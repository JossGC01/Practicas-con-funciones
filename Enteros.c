#include <stdio.h>

void mostrarNumeros() {
    int numero = 0;
    do {
        printf("%d\n", numero++);
    } while (numero <= 9);
}

int main() {
    mostrarNumeros();
    return 0;
}
