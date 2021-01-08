#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int maior, menor, meio;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if (n1 > n3 || n2 > n3)
    {
        if (n1 > n2)
        {
            int aux = n1;
            n1 = n3;
            n3 = aux;
        }
        else
        {
            int aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    if (n1 > n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    printf("%d\n%d\n%d\n", n1, n2, n3);

    return 0;
}