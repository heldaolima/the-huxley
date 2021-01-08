#include <stdio.h>

int preco(int querem, int custo, int passo, int total)
{
    if (passo > querem)
    {
        return total;
    }
    else
    {
        return preco(querem, custo, passo+1, total+custo);
    }
}

int corda(int querem, int moeda, int custo)
{
    int total = preco(querem, custo, 1, 0);
    //printf("total: %d\n", total);
    if (total <= moeda)
    {
        printf("Sim\n");
    }
    else
    {
        printf("Nao\n");
    }
}

void ler()
{
    int querem, moedas, custo, parada;
    parada = scanf("%d%d%d", &querem, &moedas, &custo);
    if (parada == EOF)
    {
        return;
    }
    else
    {
        corda(querem, moedas, custo);
        ler();
    }
    
}

int main()
{
    ler();
    return 0;
}