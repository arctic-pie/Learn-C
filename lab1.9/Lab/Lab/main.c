#include <stdio.h>

/* копирование ввода на вывод с заменой повторяющихся пробелов на один */

// ___Hello,___world! My__name is_____Ksusha______!
//    Hello,   world! My  name is     Ksusha      !

// Алгоритм

// Объявляем переменную хранения с начальным значением 0
// Считываем символ
// Сравниваем сохранённый символ с пробелом
// Если сохранён не пробел, выводим считанный символ и сохраняем
// Если сохранён пробел, но считан не пробел, выводим, и сохраняем
// Если сохранён пробел и считан пробел, не выводим, но сохраняем

int main() {
    printf("To terminate a program, press \"Ctrl\" + \"D\"\nInsert text:\n");
    
    int character, saving;
    
    saving = 0;
    
    while ((character = getchar()) != EOF) {
        if ((saving != ' ') || (saving == ' ' && character != ' ')) {
            putchar(character);
        }
        saving = character;
    }
}
