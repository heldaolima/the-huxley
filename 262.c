#include <stdio.h>


int abaixo(double a[], int i, int tam, double media, double dez)
{
    if (i == tam)
    {
        return 0;
    }
    double teste = media - dez;
    //printf("Teste: %.2lf\n", teste);
    if (a[i] < teste)
    {   
        return 1 + abaixo(a, i+1, tam, media, dez);
    }
    return abaixo(a, i+1, tam, media, dez);
}


int acima(double a[], int i, int tam, double media, double dez)
{
    if (i == tam)
    {
        return 0;
    }

    if (a[i] >= media)
    {
        if ((a[i] - media) > dez){
            return 1 + acima(a, i+1, tam, media, dez);
        }
    }
    return acima(a, i+1, tam, media, dez);
}

double ler(double a[], int i, int tam, double soma)
{
    if (i == tam)
    {
        double media = soma/tam;
        return media;
    }
    scanf("%lf", &a[i]);
    return ler(a, i+1, tam, soma+a[i]);
}

int main()
{
    int n, mais, menos;
    scanf("%d", &n);

    double arr[n], media, dezp;
    media = ler(arr, 0, n, 0);
    printf("%.2lf\n", media);
    
    dezp = media * 0.1;
    printf("dezp: %.2lf\n", dezp);
    mais = acima(arr, 0, n, media, dezp);
    printf("%d\n", mais);
    menos = abaixo(arr, 0, n, media, dezp);
    printf("%d\n", menos);
    return 0;
}