/*dati in input 10 numeri interi, determinare il valore maggiore e quente volte compare.*/

#include <stdio.h>
#include <limits.h>

int main(){
    int numero=0;
    int max=INT_MIN; 
    int contatore=1;

    for(int i=0; i<10; i++){
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        if(numero>=max){
            if(max==numero){
                contatore++;
            }
            else{
                contatore=1;  
            }
            if(numero>max){
                max=numero;
            }    
        }
    }
    printf("il numero più grande è %d e comapre %d volte", max, contatore);
    return 0;
}