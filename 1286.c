#include <stdio.h>

int euclides(int a, int d)
{
    int resto = a % d;
    if (resto == 0)
    {
        return d;
    }
    else
    {
        return euclides(d, resto);
    }

}

void ler()
{
    int num1, num2, parada;
    parada = scanf("%d%d", &num1, &num2);
    if (parada == EOF)
    {
        return;
    }
    printf("%d\n", euclides(num1, num2));
    ler();
}

int main()
{
    ler();
    return 0;
}