/*dato un numero N calcolare il suo quadrato sommando i primi numeri N dispari
ES: N=7 7^2=49
1 3 5 7 9 11 13*/

#include <stdio.h>

int main(){
    int numero=0;
    int somma=0;
    int numeroD=1;

    do{
        printf("inserire un numero da elevare alla seconda: ");
        scanf("%d", &numero);
    }while(numero<0);

    for(int i=0; i<numero; i++){
        somma=somma+numeroD;
        printf("%d+", numeroD);
        numeroD=numeroD+2;
    }
    printf("\n%d ^ 2 = %d", numero, somma);
    return 0;
}