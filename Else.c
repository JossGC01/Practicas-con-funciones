#include <stdio.h>

char response;

void getResponse() {
    do {
        printf("Continuar y:si n:no ");
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { } 

        scanf("%c", &response);

        if (response != 'y' && response != 'n') {
            printf("Porfavor solo escribe 'y' o 'n'.\n");
        }
    } while (response != 'y' && response != 'n');
}

int main() {
    getResponse(); 
    return 0;
}
