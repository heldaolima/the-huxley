#include <stdio.h>

int fatorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num-1);
    }
}

int somafat(int passo, int soma)
{
    if (passo > 5)
    {
        return soma;
    }
    else
    {
        int n;
        scanf("%d", &n);
        if (n % 3 == 0)
        {
            soma = soma + fatorial(n);
        }
        return somafat(passo+1, soma);
    }
}

int main()
{
    int result = somafat(1, 0);
    printf("%d\n", result);
    return 0;
}