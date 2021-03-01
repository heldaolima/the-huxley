#include <stdio.h>

int cont_a(char s[], int i, int tot)
{
    if (s[i] == '\0') return tot;

    if (s[i] == 'a' || s[i] == 'A')
    {
        return cont_a(s, i+1, tot+1);
    }

    return cont_a(s, i+1, tot);
}

int main()
{
    char txt[1000];
    fgets(txt, 1000, stdin);
    
    printf("%d\n", cont_a(txt, 0, 0));

    return 0;
}