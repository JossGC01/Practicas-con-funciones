#include <stdio.h>

int filaAlfil, columnaAlfil;

int main() {
    solicitarPosicionAlfil(); 
    dibujarTablero();       
    return 0;
}

void solicitarPosicionAlfil() {
    printf("Posición del alfil (fila, columna): ");
    scanf("%d %d", &filaAlfil, &columnaAlfil);
    printf("\n");
}

void dibujarTablero() {
    for (int fila = 1; fila <= 8; fila++) {
        for (int columna = 1; columna <= 8; columna++) {
            if ((fila + columna == filaAlfil + columnaAlfil) || (fila - columna == filaAlfil - columnaAlfil)) {
                printf("* "); 
            } else if ((fila + columna) % 2 == 0) {
                printf("B "); 
            } else {
                printf("N "); 
            }
        }
        printf("\n"); 
    }
}
