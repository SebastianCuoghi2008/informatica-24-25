/*calcolare il quoziente fra due numeri applicando il metodo delle sottrazioni successive*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;
    int quoziente=0;

    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &numero1);
    }while (numero1<0);
    do{
        printf("Inserisci il secondo valore: ");
        scanf("%d", &numero2);
    }while (numero2<0);
}