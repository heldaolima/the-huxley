#include <stdio.h>
#include <math.h>

//HUXLEY 1069
/*
Level	Potência (em W)
 1-20 	20 + (level)3
21-40	8000 + (level - 10)2
41-60	9000 + 5*level
61-80	9300 + 2*level
81-100	9500 + level
*/

int main(){

    int level;
    scanf("%d", &level);

    double potencia;
    if (level <= 20){
        potencia = 20 + pow(level, 3); //uso da bilbioteca math.h
    
    } else if (level >= 21 && level <= 40){
        potencia = 8000 + pow(level - 10, 2);
    
    } else if (level >= 41 && level <= 60){
        potencia = 9000 + (5 * level);
    
    } else if (level >= 61 && level <= 80){
        potencia = 9300 + (2 * level);
    
    } else{
        potencia = 9500 + level;
    }

    printf("Potencia de : %.0lf W\n", potencia);
    return 0;
}