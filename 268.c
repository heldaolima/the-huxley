#include <stdio.h>

struct company{
    int num;
    char data[15];
    char from[100];
    char to[100];
    char hora[10];
    int poltrona;
    int idade;
    char nome[100];
};

void analise(struct company a[], int qtd, double media)
{
    int i;
    for (i = 0; i < qtd; i++)
    {
        if (a[i].idade > media && a[i].poltrona % 2 == 0)
        {
            printf("%s", a[i].nome);
        }
    }
}

double media(struct company a[], int qtd)
{
    int i;
    double resp;
    for (i = 0; i < qtd; i++)
    {
        resp += a[i].idade;
    }
    return resp / qtd;
}

int ler(struct company a[])
{
    double media;
    int i;
    for (i = 0; i < 44; i++)
    {
        scanf("%d", &a[i].num);
        getchar();
        
        if (a[i].num == -1) break;
        
        fgets(a[i].data, 15, stdin);

        
        fgets(a[i].from, 100, stdin);
        getchar();
        
        fgets(a[i].to, 100, stdin);
        getchar();

        fgets(a[i].hora, 10, stdin);

        scanf("%d %d", &a[i].poltrona, &a[i].idade);
        media += a[i].idade;
        getchar();

        fgets(a[i].nome, 100, stdin);
    }
    return i;
}

int main()
{
    struct company ambrosio[43];
    int qtd = ler(ambrosio);
    double med = media(ambrosio, qtd);
    analise(ambrosio, qtd, med);

    return 0;
}