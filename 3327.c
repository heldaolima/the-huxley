#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);

    if (0 <= i <= 11){
        if (i == 0){
            printf("rosa rosa verde rosa");

        } else if (i ==1){
            printf("verde rosa verde rosa");

        } else if (i == 2){
            printf("verde verde verde rosa");

        } else if (i == 3){
            printf("rosa verde verde rosa");

        } else if (i == 4){
            printf("rosa rosa rosa verde");

        } else if (i == 5){
            printf("verde rosa rosa verde");

        } else if (i == 6){
            printf("verde verde rosa verde");

        } else if (i == 7){
            printf("rosa verde rosa verde");

        } else if (i == 8){
            printf("verde verde verde verde");

        } else if (i == 9){
            printf("rosa rosa rosa rosa");

        } else if (i == 10){
            printf("rosa rosa verde verde");

        } else if (i == 11){
            printf("verde verde rosa rosa");
    
        }
    }

    return 0;
}