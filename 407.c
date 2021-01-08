#include <stdio.h>

//3n+1
// fazer independente da ordem
int sequencia(int num, int ciclos) //façamos primeiro a sequência
{
    //printf("%d ", num);
    if (num == 1)
    {
        return ciclos;
    }
    else if (num % 2 == 0)
    {
        num = num / 2;
    }
    else if (num % 2 != 0)
    {
        num = (num * 3) + 1;
    }

    sequencia(num, ciclos+1);

}

int range(int inicio, int fim, int total)
{
    if (inicio > fim)
    {
        return total;
    }
    else
    {
        int ciclos = sequencia(inicio, 1);
        if (ciclos > total)
        {
            return range(inicio+1, fim, ciclos);
        }
        else
        {
            return range(inicio+1, fim, total);
        }
    }
}

void ler()
{
    int inicio, fim, tot, parada;
    parada = scanf("%d%d", &inicio, &fim);
    if (parada == EOF)
    {
        return;
    }

    if (inicio > fim)
    {
        tot = range(fim, inicio, 0);
    }
    else
    {
        tot = range(inicio, fim, 0);
    }
    printf("%d %d %d\n", inicio, fim, tot);
    ler();
}

int main()
{
    ler();
    return 0;
}
