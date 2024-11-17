/*Scrivi un programma che legge un numero NUM strettamente positivo
e visualizza tutti i numeri pari inferiori a tale numero fino a 0.*/

#include <stdio.h>

int main(){
    int numero=0;
    int contatore=1;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    while(numero>0){
        printf("\n il valore inserito è: %d\n", numero);
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        contatore++;
    }
    printf("hai inserito %d numeri", contatore);
    return 0;
}
