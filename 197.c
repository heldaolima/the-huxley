#include <stdio.h>

void mostraCerto(int n, int m[][n], int l, int c)
{
    if (c == n)
    {
        c = 0;
        l += 1;
    }
    
    if (l == n) return;
    printf("%d ", m[c][l]);
    
}

void ler(int n, int m[][n], int l, int c)
{
    if (c == n)
    {
        c = 0;
        l += 1;
    }
    
    if (l == n) return;
    
    scanf("%d", &m[l][c]);
    ler(n, m, l, c+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];
    ler(n, m, 0, 0);

    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < n; c++){
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }

    return 0;
}