#include <stdio.h>

char soma(char c, int k)
{
    if (c+k > 122) c = (c+k - 26);
    else c = c+k;
    return c;
}

void cesar(char msg[], int k)
{
    int i = 0;
    while (msg[i] != '\0')
    {
        if (msg[i] >= 65 && msg[i] <= 90) msg[i] += 32;
        msg[i] = soma(msg[i], k);
        i++;
    }
}

int main()
{
    char msg[31];
    scanf("%s", msg);

    int k;
    scanf("%d", &k);
    
    cesar(msg, k);

    printf("%s\n", msg);

    return 0;
}