#include <stdio.h>

void multk(int m[][4], int k, int l, int c)
{
    if (c == 4)
    {
        c = 0;
        l += 1;
    }
    if (l == 4) return;

    if (c == l)
    {
        m[l][c] = m[l][c] * k;
    }

    multk(m, k, l, c+1);
}

void mostrar(int m[][4], int l, int c)
{
    if (c == 4)
    {
        printf("\n");
        c = 0;
        l += 1;
    }
    if (l == 4) return;
    printf("%d ", m[l][c]);
    mostrar(m, l, c+1);
}

void ler(int m[][4], int l, int c)
{
    if (l == 4)
    {
        l = 0;
        c += 1;
    }
    if (c == 4) return;
    scanf("%d", &m[l][c]);
    ler(m, l+1, c);
}

void algoritmo()
{
    int k;
    scanf("%d", &k);

    if (k == 0) return;

    int m[4][4];
    ler(m, 0, 0);

    multk(m, k, 0, 0);

    mostrar(m, 0, 0);
    
    algoritmo();

}

int main()
{
    algoritmo();
    return 0;
}