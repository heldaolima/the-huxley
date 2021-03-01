#include <stdio.h>

void matriz(int n, int l, int c, int num)
{
    if (c == n)
    {
        printf("\n");
        num = 1;
        c = 0;
        l += 1;
    }
    if (l == n) return;

    if (c < l)
    {
        printf(" ");
    }
    else
    {
        printf("%d", num);
    }

    if (c != n-1)
    {
        printf(" ");
    }
    matriz(n, l, c+1, num+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    matriz(n, 0, 0, 1);
    
    return 0;
}