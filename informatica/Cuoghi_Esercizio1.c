/*GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int anno=0;
    int annoMin=2000;
    int annoMax=2024;
    int mese=0;
    int giorno=0;
    int bisestile=0
    srand(time(NULL));

    anno=rand()%(annoMax-annoMin + 1)+annoMin;
    mese=rand()%12+1;
            //giorno=rand()%30+1;
    if(anno%100==0){
        if (anno%400==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
        else{
            if (anno%4==0){
                printf("L'anno è bisestile");
                bisestile=1;
            }
        }
    }
    if(mese==2){
        if(giorno>=1 && giorno<=28+bisestile){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
    else{
        if( mese==11 || mese==4 || mese==6 || mese==9){
            if (giorno>=1 && giorno<=30){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
    }
    giorno=rand()%30+1;
    printf("la data è %d/%d/%d", anno, mese, giorno);
    return 0;
}

