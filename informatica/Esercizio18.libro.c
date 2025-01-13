/*Esercizio n°18
Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.*/

#include <stdio.h>

int main(){
    int numero=0;
    int fattoriale=1;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    for(int i=1; i<=numero; i++){
        fattoriale*=i;
    }
    printf("Il calcolo del fattoriale di %d vale %d", numero, fattoriale);
    return 0;
}
