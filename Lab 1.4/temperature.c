#include <stdio.h>
/* печать таблицы температур по Цельсию и Фаренгейту для celsius = 0, 20 ... 300; вариант с плавающей точкой */
main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    celsius = lower;
    printf ("Таблица соответситвия температур:\n");
    printf ("%3s %3s\n", "C", "F");
    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf ("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
} }