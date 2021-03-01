#include <stdio.h>

struct produto {
    int led;
    char nome[200];
    double preco;
};

double pedidos(struct produto a[], double tot, int n)
{
    int cod, qtd;
    scanf("%d", &cod);
    if (cod == 0)
    {
        return tot;
    }
    
    scanf("%d", &qtd);

    if (qtd > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (cod == a[i].led)
            {
                tot += (qtd*a[i].preco);
            }
        }

    }
    
    return pedidos(a, tot, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    struct produto a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].led);
        getchar();
        fgets(a[i].nome, 200, stdin);
        scanf("%lf", &a[i].preco);
    }

    printf("%.2lf\n", pedidos(a, 0, n));

    return 0;
}