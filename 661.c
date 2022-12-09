#include <stdio.h>

int counter(int h1, int m1, int h2, int m2)
{
    int min_counter = 0;

    while (h1 != h2 || m1 != m2) {
        m1++;
        if (m1 > 59) {
            h1++;
            if (h1 > 23) h1 = 0;
            m1 = 0;
        }
        min_counter++;
    }
    return min_counter;
}

int main() {
    int h1=1, m1=1, h2=1, m2=1;
    int flag = 0;
    
    while (1) {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) 
            break;
        printf("%d\n", counter(h1, m1, h2, m2));
    }


    return 0;
}
