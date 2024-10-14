/*Scrivere un programma che letto due orari in ore,
minuti e secondi restituisce quale orario viene prima*/

#include <stdio.h>

int main(){
    int oreA=0;
    int minutiA=0;
    int secondiA=0;
    int totaleA=0;
    int oreB=0;
    int minutiB=0;
    int secondiB=0;
    int totaleB=0;

    printf("\ninserisci il primo orario");
    scanf("%d", &oreA);
    scanf("%d", &minutiA);
    scanf("%d", &secondiA);
    printf("\ninserisci il secondo orario");
    scanf("%d", &oreB);
    scanf("%d", &minutiB);
    scanf("%d", &secondiB);
    totaleA=oreA*60*60+minutiA*60+secondiA
    totaleB=oreB*60*60+minutiB*60+secondiB

    if(totale1>totale2){
        printf(il secondo orario viene prima);
    }
    else{
        if(totale1<totale2){
            printf(il primo orario viene prima);
        }
        else{
            if(totale1==totale2){
                printf(i due orari sono uguali);
            }

        }

    }
    return 0;
}