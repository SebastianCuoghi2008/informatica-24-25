/*dati due numeri, verificare se sono numeri amicali*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;
    int somma1=0;
    int somma2=0;

    do{
        printf("inserisci due numeri: ");
        scanf("%d %d", &numero1, &numero2);
    }while(numero1<=0 || numero2<=0);

    for(int i=1; i<numero1; i++){
        if(numero1%i==0){
            somma1+=i;
        }
    }
    for(int i=1; i<numero2; i++){
        if(numero2%i==0){
            somma2+=i;
        }
    }
    if(somma1==numero2 && somma2==numero1){
        printf("i numeri sono amicali ");
    }
    else{
        printf("i numeri non sono amicali ");
    }
    return 0;
}