/*Chiesti all'utente N numeri (con N scelto dall'utente e strettamente positivo) stampare la somma di quelli pari e di quelli dispari.
Calcolare e mostrare anche la media di quelli pari e di quelli dispari.*/

#include <stdio.h>
int main() {
    int numero=0;
    int valore=0;
    int sommaP=0;
    int sommaD=0;
    int contatoreP=0;
    int contatoreD=0;
    float mediaP=0;
    float mediaD=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<=0);

    for(int i=0; i<numero; i++){
        printf("inserisci un valore: ");
        scanf("%d", &valore);
        if(valore%2==0){
            sommaP=sommaP+valore;
            contatoreP++;
        }else{
            sommaD=sommaD+valore;
            contatoreD++;
        }
    }
    mediaP=(float)sommaP/contatoreP;
    mediaD=(float)sommaD/contatoreD;
    printf("la somma dei numeri pari è %d\n", sommaP);
    printf("la somma dei numeri dispari è %d\n", sommaD);
    printf("la media dei numeri pari vale %f\n", mediaP);
    printf("la media dei numeri dispari vale %f\n", mediaD);
    return 0;
} 