#include <stdio.h>

char solve(int a[])
{
    int n = 0;
    char j;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] < a[i+1]) n++;
        else 
        {
            j = 'N';
            break;
        }
    }
    if (n == 4) return 'C';
    else
    {
        n = 0;
        for (int i = 0; i < 4; i++)
        {
            if (a[i] > a[i+1]) n++;
            else
            {
                j = 'N';
                break;
            }
        }
        if (n == 4) j = 'D';
    }
    return j;
}

int main()
{
    int a[5]; 
    char r;
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);

    r = solve(a);   
    printf("%c\n", r);

    return 0;
}