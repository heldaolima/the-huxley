#include <stdio.h>

void decrescpar(int num)
{
    if (num >= 0)
    {
        if (num % 2 == 0)
        {
            printf("%d\n", num);
        }
        decrescpar(num-1);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    decrescpar(num);
    return 0;
}