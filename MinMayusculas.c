#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

char letters[80];
int textLength = 0;

void readText() {
    int character;
    do {
        character = getchar();
        letters[textLength] = character;
        textLength++;
    } while (character != EOL && textLength < 79); 
    letters[textLength] = '\0'; 
}

void convertAndDisplayText() {
    for (int i = 0; i < textLength; i++) {
        putchar(toupper(letters[i]));
    }
}

int main() {
    readText();            
    convertAndDisplayText();
    return 0;
}
