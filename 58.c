#include <stdio.h>

struct olimp {
    int o, p, b;
    int id, pos;
};

void analise(struct olimp ps)
{

}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    struct olimp paises[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &paises[i].o, &paises[n].p, &paises[n].b);
        paises[i].id = i+1;
    }

    for (int j = 0; j < n; j++)
    {
        analise(paises[j]);
    }
    


    return 0;
}