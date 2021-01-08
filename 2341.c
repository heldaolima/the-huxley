#include <stdio.h>

int decrementa(int i, int num, int digito)
{
    int div = num / i;
    if (div == 0)
    {
        if (digito % 2 == 0)
        {
            return num-4;
        }
        else
        {
            return num-3;
        }
    }
    else
    {
        int digito = div % 10;
        return decrementa(i*10, num, digito);   
    }

}

int main()
{
    int num, result;
    scanf("%d", &num);
    result = decrementa(1, num, 0);
    printf("%d\n", result);
    return 0;
}

//decrementa 3 ou 4