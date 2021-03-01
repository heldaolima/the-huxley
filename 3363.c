#include <stdio.h>

void arrumar(char s[], int i, char last) //se nao passar por causa do final, use o tamanho e coloque if(tam-1 == ' ')
{
    if (s[i] == '\n') return;

    if (last == ' ' && s[i] == ' ')
    {
        arrumar(s, i+1, s[i]);
    }
    else
    {
        printf("%c", s[i]);
        arrumar(s, i+1, s[i]);
    }
    
}

int main()
{
    char s[501];
    fgets(s, 501, stdin);
    printf("%s\n", s);
    arrumar(s, 0, '!');


    return 0;
}