#include <stdio.h>

struct bus {
    int viagem;
    int saida;
};

int viagem(struct bus a[], int n, int i, int acum, int teste[])
{
    printf("i: %d acum: %d\n", i, acum);
    if (i < n)
    {
        for (int j = 0; j < n; j++)
        {
            teste[j] = a[j].saida;
            if (acum > a[j].saida)
            {
                while (teste[j] < acum) teste[j] += a[j].saida;
                
                printf("a[%d].saida = %d\n", j, teste[j]);
            }
        }
        int men = teste[0] - acum;
        printf("men: %d\n", men);
        for (int c = 1; c < n; c++) //diferenca
        {
            if (teste[c] > acum)
            {
                if (teste[c] - acum < men) men = teste[c]-acum;
            }
            
        }  
        printf("men: %d\n", men);
        return viagem(a, n, i+1, acum+men+a[i].viagem, teste);
    }
        
    return acum;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    struct bus amb[n];

    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &amb[i].viagem);
    }

    for (j = 0; j < n; j++)
    {
        scanf("%d", &amb[j].saida);
    }

    int num[n];
    printf("%d\n", viagem(amb, n, 1, amb[0].viagem, num));

    return 0;
}