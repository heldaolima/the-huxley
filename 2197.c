#include <stdio.h>
#include <stdlib.h>
 // Tá dando um erro essa porra
int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0 && n < 200)
    {
        char lista[n];

        for (int i = 0; i < n; i++)
        {
            char c;
            int pos;

            scanf("%d %c", &pos, &c);
            
            if (pos > 1 && pos <= n)
            {
                lista[pos] = c;
            } else{
                break;
            }
            
        }

        for (int c = 0; c <= n; c++)
        {
            printf("%c\n", lista[c]);
        }
    }
    
    return 0;
}