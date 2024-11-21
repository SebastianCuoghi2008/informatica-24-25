/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N=0;
    int C=0;
    int C_maxn=9;
    int C_min=1;
    srand(time(NULL));

    C=rand()%(C-max-C-min + 1)+C-min;

    if(N>20){
        printf("inserisci un numero minore di 20");
    }
    if(C==1){
        printf("il multiplo di N è da 1 a 20");
    }
    else if(C==2){
        printf("il multiplo di N è..");
    }
    else if(C==3){
        printf("il multiplo di N è..");
    }
    else if(C==4){
        printf("il multiplo di N è..");
    }
    else if(C==5){
        printf("il multiplo di N è..");
    }
    else if(C==6){
        printf("il multiplo di N è..");
    }
    else if(C==7){
        printf("il multiplo di N è ..");
    }
    else if(C==8){
        printf("il multiplo di N è 16");
    }
    else if(C==9){
        printf("il multiplo di N è 18");
    }
    return 0;
}