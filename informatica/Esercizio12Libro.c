/*Esercizio n°12:
Scrivi un programma che visualizzi la somma dei quadrati dei primi 12 numeri naturali successivi a 8*/

#include <stdio.h>

int main(){
    int inizio;
    int quantita;
    int somma=0;

    printf("inserisci il valore iniziale: ");
    scanf("%d",&inizio);
    do{
    printf("inserisci qunati elementi vuoi considerare: ");
    scanf("%d", &quantita);
    }while(quantita<=0);

    for(int i=inizio+1; i<=inizio+quantita; i++){
        somma+=i*i;
    }
    printf("la somma dei %d valori da %d vale: %d", quantita, inizio, somma);
    return 0;
}