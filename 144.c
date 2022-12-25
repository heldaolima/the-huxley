#include <stdio.h>

typedef struct area {
    int x, y, tot;
} Area;

int main()
{
    Area album, f1, f2;
    scanf("%d %d", &album.x, &album.y);
    album.tot = album.x * album.y;

    scanf("%d %d", &f1.x, &f1.y);
    f1.tot = f1.x * f1.y;

    scanf("%d %d", &f2.x, &f2.y);
    f2.tot = f2.x * f2.y;

    (f1.tot + f2.tot <= album.tot) ? printf("S") : printf("N");
    printf("\n");

}