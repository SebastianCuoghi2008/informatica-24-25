/*Creiamo un menù di richieste:
1)cariacare un array;
2)stampare l'array;
3)ordina l'array tramite la tecnica del bubble sort*/

#include <stdio.h>
#include "libreria.c"
#include "libreria.h"
#define DIM 5

int main(){
    int vett[DIM];
    int scelta;

    do{
        printf("MENU'");
        printf("\n1) carica l'array");
        printf("\n2) stampa l'array");
        printf("\n3) ordina tramite il bubble sort");
        printf("\n4) trovato il valore minimo e il valore mssimo all'interno dell'array scambiare la posizione");
        printf("\ndigita 0 per terminare: ");
        scanf("%d", &scelta);

        switch (scelta){
            case 1:
                caricaVett(vett, DIM);
                break;
            case 2:
                stampaVett(vett, DIM, '-');
                break;
            case 3:
                bubbleSort(vett, DIM);
                break;
            case 4:
                scambioMinMax(vett, DIM);
                stampaVett(vett, DIM, '-');
                break;
            default:
            break;
        }
    }while(scelta!=0);
}       