/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo
delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/

#include <stdio.h>
int main(){
    int numero=0;
    int prodotto;

    printf("inserisci un numero: ");
    scanf("%d", &numero);
    prodotto=numero;

    for(int i=1; i<=11; i++){ 

        prodotto=prodotto+numero;
        printf("%d\n", prodotto);
    }
    return 0;
}