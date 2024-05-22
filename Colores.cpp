#include <stdio.h>

enum Colores {
    Azul, Amarillo, Rojo, Verde, Blanco, Negro
};

enum Colores colorElegido;

void obtenerColor() {
    printf("Color (0: Azul, 1: Amarillo, 2: Rojo, 3: Verde, 4: Blanco, 5: Negro): ");
    scanf("%d", &colorElegido);
}

void mostrarColor() {
    printf("Color seleccionado: %d\n", colorElegido);
    if (colorElegido == Verde) {
        printf("Esperanza\n");
    }
}

int main() {
    obtenerColor();
    mostrarColor();
    return 0;
}
