#include <stdio.h>

void inverso(char a[], int tam)
{
    if (tam == 0)
    {
        return;
    }
    printf("%c", a[tam-1]);
    inverso(a, tam-1);
}

int main()
{
    char nums[3];
    scanf("%s", nums);
    inverso(nums, 3);
    printf("\n");
    return 0;
}