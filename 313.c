#include <stdio.h>

double linha(int m[][12], int l, int comando, int c, double soma)
{
    if (c == 12)
    {
        return soma;
    }
    linha(m, l, comando, c+1, soma+m[l][c]);
}


void ler(int m[][12], int l, int c)
{
    if (c == 12)
    {
        c = 0;
        l += 1;
    }
    if (l == 12) return;
    scanf("%d", &m[l][c]);
    ler(m, l, c+1);
}

int main()
{
    int m[12][12], l;
    char comando;
    double resp;
    scanf("%d", &l);
    scanf(" %c", &comando);
    ler(m, 0, 0);

    resp = linha(m, l, comando, 0, 0);
    if (comando == 'S')
    {
        printf("%.1lf\n", resp);
    }
    else
    {
        printf("%.1lf\n", resp/12);
    }

    return 0;
}