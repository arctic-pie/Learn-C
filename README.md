# Learn-C

Правила приема лабораторных:

#### 1. Вывод любой информации в консоль должен сопровождаться печатью поясняющей информации

- Wrong

```c
printf("%d", value);
```

- Right
```c
printf("Value is %d", value);
```

#### 2. Не должны создаваться лишние переменные.

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

#### 3. Названия переменных должны быть легкочитаемы и не сокращаться

- Wrong
```c
int nl;
...
printf("Newlines: %d\n", nl);
```

- Right
```c
int newlines;
...
printf("Newlines: %d\n", nl);
```
