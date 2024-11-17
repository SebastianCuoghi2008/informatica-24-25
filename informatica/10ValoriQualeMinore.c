/*Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0
(cioè il programma termina quando viene inserito 0) e ne ricerca il valore minimo visualizzandolo sullo schermo.*/

#include <stdio.h>

int main(){
    int numero=0;
    int min=0; 
    int contatore=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        contatore++;
        if(numero<min || contatore==1)
            min=numero;
    }
    while(contatore<=10);
    
    printf("il valore minimo inserito é %d ",min);
    return 0;
}