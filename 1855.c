#include <stdio.h>

int main() {
    int curr, mai, men, i = 0;
    
    scanf("%d", &curr);
    mai = curr;
    men = curr;

    for (i = 0; i < 3; i++) {
         scanf("%d", &curr);
        if (curr > mai) mai = curr;
        else if (curr < men) men = curr;
    }

    printf("%d\n", mai - men);

    return 0;
}
