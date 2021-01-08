#include <stdio.h>

int fibo(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}


int main()
{
    int num, result;
    scanf("%d", &num);
    result = fibo(num);
    if (result != 0)
    {
        printf("%d mg/L\n", result);
    }
    else
    {
        printf("O antidoto nao e necessario\n");
    }
    
    return 0;
}