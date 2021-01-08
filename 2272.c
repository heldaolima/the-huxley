#include <stdio.h>

int cont1(int nl, int nc, int m[][nc], int l, int c)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }

    if (l == nl) return 0;
    
    if (m[l][c] == 1)
    {
        return 1 + cont1(nl, nc, m, l, c+1);
    }

    return cont1(nl, nc, m, l, c+1);
}


int linhaImpar(int nl, int nc, int m[][nc], int l, int c, int qtd)
{
    if (l == nl)
    {
        l = 0;
        c += 1;
    }

    if (c == nc || qtd == 0) return qtd;

    if (m[l][c] == 1)
    {
        m[l][c] = 0;
        return linhaImpar(nl, nc, m, l+1, c, qtd-1);
    }
    return linhaImpar(nl, nc, m, l+1, c, qtd);
}

int linhaPar(int nl, int nc, int m[][nc], int l, int c, int qtd)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }

    if (l == nl || qtd == 0) return qtd;
    
    if (m[l][c] == 1)
    {
        m[l][c] = 0;
        return linhaPar(nl, nc, m, l, c+1, qtd-1);
    }
    return linhaPar(nl, nc, m, l, c+1, qtd);

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
    else
    {
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
    //1 == viva, pode ser destruída
    //0 == morta
    int l, c, qtd, restam;
    scanf("%d %d", &l, &c);

    int cel[l][c];
    ler(l, c, cel, 0, 0);

    scanf("%d", &qtd);

    if (l % 2 == 0) //linha por linha, esquerda -> direita, cima -> baixo
    {
        qtd = linhaPar(l, c, cel, 0, 0, qtd);
    }
    else // coluna por coluna, cima -> baixo, esquerda -> direita
    {
        qtd = linhaImpar(l, c, cel, 0, 0, qtd);
    }
    
    mostrar(l, c, cel, 0, 0);
    
    restam = cont1(l, c, cel, 0, 0);

    printf("%d %d\n", qtd, restam);

    return 0;
}