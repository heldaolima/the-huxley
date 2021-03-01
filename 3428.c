#include <stdio.h>

_Bool check(int elemento, int x, int n)
{
    if (n * x == elemento) return 1;
    
    else if (n > elemento) return 0;

    return check(elemento, x, n+1);

}

int mult_prin(int n, int m[][n], int a[], int x, int i, int j, int k)
{
    if (i == n) return 0;

    if (check(m[i][j], x, 1))
    {
        a[k] = m[i][j];
        return 1 + mult_prin(n, m, a, x, i+1, j+1, k+1);
    }
    return mult_prin(n, m, a, x, i+1, j+1, k);
}

void ler(int n, int m[][n], int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

}

int main()
{
    int n, x, qtd;
    scanf("%d %d", &n, &x);
    
    int m[n][n], a[n];
    ler(n, m, x);

    qtd = mult_prin(n, m, a, x, 0, 0, 0);
    
    if (qtd == 0)
    {
        printf("NMDX\n");
    }

    else
    {
        for (int j = 0; j < qtd; j++)
        {
            if (j == qtd-1)
            {
                printf("%d\n", a[j]);
            }
            else
            {
                printf("%d ", a[j]);
            }
        }
    }
    
    return 0;
}