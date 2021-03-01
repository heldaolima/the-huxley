#include <stdio.h>

void carros(int nl, int nc, int m[][nc], int ldesce, int c, int lsobe)
{
    if (ldesce == nl)
    {
        c += 1;
        ldesce = 0;
    }
    
    if (lsobe == 0)
    {
        lsobe = nl;
        c += 1;
    }
    
    if (c == nc) return;
    
    if (c % 2 != 0)
    {
        if (m[lsobe-1][c] == 0){
            printf("Queria que todo mundo fosse assim\n");
        }
        else if (m[lsobe-1][c] == 1){
            printf("Desliga o farol cidadao ( ._.)\n");
        }
        carros(nl, nc, m, ldesce, c, lsobe-1);
    }
    else if (c % 2 == 0)
    {
        if (m[ldesce][c] == 0){
            printf("Queria que todo mundo fosse assim\n");
        }
        else if (m[ldesce][c] == 1){
            printf("Desliga o farol cidadao ( ._.)\n");
        }
        carros(nl, nc, m, ldesce+1, c, lsobe);
    }
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
    
    int mat[n][m];
    ler(n, m, mat, 0, 0);
    
    carros(n, m, mat, 0, 0, n);

    return 0;
}