/*2) DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI*/

#include <stdio.h>
#define DIM 4

void riempiVettore(int vettore[], int dim) {
    for(int i = 0; i < dim; i++) {
        printf("Inserisci l'elemento in posizione %d: ", i);
        scanf("%d", &vettore[i]);
    }
}

int main(){
    int valore[DIM];
    float media=0;

    // Riempie il vettore
    riempiVettore(valore, DIM);

    //calcoliamo la media
    for(int i = 0; i < DIM; i++) {
        media+=valore[i];
    }
    media=media/DIM;
    
    // Stampa gli elementi del vettore
    printf("Gli elementi del vettore sono: ");
    for(int i = 0; i < DIM; i++) {
         printf("%d\t", valore[i]);
    }
    printf("\n");
 
    // Stampamento della media
    printf("la media numerica è %f", media);

    return 0;
}