/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/

#include <stdio.h>

int main(){
    int numero=0;
    int quoziente=0;
    int resto=0;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    quoziente=numero / 10;
    resto=numero % 10;
    printf("la prima cifra è %d\n", resto);
    
    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf("la seconda cifra è %d\n", resto);

    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf("la terza cifra è %d\n", resto);

    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf("la quarta cifra è %d\n", resto);
    return 0;
}