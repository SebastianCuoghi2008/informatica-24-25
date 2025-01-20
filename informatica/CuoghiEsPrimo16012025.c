/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/

#include <stdio.h>

int main(){
    int numero=0;
    int cifra=0;
    int posizione=1;
    int numero_quoziente;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &numero);
    }while(numero<=0);

    numero_quoziente-numero;
    while(numero_quoziente!=0){
        cifra=numero_quoziente%10;
        numero_quoziente=numero_quoziente/10;
        if(cifra==posizione){
            printf("\n la cifra %d corrisponde alla sua posizione %d", cifra, posizione);
        }
        posizione++;
    }
    return 0;
}