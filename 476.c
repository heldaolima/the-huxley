#include <stdio.h>

struct monstro{
    char nome[21];
    int id;
    int level;
    int vida;
    int ataque;
    int defesa;
};

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    struct monstro a[n];
    
    int i;
    for (i = 0; i < n; i++)
    {
        fgets(a[i].nome, 21, stdin);
        scanf("%d %d %d %d %d", &a[i].id, &a[i].level, &a[i].vida, &a[i].ataque, &a[i].defesa);
        getchar();
    }
    
    int j;
    for (j = 0; j < n; j++)
    {
        printf("Nome: %s", a[j].nome);
        printf("ID: %d\nLevel: %d\nVida: %d\nAtaque: %d\nDefesa: %d\n", a[j].id, a[j].level, a[j].vida, a[j].ataque, a[j].defesa);
    }
    
    return 0;
}