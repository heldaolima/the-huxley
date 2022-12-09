#include <stdio.h>

#define MAX 100

struct friend {
    char name[MAX];
    int idade;
};

int main()
{
    int n, i = 0, idade, flag = 0;
    scanf("%d", &n);
    
    struct friend friends[n];
    
    for (i = 0; i < n; i++)
        scanf("%s %d", friends[i].name, &friends[i].idade);
    
    scanf("%d", &idade);

    for (i = 0; i < n; i++) {
        if (friends[i].idade == idade){
            flag = 1; 
            printf("%s ", friends[i].name);
        }
    }
    if (!flag) printf("Eleven nao tem amigos com essa idade.");
    printf("\n");

    return 0;
}
