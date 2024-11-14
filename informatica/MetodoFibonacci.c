/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.
Vedi pag 160*/

#include <stdio.h>

int main(){
    Long numero=0;
    int conta=2;
    long fibonaccioA=1;
    long fibonaccioB=1;
    long fibonaccioC=0;

    printf("inserisci il numero di termini: ") ;
    scanf("%ld", &numero);

    while (num<3)
    {
        printf("Inserisci un valore maggiore di 3: ");
        scanf("%ld", &numero);
    }
    while(numero!=conta){
        fibonaccioC=fibonaccioA+fibonaccioB;
        printf("%ld", fibonaccioC);
        conta++;
        fibonaccioA=fibonaccioB;
        fibonaccioB=fibonaccioC;
    }
    return 0;
}