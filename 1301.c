#include <stdio.h>

struct aluno{
    char nome[500];
    double nota;
};

void melhor_aluno(struct aluno a[], struct aluno b[], int qtdA, int qtdB)
{
    double maior = 0;
    int indice, turma;

    for (int i = 0; i < qtdA; i++) //olhando A primeiro
    {
        if (a[i].nota > 8)
        {
            if (a[i].nota > maior)
            {
                maior = a[i].nota;
                indice = i;
                turma = 1;
            }
        }        
    }

    for (int j = 0; j < qtdB; j++)
    {
        if (b[j].nota > 8)
        {
            if (b[j].nota > maior)
            {
                maior = b[j].nota;
                indice = j;
                turma = 2;
            }
        }
    }

    if (maior != 0)
    {
        if (turma == 1)
        {
            printf("%s ganhou viagem e ingresso no parque!\n", a[indice].nome);
            printf("Nota: %.2lf\n", a[indice].nota);
        }
        else
        {
            printf("%s ganhou viagem e ingresso no parque!\n", b[indice].nome);
            printf("Nota: %.2lf\n", b[indice].nota);
        }
    }
    else
    {
        printf("Ninguem ganhou viagem e ingresso no parque...\n");
    }
}

double media(struct aluno a[], int qtd)
{
    double res = 0;
    for (int i = 0; i < qtd; i++)
    {
        res += a[i].nota;
    }
    return res/qtd;
}

int check(char nome[], int i)
{
    if (nome[i] == '*') return 1;
    else if (nome[i] == '\0') return 0;
    return check(nome, i+1);
}

int ler(struct aluno a[])
{
    int i = 0;
    while(2)
    {
        scanf("%s", a[i].nome);
        if (check(a[i].nome, 0)) break;
        
        scanf("%lf", &a[i].nota);
        getchar();
        i++;
    }
    return i;
}

int main()
{
    struct aluno turmaA[500];
    struct aluno turmaB[500];

    int qtdA, qtdB;
    double mediaA, mediaB;

    qtdA = ler(turmaA);
    qtdB = ler(turmaB);
    
    mediaA = media(turmaA, qtdA);
    mediaB = media(turmaB, qtdB);
    
    if (mediaA > 8 && mediaB > 8)
    {
        printf("Viagem para todos\n");
    }
    else if (mediaA <= 8 && mediaB <= 8)
    {
        printf("Nenhuma das turmas viaja...\n");
    }
    else if (mediaA > 8 && mediaB < 8)
    {
        printf("Viagem para turma A\n");
    }
    else if (mediaA < 8 && mediaB > 8)
    {
        printf("Viagem para turma B\n");
    }

    melhor_aluno(turmaA, turmaB, qtdA, qtdB);    

    return 0;
}