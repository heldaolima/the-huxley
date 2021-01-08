#include <stdio.h>

void transp(int nl, int nc, int m[][nc], int t[][nl], int l, int c, int tl, int tc)
{

    if (c == nc)
    {
        c = 0;
        l += 1;
        tl = 0;
        tc += 1;
    }

    if (l == nl) return;
    
    t[tl][tc] = m[l][c];
    transp(nl, nc, m, t, l, c+1, tl+1, tc);
}

void mostrar(int nl, int nc, int m[][nc], int l, int c)
{
    if (c == nc)
    {
        printf("\n");
        c = 0;
        l += 1;
    }

    if (l == nl) return;
    printf("%d ", m[l][c]);
    
    mostrar(nl, nc, m, l, c+1);
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
    int l, c;
    scanf("%d %d", &l, &c);
    
    int m[l][c], tran[c][l];
    ler(l, c, m, 0, 0);
    transp(l, c, m, tran, 0, 0, 0, 0);
    mostrar(c, l, tran, 0, 0);   

    return 0;
}