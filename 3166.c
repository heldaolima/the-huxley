#include <stdio.h>

int impar(int num)
{
    int resp = 0;
    for (int j = 0; j <= num; j++)
    {
        if (j == 1) resp++;
        else if (j > 1) resp += 2;
    }
    return resp;
}

int main()
{
    int n, j;
    scanf("%d", &n);

    j = 0;
    for (int i = 0; i < n; i++)
    {
        j += impar(i);
    }
    printf("%d\n", j);
    
    return 0;
}