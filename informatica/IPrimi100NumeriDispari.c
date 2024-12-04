/*Scrivi un programma che visualizzi i primi 100 numeri dispari a gruppi di 5.*/

#include <stdio.h>

int main(){
    int d=1;

    for(int i=0; i<20; i++){
        for(int j=0; j<5; j++){
            printf("%d\t",d);
            d+=2;
        }
        printf("\n");
    }
}