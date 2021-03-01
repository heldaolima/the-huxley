#include <stdio.h>

int contp(char f[], int i)
{
    if (f[i] == '\0') return 1; //espaços seguidos.
    
    if (f[i] == ' ') return 1 + contp(f, i+1);
    
    return contp(f, i+1);
}

int main()
{
    char frase[501];
    fgets(frase, 501, stdin);

    printf("%d\n", contp(frase, 0));
    
    return 0;
}