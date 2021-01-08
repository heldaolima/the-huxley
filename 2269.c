#include <stdio.h>

double solve(int n, double tot)
{
    double custa = 10;
    if (n == 1)
    {
        return custa;
    }
    else
    {
        custa = custa * n;
        if (n > 1 && n <= 10)
        {
            return custa - (custa*0.1);
        }
        else if (n > 10)
        {
            return custa - (custa * 0.2);
        }
    }
}

int total(int a[], int i, int tam, double tot)
{
    if (i == tam)
    {
        return tot;
    }
    double paga = solve(a[i], 0);
    printf("Paga: %.2lf\n", paga);
    return total(a, i+1, tam, tot+paga);

}

void ler(int arr[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%d", &arr[i]);
        ler(arr, i+1, tam);
    }
}


int main()
{
    int dinheiro, nds;
    scanf("%d%d", &dinheiro, &nds);
    int dias[nds];
    ler(dias, 0, nds);
    double result = total(dias, 0, nds, 0);
    //printf("result: %lf\n", result);
    if (result == 0)
    {
        printf("Naruto nao apareceu para comer\n");
    }
    else if (result <= dinheiro)
    {
        printf("Naruto conseguiu pagar a sua conta!\n");
    }
    else
    {
        printf("Naruto, faltam %.0lf ryos!\n", result-dinheiro);
    }
    return 0;
}