#include <stdio.h>

int cind(double s[], int i, int tam, double num)
{
    if (i == tam)
    {
        return tam;
    }
    
    if (s[i] == num)
    {
        return i;
    }
    return cind(s, i+1, tam, num);
}

void lers(double arr[], int i, double tam)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%lf", &arr[i]);
        lers(arr, i+1, tam);
    }
}

void lerc(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &a[i]);
    lerc(a, i+1, tam);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int casas[n];
    
    double num, sapatos[n]; 
    scanf("%lf", &num);
    
    lerc(casas, 0, n);
    lers(sapatos, 0, n);
    int ind = cind(sapatos, 0, n, num);
    if (ind == n)
    {
        printf("Nenhuma das jovens e a moca do baile.\n");
    }
    else
    {
        printf("Cinderela mora na casa %d!\n", casas[ind]);
    }
    
    return 0;
}