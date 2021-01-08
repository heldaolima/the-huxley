#include <stdio.h>

void dec2bin(int dec)
{
    
    int resto = dec % 2;
    if (dec / 2 == 0)
    {
        printf("%d", resto);
    }
    else
    {
        int num = dec/2;
        dec2bin(num);
        printf("%d", resto);
    }
}

int potencia(int base, int expo, int n)
{
    if (expo == 0)
    {
        return n;
    }
    else
    {
        n = n * base;
        return potencia(base, expo-1, n);
    }
}


int bin2dec(int bin, double passo, int i, int tot) //usar o esquema de passar pelos digitos
{
    if (bin == 0)
    {
        return tot;
    }
    else
    {
        int digito = bin % 10;
        tot = tot + (digito * potencia(2, passo, 1));
        return bin2dec(bin/10, passo+1, i*10, tot);
    }
}


void ler(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        char conv[4];
        int num;
        scanf(" %s", conv);
        printf("%s\n", conv);
        
        if (conv == "dec ")
        {
            scanf("%d", &num);
            dec2bin(num);
            printf("\n");
        }
        else if (conv == "bin ")
        {
            scanf("%d", &num);
            printf("%d\n", bin2dec(num, 1, 1, 0));
        }
        else
        {
            printf("comando invalido.\n");
        }
        ler(n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    ler(n);
    return 0;
}