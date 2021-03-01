#include <stdio.h>

struct dna{
    int cod;
    char cadeia[31];
};

int busca_T(char s[], int i)
{
    if (s[i] == '\0') return 0;

    else if (s[i] == 'T') return 1 + busca_T(s, i+1);
    else return busca_T(s, i+1);

}

int mais_forte(struct dna r[], int qtd, int i, int cod, int maior)
{
    if (i == qtd) return cod;
    
    int qtd_T = busca_T(r[i].cadeia, 0);
    if (qtd_T > maior) return mais_forte(r, qtd, i+1, r[i].cod, qtd_T);
    else return mais_forte(r, qtd, i+1, cod, maior);
}

int ler_dna(struct dna a[])
{
    int qtd = 0;
    while (2)
    {
        int cod;
        scanf("%d", &cod);
        
        if (cod == 9999) break;
        else a[qtd].cod = cod;
        
        scanf(" %s", a[qtd].cadeia);
        
        qtd++;
    }
    return qtd;
}

int main()
{
    struct dna r[1000]; 
    int qtd = ler_dna(r);
    
    printf("%d\n", mais_forte(r, qtd, 0, 0, 0));

    return 0;
}