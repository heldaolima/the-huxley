#include <stdio.h>

int main()
{
    char num[7];
    int i = 0, sorte1 = 0, sorte2 = 0;
    
    scanf("%s", num);

    for (i = 0; i < 6; i++) {
        if (i <= 2) sorte1 += num[i] - '0';
        else sorte2 += num[i] - '0';
    }

    if (sorte1 % 7 == 0 && sorte2 % 2 == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}