#include <stdio.h>

struct personagem{
    int forca;
    int inte;
    int dest;
    int furt;
    int pes;

};

int main()
{
    struct personagem meu;
    scanf("%d %d %d %d %d", &meu.forca, &meu.inte, &meu.dest, &meu.furt, &meu.pes);

    if (meu.forca > 5 && meu.dest > 5 && meu.pes > 5)
    {
        printf("Knight\n");
    }
    else if (meu.forca < 5 && meu.inte > 5 && meu.furt > 5 && meu.pes < 5)
    {
        printf("Mage\n");
    }
    else if (meu.forca > 5 && meu.inte > 5 && meu.dest > 5 && meu.furt > 5 && meu.pes < 5)
    {
        printf("Paladin\n");
    }
    else if (meu.forca > 10 && meu.inte < 5 && meu.dest < 5 && meu.furt < 5 && meu.pes > 5)
    {
        printf("Orc\n");
    }

    return 0;
}