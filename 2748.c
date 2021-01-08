#include <stdio.h>

int main()
{
    int fd, bd, md, fr, br, mr;
    scanf("%d %d %d", &fd, &bd, &md);
    scanf("%d %d %d", &fr, &br, &mr);
    
    int sobratot = 0;
    
    if ((0 <= fd && 0 <= bd && 0 <= md && fd <= 100 && bd <= 100 && md <= 100) && (0 <= fr && 0 <= br && 0 <= mr && fr <= 100 && br <= 100 && mr <= 100))
    {
        int sobraf = fr - fd;
        int sobrab = br - bd;
        int sobram = mr - md;
        if (sobraf > 0){
            sobratot = sobratot + sobraf;
        }
        if (sobrab > 0){
            sobratot = sobratot + sobrab;
        }
        if (sobram > 0){
            sobratot = sobratot + sobram;
        }
        printf("%d\n", sobratot);
    }   
    return 0;
}