#include <stdio.h>

int ajustemenos(int num, int obj)
{
    if (num < obj)
    {
        return num;
    }
    
    return ajustemenos(num - 10, obj);
}

int ajustemais(int num, int obj)
{
    if (num >= obj)
    {
        return num;
    }
    
    return ajustemais(num+10, obj);
}

void mostrar(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d ", a[i]);
    mostrar(a, i+1, tam);
}

void deslocar(int a[], int b[], int i, int tam, int desloc)
{
    
    if (i == tam)
    {
        return;
    }
    int num;
    num = a[i] + desloc;
    
    if (num < 0)
    {
        
        num = ajustemais(num, 0);
        
    }
    
    else if (num > 9)
    {
        num = ajustemenos(num, 10);
    }
    
    b[i] = num;
    //printf("i: %d a[i]: %d b[%d]: %d\n", i, a[i], pos, b[pos]);
    deslocar(a, b, i+1, tam, desloc);
}

void ler(int arr[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }   
    scanf("%d", &arr[i]);
    ler(arr, i+1, tam);
}


int main()
{
    int n, desloc, i, j, temp;
    scanf("%d", &n);
    int a[n], b[n];
    ler(a, 0, n);
    scanf("%d", &desloc);
   //printf("desloc: %d\n", desloc);
    deslocar(a, b, 0, n, desloc);
    mostrar(b, 0, n);
    printf("\n");
    return 0;
}