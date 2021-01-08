#include <stdio.h>

//se latas > copos, derrubam-se os copos

int garcom(int l[], int c[], int i, int tam, int result)
{
    if (i == tam)
    {
        return result;
    }
    if (l[i] > c[i])
    {
        return garcom(l, c, i+1, tam, result+c[i]);
    }
    return garcom(l, c, i+1, tam, result);
}

void ler(int l[], int c[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &l[i]);
    scanf("%d", &c[i]);
    ler(l, c, i+1, tam);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int latas[n], copos[n];
    
    ler(latas, copos, 0, n);
    printf("%d\n", garcom(latas, copos, 0, n, 0));

    return 0;
}