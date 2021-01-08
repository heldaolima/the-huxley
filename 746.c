#include <stdio.h>

void mostrar(int nl, int nc, int m[][nc], int l, int c)
{
    if (c == nc)
    {
        printf("\n");
        c = 0;
        l += 1;
    }
    if (l == nl) return;
    
    if (c != nc-1){
        printf("%d ", m[l][c]);
    } else {
        printf("%d", m[l][c]);
    }

    mostrar(nl, nc, m, l, c+1);
}

void multiplicar(int n, int m, int o, int a[][m], int b[][o], int d[][o], int l, int c, int lb, int cb, int termo)
{
    if (c == m)
    {
        d[l][cb] = termo;

        cb += 1;
        c = 0;
        lb = 0;     
        termo = 0;
        if (cb == o)
        {
            l += 1;
            cb = 0;
        }
    }

    if (l == n) return;

    termo += a[l][c] * b[lb][cb];
    multiplicar(n, m, o, a, b, d, l, c+1, lb+1, cb, termo);
}

void ler(int nl, int nc, int m[][nc], int l, int c)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }
    if (l == nl) return;
    
    scanf("%d", &m[l][c]);
    ler(nl, nc, m, l, c+1);
}

int main()
{
    int n, m, o; //n = linhas A; m = colunas A linhas B; o = colunas B
    scanf("%d %d %d", &n, &m, &o);
    
    int a[n][m], b[m][o], c[n][o];
    
    ler(n, m, a, 0, 0);
    ler(n, m, b, 0, 0);

    multiplicar(n, m, o, a, b, c, 0, 0, 0, 0, 0);

    mostrar(n, o, c, 0, 0);

    return 0;
}