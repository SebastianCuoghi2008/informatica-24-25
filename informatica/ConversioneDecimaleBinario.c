/*convertire un numero da decimale a binario
introducendo un valore da 0 a 63*/

#include <stdio.h>

int main(){
    int n0=0;
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int numero=0;
    int quoziente=0;

    printf("inserisci un numero compreso tra 0 e 63: ");
    scanf("%d", &numero);
    quoziente = numero;

    if(numero >= 0 && numero <= 63){
        if(quoziente != 0){ //convertiamo il numero
            n0 = quoziente%2; //in n0 abbiammo inserito il resto del bit meno significativo
            quoziente = quoziente/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoziente != 0){
            n1 = quoziente%2; //in n1 abbiammo inserito il resto del bit meno significativo
            quoziente = quoziente/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoziente != 0){
            n2 = quoziente%2; //in n2 abbiammo inserito il resto del bit meno significativo
            quoziente = quoziente/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoziente != 0){
            n3 = quoziente%2; //in n3 abbiammo inserito il resto del bit meno significativo
            quoziente = quoziente/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoziente != 0){
            n4 = quoziente%2; //in n4 abbiammo inserito il resto del bit meno significativo
            quoziente = quoziente/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoziente != 0){
            n5 = quoziente%2; //in n5 abbiammo inserito il resto del bit meno significativo
            quoziente = quoziente/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        printf("\n ilnumero decimale %d in binario vale: %d%d%d%d%d%d", numero,n5,n4,n3,n2,n1,n0);
        
    }
    else
        printf("\n il valore inserito non rispetta la richiesta");
}