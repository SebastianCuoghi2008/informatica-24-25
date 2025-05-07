/*DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI;*/

#include <stdio.h>
#define DIM 4

void riempiVettore(int vettore[], int dim) {
    for(int i = 0; i < dim; i++) {
        printf("Inserisci l'elemento in posizione %d: ", i);
        scanf("%d", &vettore[i]);
    }
}

int main() {
    int valore[DIM];
    int pari = 0;
    int dispari = 0;

    // Riempie il vettore
    riempiVettore(valore, DIM);

    // Conta i numeri pari e dispari
    for(int i = 0; i < DIM; i++) {
        if(valore[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    // Stampa gli elementi del vettore
    printf("Gli elementi del vettore sono: ");
    for(int i = 0; i < DIM; i++) {
        printf("%d\t", valore[i]);
    }
    printf("\n");

    // Stampa il conteggio dei numeri pari e dispari
    printf("Ci sono %d numeri pari e %d numeri dispari\n", pari, dispari);

    return 0;
}
