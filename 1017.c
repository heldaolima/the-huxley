#include <stdio.h>

int fibo(int num)
{
    if (num <= 2)
    {
        return 1;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", fibo(num-1));
    return 0;
}