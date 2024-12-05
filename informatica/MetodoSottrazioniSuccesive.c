/*calcolare il quoziente fra due numeri applicando il metodo delle sottrazioni successive*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;
    int quoziente=0;
    int risultato=0;

    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &numero1);
    }while (numero1<=0);
    do{
        printf("Inserisci il secondo numero: ");
        scanf("%d", &numero2);
    }while (numero2<=0);

    if(numero1>numero2){
        quoziente=numero1;
        while(quoziente>=numero2){
            quoziente=quoziente-numero2;
            risultato++;
        }
        printf("il risultato %d ha come resto quoziente %d", risultato, quoziente);
    }
    else{
        quoziente=numero2;
        while(quoziente>=numero1){
            quoziente=quoziente-numero1;
            risultato++;
        }
        printf("il risultato %d ha come resto quoziente %d", risultato, quoziente);
    }
    return 0;  
}