/*dato un valore, stampare i suoi fattori
Esempio: 28= 2*2*7   2, 2, 7
Esempio: 36= 2*13
28/2
14*/

#include <stdio.h>
#include <math.h>

int fattori(int _N);
int main(){
    int numero=0;
    int primo;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<=0);

    while(numero>1){       
        numero=fattori(numero);
    }
    printf("\b ");  // /b cancella un carattere
}
int fattori(int _N){
    int fattore=0;
    int contatore=2;

    while(fattore==0){
        if(_N%contatore==0){
            printf("%d*", contatore);
            _N=_N/contatore;
            fattore=1;
        }
        else{
            contatore++;
        }
    }
    return _N;
}