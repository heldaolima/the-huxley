#include <stdio.h>

int good_string(char p[])
{
    int i = 0;
    while (p[i] != "\0")
    {
        analise(p, p[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++);
    {
        char p[100];
        scanf("%s", p);
        good_string(p);
    }

}