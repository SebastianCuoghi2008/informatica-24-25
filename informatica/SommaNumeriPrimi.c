/*calcolare la somma dei primi numeri N naturali
ES: 5 1+2+3+4+5*/

#include <stdio.h>

int main(){
    int numero=0;
    int somma=0;

    do{
        printf("inserisci un numero maggioredi 0:\n "); 
        scanf("%d", &numero);
    }while(numero<0);

    for(int i=1; i<=numero; i++){
        somma=somma+i;
    }
    printf("la somma dei numeri primi è %d", somma);
    return 0;
}