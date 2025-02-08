/*Scrivete una funzione con parametro un intero n (passato per valore) che stabilisca
se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0.*/

#include <stdio.h>

numero_primo(int *_N);

int main(){
    int numero=0;
    int numeroPrimo;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
    }while (numero<=0);

    numeroPrimo=numero_primo(int numero);

    printf("%d è un numero primo", numeroPrimo);
}
numero_primo(int *_N){
    int divisore=2;
    int contatore=0;
    
    while (divisore<=*_N/2 && contatore<2){
        if(*_N%divisore==0)
            contaDivisori++;
        divisore++;
    }

    if (contatore==1){
        _N=1;
    }
    else{
        _N=0;
    }
    return contatore;
}
