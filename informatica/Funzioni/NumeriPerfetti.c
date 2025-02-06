#include <stdio.h>

int SommaDivisori(int _N);

int main(){
    int contatore=0;
    int numero=1;

    while(contatore<10){
        if(numero==SommaDivisori(numero)){
            contatore++;
            printf("%d\n", numero);
        }
        numero++;
    }
}

int SommaDivisori(int _N){
    int i;
    int somma=0;

    for(i=1; i<=_N/2; i++){
        if(_N%i==0)
        somma+=i;

    }
    return somma;
}