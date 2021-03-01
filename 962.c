#include <stdio.h>

void imprimir(int n, int m[][n], int i, int j)
{
    if (j == n)
    {
        j = 0;
        i++;
    }
    if (i < n)
    {
        if (j+1 == n)
        {
            printf("%d\n", m[i][j]);
        }
        else
        {
            printf("%d ", m[i][j]);
        }
        imprimir(n, m, i, j+1);
    }
}

void formar(int n, int m[][n], int i, int j, int num)
{
    if (j == n)
    {
        num = 1;
        j = 0;
        i++;
    }
    if (i < n)
    {
        m[i][j] = num;
        if (i <= j) formar(n, m, i, j+1, num);
        else formar(n, m, i, j+1, num+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int m[n][n];
    formar(n, m, 0, 0, 1);
    imprimir(n, m, 0, 0);

    return 0;
}