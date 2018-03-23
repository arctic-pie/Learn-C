#include <stdio.h>

/* копирование ввода на вывод с заменой символа табуляции на \t, символа забоя на \b и каждой обратной наклонной черты на \\ */

// Алгоритм

// Считываем символ
// Если равен символу табуляции, выводим \t
// Если равен символу забоя, выводим \b
// Если это \, выводим \\
// В остальных случаях выводим исходный символ

int main() {
    printf("To terminate a program, press \"Ctrl\" + \"D\".\nTo remove a char, press \"Ctrl\" + \"H\".\nInsert text:\n");
    
    char character;
    
    while ((character = getchar()) != EOF) {
        if (character == '\t') {
            printf("\\t");
        } else if (character == '\b') {
            printf("\\b");
        } else if (character == '\\') {
            printf("\\\\");
        } else {
            putchar(character);
        }
    }
}
