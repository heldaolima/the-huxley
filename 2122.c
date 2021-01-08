#include <stdio.h>

int funcao(int num)
{
    if (num == 0)
    {
        return 10;
    }
    else if (num == 1)
    {
        return 11;
    }
    else if (num == 2)
    {
        return 27;
    }
    else
    {
        return funcao(num-2) - funcao(num-3);
    }
    
}

void ler()
{
    int num, parada, result;
    parada = scanf("%d", &num);
    if (parada == EOF)
    {
        return;
    }
    result = funcao(num);
    printf("%d\n", result);
    ler();
}

int main()
{
    ler();
    return 0;
}