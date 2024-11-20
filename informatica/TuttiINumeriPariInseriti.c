/*Scrivi un programma che legge un numero NUM strettamente positivo
e visualizza tutti i numeri pari inferiori a tale numero fino a 0.*/

#include <stdio.h>

int main(){
    int numero;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<0);
    if(numero%2==1)
        numero--;
    while(numero>0){
        printf("%d\n", numero);
        numero=numero-2;
    }
    return 0;
}