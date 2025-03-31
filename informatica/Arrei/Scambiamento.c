/*abbiamo due vettori, eseguire lo scambio degli elementi dei due vettori*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libArray.h"
#include "libArray.c"
#define DIM 8 

int main(){
    srand(time(NULL));
    int V1[DIM], V2[DIM], k;
    
    riempiVettoreCasuale(V1, DIM, 1, 500);
    riempiVettoreCasuale(V2, DIM, 1, 500);

    stampaVettore(V1, DIM, '-');
    printf("\n");
    stampaVettore(V2, DIM, '-');

    for(int i=0; i<DIM; i++){
        k=V1[i];
        V1[i]=V2[i];
        V2[i]=k;
    }
    printf("\n\n");
    stampaVettore(V1, DIM, '*');
    printf("\n");
    stampaVettore(V2, DIM, '*');
}