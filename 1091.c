#include <stdio.h>

//S = (1/4)+1+(3/8)+1+(5/12)+...

int main()
{
    int n;
    scanf("%d", &n);
    
    double resp = 0, q = 4;
    
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            resp += i/q;
            q += 4;
        }
        else resp += 1;
    }

    printf("%.2lf\n", resp);
    
    q = 4;

    for (int i = 1; i <= n; i++){
        if (i % 2 != 0)
        {
            if (i == 1) printf("%d/%.0lf", i, q);
            else printf(" %d/%.0lf", i, q);
            q += 4; 
        }
        else printf(" 1");
        if (i == n) printf("\n");
        else printf(" +");

    }
    
    return 0;
}