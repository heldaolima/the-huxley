#include <stdio.h>

void custos(double m[][4], double a[], int l, int c, int i, double resp)
{
    if (c == 4)
    {
        printf("%.2lf\n", resp);
        resp = 0;
        i = 0;
        c = 0;
        l += 1;
    }
    if (l == 3) return;
    
    custos(m, a, l, c+1, i+1, resp + m[l][c] * a[i]);
}

void lerar(double a[], int i)
{
    if (i == 4) return;
    scanf("%lf", &a[i]);
    lerar(a, i+1);
}

void lerma(double m[][4], int l, int c)
{
    if (c == 4)
    {
        c = 0;
        l += 1;
    }
    if (l == 3) return;
    scanf("%lf", &m[l][c]);
    lerma(m, l, c+1);
}

int main()
{
    double m[3][4], a[4];
    lerma(m, 0, 0);
    lerar(a, 0);

    custos(m, a, 0, 0, 0, 0);

    return 0;
}