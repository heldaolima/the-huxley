#include <stdio.h>

void trocar(int *a, int *b, int x, int y)
{
    *a = y;
    *b = x;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("a: %d b: %d\n", a, b);
    
    trocar(&a, &b, a, b);
    
    printf("a: %d b: %d\n", a, b);

    return 0;
}