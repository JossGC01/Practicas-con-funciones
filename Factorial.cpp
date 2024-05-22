#include <stdio.h>

long int factorial_result;

long int factorial(int n) {
    long int prod = 1;
    if (n > 1) {
        for (int i = 2; i <= n; ++i) {
            prod *= i;
        }
    }
    return prod;
}

void calculateFactorial() {
    int n;
    printf("\nn = ");
    scanf("%d", &n);
    factorial_result = factorial(n); 
}

void displayResult() {
    printf("\nn! = %ld \n", factorial_result); 
}

int main() {
    calculateFactorial();   
    displayResult();   
    return 0;
}
