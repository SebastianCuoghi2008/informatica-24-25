/*Caricato un vettore con valori random,
calcolare la media dei valori*/

#include <stdio.h>
#include "libreria.c"
#include <stdlib.h>
#include <time.h>
#define DIM 4

int main(){
    srand(time(NULL));

    int vett[DIM]={0};
    float media=0;

    caricaRandom(vett,DIM);
    stampaVett(vett,DIM);
    media=calcolaMedia(vett,DIM);
    printf("la media vale: %.2f", media);
}