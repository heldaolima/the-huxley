#include <stdio.h>
#include <math.h>

double desvio(double a[], int i, double tam, double media, double result)
{

    if (i == tam)
    {
        return result;
    }
    double tot = pow(a[i] - media, 2);
    return desvio(a, i+1, tam, media, result+tot);
}

double media(double a[], int i, double tam, double tot)
{
    if(i == tam)
    {
        return tot/tam;
    }
    return media(a, i+1, tam, tot+a[i]);
}

void ler(double arr[], int i, double tam)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%lf", &arr[i]);
        ler(arr, i+1, tam);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    double a[n], med, result;
    double tam = n;
    ler(a, 0, tam);
    med = media(a, 0, tam, 0);
    printf("med: %.2lf\n", med);
    result = desvio(a, 0, tam, med, 0);
    result = 1/tam-1 + result;
    result = sqrt(result);
    printf("result: %.2lf\n", result);

    return 0;
}