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


void formar(int nl, int nc, int m[][nc], int l, int c, int num)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }
    if (l == nl) return;
    
    m[l][c] = num;
    formar(nl, nc, m, l, c+1, num+2);
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    int matriz[m/n][n], transposta[n][m/n];
    
    formar(m/n, n, matriz, 0, 0, 2);
    transp(m/n, n, matriz, transposta, 0, 0, 0, 0);

    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < m/n; c++)
        {
            if (c != (m/n)-1)
            {
                printf("%d ", transposta[l][c]);
            }
            else{
                printf("%d", transposta[l][c]);
            }
            
        }
        printf("\n");
    }

    return 0;
}