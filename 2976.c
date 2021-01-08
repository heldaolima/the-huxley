#include <stdio.h>

long long int sequencia(long long int num, long long int tot)
{
    if (num == 1)
    {
        return tot+1;
    }
    else if (num % 2 == 0)
    {
        return sequencia(num/2, tot+num);
    }
    else
    {
        return sequencia((3*num)+1, tot+num);
    }
}

int main()
{
    long long int num;
    scanf("%lli", &num);

    printf("%lli\n", sequencia(num, 0));

    return 0;
}