#include <stdio.h>

int comparar(int a[], int b[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }
    if (a[i] == b[i])
    {
        return comparar(a, b, i+1, tam);
    }
    else
    {
        return 1 + comparar(a, b, i+1, tam);
    }
}

void forma_d(int c[], int d[], int i, int tam)
{
    if (tam == 0)
    {
        return;
    }
    d[i] = c[tam-1];
    forma_d(c, d, i+1, tam-1);

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

void forma_c(int a[], int c[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    int num = a[i] - a[i+1];
    if (num < 0)
    {
        num = num * (-1);
    }
    c[i] = num;
    forma_c(a, c, i+1, tam);
}

void forma_b (int b[], int j, int tam)
{
    if (j == tam)
    {
        return;
    }
    b[j] = j+1;
    forma_b(b, j+1, tam);
}

void ler(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &a[i]);
    ler(a, i+1, tam);
}

void func()
{
    int n, parada;
    parada = scanf("%d", &n);
    if (parada == EOF)
    {
        return;
    }
    
    int a[n], b[n-1], c[n-1], d[n-1]; //c é a diferença, d é c invertido
    ler(a, 0, n); // lista original
    
    forma_b(b, 0, n); // numeros de 1 até n-1
    
    //mostrar(b, 0, n-1);
    //printf("\n");
    
    forma_c(a, c, 0, n-1); // diferença entre os números de a
    
    //mostrar(c, 0, n-1);
    //printf("\n");

    forma_d(c, d, 0, n-1); // c invertida
    //mostrar(d, 0, n-1);   

    int jolly = comparar(b, c, 0, n-1);
    if (jolly != 0)
    {
        jolly = comparar(b, d, 0, n-1);
    }

    if (jolly == 0)
    {
        printf("Jolly\n");
    }
    else
    {
        printf("Not Jolly\n");
    }
    func();
}

int main()
{
    func();
    return 0;
}