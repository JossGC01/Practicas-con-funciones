#include <stdio.h>

int totalValues;
double values[100]; 
double result;
int option;

void add() {
    result = 0;
    for (int i = 0; i < totalValues; i++) {
        result += values[i];
    }
    printf("La suma de los valores es: %.2lf\n", result);
}

void subtract() {
    result = values[0]; 
    for (int i = 1; i < totalValues; i++) {
        result -= values[i];
    }
    printf("La resta de los valores es: %.2lf\n", result);
}

void multiply() {
    result = 1;
    for (int i = 0; i < totalValues; i++) {
        result *= values[i];
    }
    printf("La multiplicación de los valores es: %.2lf\n", result);
}

void divide() {
    if (totalValues < 2) {
        printf("Error: At least two values are needed to divide.\n");
    } else if (values[1] == 0) { 
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = values[0] / values[1];
        printf("La división de los valores es: %.2lf\n", result);
    }
}

void menu() {
    printf("\nMenu de opciones:\n");
    printf("1. Suma de valores\n");
    printf("2. Resta de valores\n");
    printf("3. Multiplicación de valores\n");
    printf("4. División de valores\n");
    printf("5. Salir del programa\n");
    printf("Seleccione una opción: ");
    scanf("%d", &option);
}

void readValues() {
    printf("Numero valores: ");
    scanf("%d", &totalValues);

    printf("Escribe valores:\n");
    for (int i = 0; i < totalValues; i++) {
        printf("Value %d: ", i + 1);
        scanf("%lf", &values[i]);
    }
}

void startCalculator() {
    do {
        menu();

        switch (option) {
            case 1:
                readValues();
                add();
                break;
            case 2:
                readValues();
                subtract();
                break;
            case 3:
                readValues();
                multiply();
                break;
            case 4:
                readValues();
                divide();
                break;
            case 5:
                printf("Saliendo\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (option != 5);
}

int main() {
    startCalculator();  // Start the calculator
    return 0;
}
