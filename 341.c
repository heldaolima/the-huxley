#include <stdio.h>

double tres_anos(double preco, double desconto, double ano)
{
    if (ano > 3)
    {
        return preco;
    }
    else
    {
        double menos = preco * desconto;
        printf("menos: %lf\n", menos);
        if (preco <= 100 && preco >= 45)
        {
            if (preco - menos < 45)
            {
                
                return tres_anos(45, desconto, ano+1);
            }
            else
            {
                return tres_anos(preco-(menos/2), desconto, ano+1);
            }
        }
        
        return tres_anos(preco-menos, desconto, ano+1);
    }
}

void jogos(int qtd, int passo)
{
    if (passo == qtd)
    {
        return;
    }
    else
    {
        int dificuldade; 
        double preco, desc, npreco;
        scanf("%d%lf", &dificuldade, &preco);

        if (dificuldade == 0)
        {
            desc = 0.25;
        }
        else if (dificuldade == 1)
        {
            desc = 0.20;
        }
        else if (dificuldade == 2)
        {
            desc = 0.18;
        }
        else if (dificuldade == 3)
        {
            desc = 0.15;
        }
        else if (dificuldade == 4)
        {
            desc = 0.12;
        }
        else if (dificuldade == 5)
        {
            desc = 0.10;
        }
        if (preco >= 45)
        {
            npreco = tres_anos(preco, desc, 1);
        }
        else
        {
            npreco = preco;
        }
        

        printf("Jogo[%d] = R$%.2lf\n", passo, npreco);
        jogos(qtd, passo+1);

    }
}

int main()
{
    int n;
    scanf("%d", &n);
    jogos(n, 0);

    return 0;
}