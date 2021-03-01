#include <stdio.h>
//nao entendi
void ler(int nl, int nc, char m[][nc], int l, int c)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }
    if (l == nl) return;
    scanf(" %c", &m[l][c]);
    ler(nl, nc, m, l, c+1);
}

void elias(int l, int c, char m[][c], int ntestes)
{
    if (ntestes == 0) return;
    
    int x, y, disp; //pos
    scanf("%d %d", &x, &y);
    
    char mov[10];
    scanf(" %c", &pos);


    
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char mat[n][m];
    
    ler(n, m, mat, 0, 0);
    
    int ntestes;
    scanf("%d", ntestes);
    elias(mat, ntestes);
    // for (int l = 0; l < n; l++){
    //     for (int c = 0; c < m; c++){
    //         printf("%c ", mat[l][c]);
    //     }
    //     printf("\n");
    // }

    return 0;
}