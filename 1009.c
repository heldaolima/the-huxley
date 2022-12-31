#include <stdio.h>

int main()
{
    char str1[6], cp[6];
    int i = 0, l = 0, j = 0;
    scanf("%s", str1);

    for (i = 4; i >= 0; i--) {
        cp[i] = str1[j];
        j++;
    }
    cp[5] = '\0';

    for (i = 0; i < 5; i++) {
        if (cp[i] == str1[i]) l++;
    }
    l == 5 ? printf("S\n") : printf("N\n");
    return 0;
}

