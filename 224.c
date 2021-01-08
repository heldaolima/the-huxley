#include <stdio.h>

void maior(int result)
{
    int num;
    scanf("%d", &num);
    if (num == 0)
    {
        printf("%d\n", result);
    }
    else
    {
        if (num > result)
        {
            maior(num);
        }
        else
        {
            maior(result);
        }
    }
}

int main()
{
    maior(0);
    return 0;
}