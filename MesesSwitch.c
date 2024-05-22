#include <stdio.h>
int month, year;

int main() {
    getMonthAndYear();
    displayResult();
    return 0;
}
void getMonthAndYear() {
    printf("Enter month (##) and year (####): ");
    scanf("%d %d", &month, &year);
}

int isLeapYear() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int calculateDaysInMonth() {
    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8: 
        case 10:
        case 12:
            return 31;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            return 30;
        case 2:  
            return isLeapYear() ? 29 : 28;
        default:
            return -1; 
    }
}

void displayResult() {
    int days = calculateDaysInMonth();
    if (days == -1) {
        printf("\nEl mes no es válido\n");
    } else {
        printf("\nEl mes %d del año %d tiene %d días\n", month, year, days);
        if (month == 1) {
            printf("¡Felicidades, se cumplirán tus deseos del mes %d!\n", month);
        } else if (month >= 2 && month <= 12) {
            printf("¡Qué buena elección de mes! Cumpliste tus objetivos desde enero hasta el mes %d\n", month);
        }
    }
}