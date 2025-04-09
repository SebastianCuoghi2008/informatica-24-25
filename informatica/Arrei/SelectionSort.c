/*scrivi un programma che genera un vettore casuale e lo ordina usando selection sort*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libArray.c"

#define DIM 20000

int main(){
    srand(time(NULL));
    int vett[DIM];
    double start, end;
    double elapsed_time;

    riempiVettoreCasuale(vett, DIM,0,100);
    //stampaVettore(vett, DIM, '-');
    start = (double)clock();
    selectionSort(vett, DIM);
    end = (double)clock();
    elapsed_time = ((double)(end - start) );
    printf("\n\nTempo di esecuzione: %.2f ms\n", elapsed_time);
    printf("\n\n");
    //stampaVettore(vett, DIM, '-');
    return 0;
}