#include <stdio.h>

int multiplicacao(int n1, int n2, int passo)
{
    if (passo == n2)
    {
        return n1;
    }
    else
    {
        return n1 + multiplicacao(n1, n2, passo+1);
    }

}

void ler()
{
    int n1, n2, parada;
    parada = scanf("%d%d", &n1, &n2);
    if (parada == EOF)
    {
        return;
    }
    else
    {
        printf("%d\n", multiplicacao(n1, n2, 1));
        ler();
    }
}

int main()
{
    ler();
    return 0;
}