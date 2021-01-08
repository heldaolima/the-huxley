#include <stdio.h>
#include <string.h>

void inverso(char n[], int tam)
{
    if (tam == 0)
    {
        return;
    }
    
    if (n[tam-1] != 0)
    {
        printf("[%c]", n[tam-1]);
    }
    inverso(n, tam-1);
}

void ler()
{
    char n[100];
    scanf("%s", n);
    int tam = strlen(n);
    if (tam == 1 && n[0] == '0')
    {
        return;
    }
    inverso(n, tam);
    printf("\n");
    ler();

}

int main()
{
    ler();
    return 0;
}