#include <stdio.h>

int main() {
    printf("Introduzca una cadena de texto.\n");
    printf("Para terminar pulse Ctrl+z\n");
    obtenerYMostrarCodigoASCII(); 
    return 0;
}

void obtenerYMostrarCodigoASCII() {
    char caracter;
    while ((caracter = getchar()) != EOF) {  
        if (caracter != '\n') {            
            printf("El código ASCII de %c es %d\n", caracter, caracter);
        }
    }
}