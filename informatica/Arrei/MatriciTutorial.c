#include <stdio.h>
#include "libArray.c"
#define RIGHE 10
#define COLONNE 8

int main(){
    srand(time(NULL));
    int mat[RIGHE][COLONNE];

    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            mat[i][j] = i;
        }
    }
    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    riempiVettoreCasuale(mat[0], COLONNE, 0, 20);
    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<RIGHE; i++){
        riempiVettoreCasuale(mat[i], COLONNE, 0, 100);
        stampaVettore(mat[i], COLONNE, '\t');
        bubbleSort(mat[i], COLONNE);
    }
    printf("\n\n\n");
    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}