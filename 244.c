#include <stdio.h>

int cont_c(char string[], char obj, int i)
{
    if (string[i] == '\0') return 0;
    
    if (string[i] == obj) return 1 + cont_c(string, obj, i+1);
    
    return cont_c(string, obj, i+1);
}

int main()
{
    char c, s[51];
    fgets(s, 51, stdin);
    scanf(" %c", &c);

    printf("%d\n", cont_c(s, c, 0));

    return 0;
}