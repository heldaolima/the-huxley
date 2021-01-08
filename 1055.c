#include <stdio.h>

void traco(double a[], int i, int tam, double result)
{
    if (i == tam)
    {
        printf("%.2lf\n", result);
        return;
    }
    else if (i != tam-1){
        printf("(%.2lf) + ", a[i]);
    } else{
        printf("(%.2lf) = ", a[i]);
    }
    traco(a, i+1, tam, result+a[i]);
}

void diagonal(int tam, double m[][tam], double a[], int l, int c, int i)
{
    if (l == tam) return;
    a[i] = m[l][c];
    diagonal(tam, m, a, l+1, c+1, i+1);    
}

void ler(int tam, double m[][tam], int l, int c)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    if (l == tam) return;
    scanf("%lf", &m[l][c]);
    ler(tam, m, l, c+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    double m[n][n], d[n];
    ler(n, m, 0, 0);
    diagonal(n, m, d, 0, 0, 0);
    
    printf("tr(A) = ");
    traco(d, 0, n, 0);
    return 0;
}