/*quadrato con dispari*/

#include <stdio.h>

int quadrato(int _N);

int main(){
    int numero=0;
    int dispari=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<=0);

    dispari=quadrato(numero);
    printf("\b ");
    printf("=%d", dispari);
}
int quadrato(int _N){
    int D=0;

    for(int i=1; i<=_N*2; i+=2){
        printf("%d+", i);
        D+=i;
    }
    return D;
}