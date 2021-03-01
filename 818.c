#include <stdio.h>

int barato(int nl, int nc, int m[][nc], int l, int c, int tot, int menor)
{
    if (l == nl)
    {
        if (c == 0)
        {
            menor = tot;
        }
        else
        {
            if (tot < menor)
            {
                menor = tot;
            }
        }
        tot = 0;
        l = 0;
        c += 1;
    }
    
    if (c == nc) return menor;
    
    return barato(nl, nc, m, l+1, c, tot+m[l][c], menor);
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
    int n, m;
    scanf("%d %d", &n, &m);
    int av[n][m];

    ler(n, m, av, 0, 0);

    printf("%d\n", barato(n, m, av, 0, 0, 0, 0));
    return 0;
}