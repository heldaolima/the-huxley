#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contp(char f[], int i, int tam, int cont)
{
    if (i == tam)
    {
        return cont;
    }

    if (f[i] == ' ')
    {
        if (cont == 0)
        {
            return contp(f, i+1, tam, cont+2);
        }
        return contp(f, i+1, tam, cont+1);
    }
    return contp(f, i+1, tam, cont);

}

int main()
{
    char frase[500];
    scanf("%s", frase);
    int tam, cont;
    tam = strlen(frase);
    cont = contp(frase, 0, tam, 0);
    printf("%d\n", cont);
    return 0;
}