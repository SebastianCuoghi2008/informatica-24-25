/*dato un valore,eseguire la conversione da decimale a binario*/

#include <stdio.h>
#include <math.h>

long converti(int _N);
int main(){
    int numero=0;
    long convertito=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<=0);
    convertito=converti(numero);
    printf("%ld\n", convertito);
}
long converti(int _N){
    int quoziente=_N;
    int resto=0;
    int contatore=0;
    int _convertito=0;

    while(quoziente!=0){
        resto=quoziente%2;
        quoziente=quoziente/2;
        _convertito+=resto*pow(10, contatore);
        contatore++;
    }
    return _convertito;
}