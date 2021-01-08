#include <stdio.h>

void mostra(double m[][2], double r[][2], int l, int c, double custo0, double custo1, double lucro0, double lucro1)
{
    if (l == 12)
    {
        l = 0;
        c += 1;
    }
    if (c == 2)
    {
        printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]\n", custo0, lucro0);
        printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]\n", custo1, lucro1);
        return;
    }

    double custo, lucro;
    custo = m[l][c] * r[c][0];
    lucro = m[l][c] * r[c][1];
    
    if (c == 0){
        custo0 += custo;
        lucro0 += lucro;
    }
    else if (c == 1){
        custo1 += custo;
        lucro1 += lucro;
    }

    printf("Motor[%d], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", c, l+1, custo, lucro);
    mostra(m, r, l+1, c, custo0, custo1, lucro0, lucro1);
}

void ler(double m[][2], int l, int c)
{
    if (c == 2)
    {
        c = 0;
        l += 1; 
    }
    if (l == 12) return;

    scanf("%lf", &m[l][c]);
    ler(m, l, c+1);
}

int main()
{
    double meses[12][2], valores[2][2];
    ler(meses, 0, 0);
    ler(valores, 0, 0);
    
    mostra(meses, valores, 0, 0, 0, 0, 0, 0);

    return 0;
}