#include <stdio.h>

int elevador(int nleituras, int capacidade, int passo, int agora)
{
    if (passo > nleituras)
    {
        return 0;
    }
    else
    {
        int saiu, entrou, nagora;
        scanf("%d%d", &saiu, &entrou);
        nagora = (agora + entrou) - saiu;
        
        if (agora > capacidade)
        {
            return 1 + elevador(nleituras, capacidade, passo+1, nagora);
        }

        return elevador(nleituras, capacidade, passo+1, nagora);
    }
}
int main()
{
    int nleituras, capacidade, result;
    scanf("%d%d", &nleituras, &capacidade);
    result = elevador(nleituras, capacidade, 1, 0);
    if (result == 0)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    return 0;
}