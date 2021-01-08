#include <stdio.h>

void imprimir(double a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    
    printf("%.2lf\n", a[i]);
    imprimir(a, i+1, tam);
}

void ordenar(double a[], int i, int tam)
{
    //printf("i: %d maior: %.1lf menor: %.1lf\n", i, maior, menor);
    if (i == tam)
    {
        return;
    }
    
    else
    {

        if (a[i] >= a[0] && a[i] >= a[1] && a[i]>= a[2] && a[i]>= a[3])
        {
            double aux = a[2];
            a[2] = a[i];
            a[i] = aux;
            ordenar(a, i, tam-1);
        }
        else if (a[i] <= a[0] && a[i] <= a[1] && a[i]<= a[2] && a[i] <= a[3])
        {
            double aux = a[0];
            a[0] = a[i];
            a[i] = aux;
            ordenar(a, i, tam-1);
        }

        else if (a[i] >= a[0] && a[i] <= a[1] && a[i] <= a[2] && a[i] <= a[3])
        {
            double aux = a[3];
            a[3] = a[i];
            a[i] = aux;
            ordenar(a, i, tam-1);
        }
        else if (a[i] >= a[0] && a[i] >= a[1] && a[i] >= a[3] && a[i] <= a[2])
        {
            double aux = a[1];
            a[1] = a[i];
            a[i] = aux;
            ordenar(a, i, tam-1);
        }
        ordenar(a, i+1, tam);
    }
}

void ler(double a[], int i, int tam, int maior, int menor)
{
    if (i == tam)
    {
        return;
    } 
    scanf("%lf", &a[i]);
    
    ler(a, i+1, tam, maior, menor);
}

int main()
{
    double fotos[4];
    ler(fotos, 0, 4, 0, 0);
    ordenar(fotos, 0, 4);
    imprimir(fotos, 0, 4);
    return 0;
}