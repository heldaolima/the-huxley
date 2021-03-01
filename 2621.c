#include <stdio.h>

void mostrar(int n, int a[][n], int l, int c)
{
    if (c == n)
    {
        printf("\n");
        c = 0;
        l += 1;
    }
    if (l == n) return;

    if (c != n-1)
    {
        printf("%d ", a[l][c]);
    }
    else
    {
        printf("%d", a[l][c]);
    }
    
    mostrar(n, a, l, c+1);
}

void ler(int n, int a[][n], int l, int c)
{
    if (l == n)
    {
        l = 0;
        c += 1;
    }
    if (c == n) return;
    
    scanf("%d", &a[l][c]);
    if (a[l][c] < 0)
    {
        a[l][c] *= 2;
    }
    
    ler(n, a, l+1, c);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n][n];
    ler(n, a, 0, 0);

    mostrar(n, a, 0, 0);

    return 0;
}