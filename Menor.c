#include <stdio.h>

float a, b, c;
void getNumbers() {
    printf("Ingrese los números a, b y c: ");
    scanf("%g %g %g", &a, &b, &c);
}

float findSmallest() {
    float smallest = a;

    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    return smallest;
}

void displayResult() {
    float smallest = findSmallest();
    printf("Menor = %g\n", smallest);
}

int main() {
    getNumbers();  
    displayResult();
    return 0;
}
