/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;
    int somma1=0;
    int somma2=0;
    int i;

    do{
        printf("inserisci due valori: ");
        scanf("%d %d", &numero1, &numero2);
    }while(numero1<=0 || numero2<=0);

    for(int i=1; i<numero1/2; i++){
        if(numero1%i==0){
            somma1+=i;
        }
    }
    for(int i=1; i<numero2/2; i++){
        if(numero2%i==0){
            somma2+=i;
        }
    }
    if(somma1==numero2 && somma2==numero1){
        printf("\n i numeri sono amicali");
    }
    else{
        printf("\n i numeri non sono amicali");
    }
    return 0;
}