/*Scrivi un programma che chieda un numero intero all'utente e mostri tutti i numeri pari o dispari compresi tra il numero scelto e 0.*/

#include <stdio.h>
int main(){
    int numero;

    do
    {
        printf("Inserisci un valore: ");
        scanf("%d", &numero);
    } while (numero<0);

    for(int i=numero; i>=0; i=i-2){
        printf("%d\n", i);
    }
    return 0;
}