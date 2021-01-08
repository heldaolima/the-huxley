#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (-100 <= a && -100 <= b && -100 <= c && a <= 100 && b <= 100 && c <= 100)
    {
        if (a < b)
        {
            if (b >= c)
            {
                printf(":(\n");
            } else{
                printf(":)\n");
            }
            if (b < c)
            {
                if (c - b < b - a){
                    printf(":(\n");
                } else{
                    printf(":)\n");
                }
            }
        } else if(a > b && b > c)
        {
            if (a - b < b - c){
                printf(":(\n");
            } else{
                printf(":)\n");
            }
        } else if(a == b){
            if (b > c){
                printf(":(\n");
            } else{
                printf(":)\n");
            }
        } else{
            printf(":)\n");
        } 
    }

    return 0;
}