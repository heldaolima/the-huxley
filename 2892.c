#include <stdio.h>

void criar(int n, int l, int c)
{
    if (c == n)
    {
        printf("\n");
        c = 0;
        l += 1;
    }
    if (l == n) return;

    if (c == l)
    {
        printf("1      ");
    }
    else if (c > l)
    {
        printf("10     ");
    }
    else if (c < l)
    {
        printf("-10    ");
    }
    
    criar(n, l, c+1);
}

int main()
{
    int n;
    printf("Digite a ordem N da matriz:");
    scanf("%d", &n);
    
    criar(n, 0, 0);

    return 0;
}