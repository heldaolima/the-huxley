#include <stdio.h>

int willy(int i, int num, int cont, int soma)
{
    int div = num / i;
    if (div == 0)
    {
        return soma;
    }
    else
    {
        int digito = div % 10;
        cont = cont + 1;
        if (digito % 2 == 0)
        {
            digito = digito * 2 * cont;
        }
        else{
            digito = digito * 3 * cont;
        }

        return willy(i*10, num, cont, soma+digito);   
    }
    
}

void ler()
{
    int n;
    scanf("%d", &n);
        
    if (n != 0)
    {
        printf("%d\n", willy(1, n, 0, 0));
        ler(n);
    }
    
}

int main()
{
    ler();
    return 0;
}