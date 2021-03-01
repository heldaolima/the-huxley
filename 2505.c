#include <stdio.h>

int check(int j[], int c[], int tam, int p)
{
    int somaJ, somaC;
    for (int i = 0; i < tam; i++)
    {
        somaJ += i;
        somaC += i;
    }
    if (somaJ >= p || somaC >= p) return 1;
    else return 0;
}

int toto(int j[], int c[], int tam, int p)
{
    int pontJ = 0, pontC = 0, qtdJ = 0, qtdC = 0; 
    char marcou;
    while (1)
    {
        scanf(" %c", &marcou);
        if (marcou == 'J')
        {
            qtdJ++;
            int aux = (((qtdJ-1 % tam) + tam) % tam);
            pontJ += j[aux];
        }
        else if (marcou == 'C')
        {
            qtdC++;
            int aux = (((qtdC-1 % tam) + tam) % tam);
            pontC += c[aux];
        }
        if (pontJ >= p || pontC >= p) break;
    }

    if (pontJ > pontC)
    {
        printf("Well, you suck! But at least you suck at a man's game now\n");
        printf("Joey: %d (%d)\nChandler: %d (%d)\n", pontJ, qtdJ, pontC, qtdC);
    }
    else
    {
        printf("Good game, good game, good game\n");
        printf("Chandler: %d (%d)\nJoey: %d (%d)\n", pontC, qtdC, pontJ, qtdJ);
    }
}

void ler(int a[], int i, int tam)
{
    if (i < tam)
    {
        scanf("%d", &a[i]);
        ler(a, i+1, tam);
    }
}

int main()
{
    int p, tam, ind;
    scanf("%d %d", &p, &tam);

    int arrJ[tam], arrC[tam];
    ler(arrJ, 0, tam);
    ler(arrC, 0, tam);

    ind = check(arrJ, arrC, tam, p);
    
    if (ind == 0) toto(arrJ, arrC, tam, p);
    else printf("joey, essas regras estao piores que as do Fireball\n");
    return 0;
}