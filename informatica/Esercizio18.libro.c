/*Esercizio n°18
Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.*/

#include <stdio.h>

int main(){
    int numero=0;
    int fattoriale=1;
    int somma=0;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    for(int i=1; i<=numero; i++){
        fattoriale*=i;
        printf("=%d", i);
    }
    
}