#include <stdio.h>
#include <string.h>

#define NO 0
#define SI 1

int indicador_k = NO;
int indicador_l = NO;
int indicador_n = NO;

int main(int cantidad, char *argumentos[]) {
    mostrarArgumentos(cantidad, argumentos); 
    analizarArgumentos(cantidad, argumentos);
    ejecutarOpcionK();            
    ejecutarOpcionL();            
    ejecutarOpcionN();         
    return 0;
}


void mostrarArgumentos(int cantidad, char *argumentos[]) {
    printf("Argumentos:\n");
    if (cantidad == 1) {
        printf("ninguno\n");
    } else {
        for (int indice = 1; indice < cantidad; indice++) {
            printf("%s\n", argumentos[indice]);
        }
    }
}

void analizarArgumentos(int cantidad, char *argumentos[]) {
    for (int indice = 1; indice < cantidad; indice++) {
        if (strcmp(argumentos[indice], "-k") == 0) indicador_k = SI;
        if (strcmp(argumentos[indice], "-l") == 0) indicador_l = SI;
        if (strcmp(argumentos[indice], "-n") == 0) indicador_n = SI;
    }
}

void ejecutarOpcionK() {
    if (indicador_k) {
        printf("-k\n");
    }
}

void ejecutarOpcionL() {
    if (indicador_l) {
        printf("-l\n");
    }
}

void ejecutarOpcionN() {
    if (indicador_n) {
        printf("-n\n");
    }
}