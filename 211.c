#include <stdio.h>

void chuva(int n, int m[][n], int new[][n], int l, int c)
{
    //printf("n: %d l: %d c: %d\n", n, l, c);
    if (c == n)
    {
        printf("\n");
        c = 0;
        l += 1;
    }
    
    if (l == n) return;

    new[l][c] = m[l][c] + m[l+n][c]; 
    printf("%d ", new[l][c]);
    chuva(n, m, new, l, c+1);
}

void ler(int tam, int m[][tam], int l, int c)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    if (l == tam*2) return;

    scanf("%d", &m[l][c]);
    ler(tam, m, l, c+1);
}

int main()
{
    int n, tot;
    scanf("%d", &n);

    int m[n*2][n], new[n][n];
    ler(n, m, 0, 0);

    chuva(n, m, new, 0, 0);

    return 0;
}