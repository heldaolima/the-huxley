#include <stdio.h>

int fatorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num-1);
    }
}

int digitos(int i, int num, int soma)
{
    int div = num / i;
    if (div == 0)
    {
        return soma;
    }
    else
    {
        int digito = div % 10;
        soma = soma + fatorial(digito);
        //printf("Soma: %d\n", soma);
        //printf("digito: %d\n", digito);
        return digitos(i*10, num, soma);   
    }
    
}


int main()
{
    int n;
    scanf("%d", &n);
    int result = digitos(1, n, 0);
    if (result == n)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n%d\n", result);
    }
    
    return 0;

}

//strongnumber