#include <stdio.h>

int main ()
{
    printf("Insert text:\n");
    
    int x;
    
    while (x = getchar() != EOF) {
        printf("%d", x);
    }
}
