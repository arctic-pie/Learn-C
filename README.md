# Learn-C

Правила приема лабораторных:

#### Вывод любой информации в консоль должен сопровождаться печатью поясняющей информации

- Wrong:  `printf("%d", value);`
- Right:  `printf("Value is %d", value);`

#### Не должны создаваться лишний переменные.

- Wrong
```c
int x;
x = EOF;
printf("%d", x);
```

- Right
```c
printf("EOF is %d", EOF);
```
