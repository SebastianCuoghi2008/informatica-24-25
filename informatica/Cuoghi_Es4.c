/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/

#include <stdio.h>
#include <math.h>

int main(){
    int numero;
    float contatore;

    pritnf("inserisci il numero: ");
    scanf("%d", &numero);

    if(numero<20){
        if(numero == 2 || numero == 4 || numero == 8 || numero == 16){
            if(numero == 2){
                contatore=1;
            }
            if(numero == 4){
                contatore=2;
            }
            if(numero == 8){
                contatore=3;
            }
            if(numero == 16){
                contatore=4;
            }
            printf("\n il numero è multiplo di 2");
        }
        else{
            printf("\n il numero non è multiplo di 2");
        }
    }
    else{
        printf("non inserire caratteri che non c'entrano");
    }
    return 0;
}