/*Scrivi un programma in C che riempia un vettore di 10 elementi con numeri casuali compresi tra 1 e 15. Fai in modo che il vettore non abbia elementi ripetuti.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

int main(){

    int vettore[DIM];

    srand(time(NULL));
    for(int i=0; i<DIM; i++){
        int flag=0;

        do{
        vettore[i]=rand()%15+1;

        flag=0;

        for(int j=0; j<i; j++){
            if(vettore[i] == vettore[j]){
                flag=1;
            }
        }
        }while(flag==1);
    }
    for(int i=0; i<DIM; i++){
        printf("%d\t", vettore[i]);
    }
    return 0;
}