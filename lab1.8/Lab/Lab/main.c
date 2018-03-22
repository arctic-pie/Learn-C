#include <stdio.h>

/* подсчет пробелов, табуляций, новых строк */

int main() {
    printf("To terminate a program, press \"Ctrl\" + \"D\"\nInsert text:\n");
    
    int character, spaces, tabs, nl;
    
    spaces = 0;
    tabs = 0;
    nl = 0;
    
    while ((character = getchar()) != EOF) {
        if (character == ' ') {
            ++spaces;
        } else if (character == '\t') {
            ++tabs;
        } else if (character == '\n') {
            ++nl;
        }
    }
    
    printf("\nSpaces: %d\nTabs: %d\nNewlines: %d\n", spaces, tabs, nl);
}

