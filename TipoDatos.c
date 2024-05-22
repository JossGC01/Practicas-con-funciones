#include <stdio.h>

int main() {
    definirVariables();
    mostrarVariables();
    return 0; 
}

char caracter;
int entero;
float flotante;
double doble;

void definirVariables() {
    caracter = 'a';
    entero = 25;
    flotante = 3.1416F;
    doble = 2.7172;
}

void mostrarVariables() {
    printf("caracter vale %c\n", caracter);
    printf("entero vale %d\n", entero);
    printf("flotante vale %g\n", flotante);
    printf("doble vale %g\n", doble);
}

