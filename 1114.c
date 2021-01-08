#include <stdio.h>
#include <math.h>

double serie(int num, int passo)
{
    //printf("num: %d passo: %.2lf", num, passo);
    if (passo > num)
    {
        return 0.0;
    }
    else if (passo == 1)
    {
        return 1.0 + serie(num, passo+1);
    }
    else
    {
        if (passo % 2 == 0)
        {
            return (pow(2.0, passo-1)/(3*passo/2)) + serie(num, passo+1); 
        }
        else
        {
            return (passo/pow(2.0, passo-1)) + serie(num, passo+1);
        }
        
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("S: %.2lf\n", serie(n, 1));
    return 0;
}