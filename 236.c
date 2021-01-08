#include <stdio.h>

void digitos(int num, int alg[], int i)
{
    int div = num / i;
    if (div == 0)
    {
        return;
    }
    else
    {
        int digito = div % 10;
        if (digito == 0)
        {
            alg[0] = alg[0] + 1;
        }
        else if (digito == 1)
        {
            alg[1] = alg[1] + 1;
        }
        else if (digito == 2)
        {
            alg[2] = alg[2] + 1;
        }
        else if (digito == 3)
        {
            alg[3] = alg[3] + 1;
        }
        else if (digito == 4)
        {
            alg[4] = alg[4] + 1;
        }
        else if (digito == 5)
        {
            alg[5] = alg[5] + 1;
        }
        else if (digito == 6)
        {
            alg[6] = alg[6] + 1;
        }
        else if (digito == 7)
        {
            alg[7] = alg[7] + 1;
        }
        else if (digito == 8)
        {
            alg[8] = alg[8] + 1;
        }
        else if (digito == 9)
        {
            alg[9] = alg[9] + 1;
        }
        digitos(num, alg, i*10);
    }

    
}

void a_ate_b(int a, int b, int alg[])
{
    if (a > b)
    {
        return;
    }
    digitos(a, alg, 1);
    a_ate_b(a+1, b, alg);
}

void mostra(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    
    if (i != tam-1)
    {
        printf("%d ", a[i]);
    }
    else
    {
        printf("%d", a[i]);
    }
    
    mostra(a, i+1, tam);
}

void ler()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 && b == 0)
    {
        return;
    }
    int alg[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    a_ate_b(a, b, alg);
    mostra(alg, 0, 10);
    printf("\n");
    ler();
}

int main()
{
    ler();
    return 0;
}