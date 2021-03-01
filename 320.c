#include <stdio.h>

int gols(int n, int m[][2], int i, int qtd, int g, int max)
{
    if (qtd == 0) return max;
    
    int resp = 0;
    
    if (m[i][0]+g > m[i][1])
    {
        resp += 3;
    }
    else if (m[i][0] == m[i][1])
    {
        resp += 1;
    }

    for (int l = 0; l < n; l++)
    {
        if (l != i)
        {
            if (m[l][0] > m[l][1])
            {
                resp += 3;
            }
            else if (m[l][0] == m[l][1])
            {
                resp += 1;
            }
        }
    }

    if (resp > max)
    {
        return gols(n, m, i, qtd-1, g+1, resp);
    }
    return gols(n, m, i, qtd-1, g+1, max);
}

int compra(int n, int m[][2], int i, int qtd, int max)
{
    if (i == n) return max;

    int new = gols(n, m, i, qtd, 1, 0);
    // printf("new: %d\n", new);
    if (new > max)
    {
        return compra(n, m, i+1, qtd, new);
    }
    return compra(n, m, i+1, qtd, max);
}

void ler(int n, int m[][2], int i, int j)
{
    if (j == 2)
    {
        j = 0;
        i++;
    }
    if (i < n)
    {
        scanf("%d", &m[i][j]);
        ler(n, m, i, j+1);
    }
}

int main()
{
    int n, g;
    scanf("%d %d", &n, &g);

    int j[n][2];
    ler(n, j, 0, 0);

    printf("%d\n", compra(n, j, 0, g, 0));
    
    return 0;
}