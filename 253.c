#include <stdio.h>

_Bool v_f(char s1[], char s2[]) 
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') return 1;
    else return 0;
}


int main()
{
    char s1[51], s2[51];
    fgets(s1, 51, stdin);
    fgets(s2, 51, stdin);
    
    if (v_f(s1, s2))
    {
        printf("IGUAIS\n");
    } 
    else
    {
        printf("DIFERENTES\n");
    } 

    return 0;
}