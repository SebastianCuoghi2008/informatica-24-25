/*3) DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI*/

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
    int sommaPositiva=0;
    int sommaNegativa=0;
    int contatore=1;

    // Riempie il vettore
    riempiVettore(valore, DIM);

    for(int i=0; i<DIM; i++){
        if(valore[i] <0 ){
            sommaNegativa+=valore[i];
        }
        else{
            sommaPositiva+=valore[i];
        }
    }


    // Stampa gli elementi del vettore
    printf("Gli elementi del vettore sono: ");
    for(int i = 0; i < DIM; i++) {
         printf("%d\t", valore[i]);
    }
    printf("\n");

    //stampamento somma negativa e positiva

    printf("la somma dei numeri positivi è %d e la somma dei numeri negativi è %d", sommaPositiva, sommaNegativa);

    return 0;
}