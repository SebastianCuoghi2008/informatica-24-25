/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.
Vedi pag 160*/

#include <stdio.h>

int main(){
    int numero=0;
    int conta=2;
    int fibonaccioA=1;
    int fibonaccioB=1;
    int fibonaccioC=0;

    printf("inserisci il numero di termini: ") ;
    scanf("%d", &numero);

    while(conta < numero){
        fibonaccioC=fibonaccioA+fibonaccioB;
        printf("%d", fibonaccioC);
        conta++;
        fibonaccioA=fibonaccioB;
        fibonaccioB=fibonaccioC;
    }
    return 0;
}