#include <stdio.h>

void analise(int nl, int nc, int m[][nc], int l, int c, int sec, int lsec, int prin, int secun, int men, int mai)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }
    if (l == nl)
    {
        if (nl == nc)
        {
            printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", prin, secun);
        }
        else
        {
            printf("A diagonal principal e secundaria nao pode ser obtida.\n");
        }
        
        printf("A matriz possui %d numero(s) menor(es) que zero.\n", men);
        printf("A matriz possui %d numero(s) maior(es) que zero.\n", mai);
        return;
    } 
    
    if (nc == nl)
    {
        if (l == c)
        {
            prin += m[l][c];
        }
        
        if (sec >= 0)
        {
            secun += m[lsec][sec];
            sec -= 1;
            lsec += 1;
        }
    }
    
    if (m[l][c] > 0)
    {
        mai += 1;
    }
    else
    {
        men += 1;
    }
    analise(nl, nc, m, l, c+1, sec, lsec, prin, secun, men, mai);    
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
    if (c != nc-1)
    {
        printf("%d ", m[l][c]);
    }
    else{
        printf("%d", m[l][c]);
    }
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
    int m[l][c];
    ler(l, c, m, 0, 0);
    printf("Matriz formada:\n");
    mostrar(l, c, m, 0, 0);
    analise(l, c, m, 0, 0, c-1, 0, 0, 0, 0, 0);

    return 0;
}