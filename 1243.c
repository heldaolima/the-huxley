#include <stdio.h>

int primo(int num)
{
    int cont = 0;
    for (int i = 1; i <= num; i++) if (num % i == 0) cont++;
    
    if (cont > 2) return 0;
    else return 1;
}

long long int fatoracao(long long int num)
{
    long long int s = 0;
    for (long long int i = 2; i <= num; i++)
    {
        if (primo(i))
        {
            int qtd = 0;
            while (num % i == 0)
            {
                num = num / i;
                qtd++;
            }
            s += qtd*i;
        }
    }
    return s;    
}

int main()
{
    long long int x = 1;
    while (x != 0)
    {
        scanf("%lld", &x);
        if (x != 0) printf("%lld\n", fatoracao(x));
    }
    return 0;
}