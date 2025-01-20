/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 8 35 3 8 46 - numeri inseriti: 5.*/

#include <stdio.h>

int main(){
    int numero=0;
    int min_max;
    int contatore=0;
    int scelta;

    printf("scegli la sequenza dei numeri tra crescente o decrescente: ");
    scanf("%d", &scelta);

    printf("inserisci il valore: ");
    scanf("%d", &numero);
    min_max-numero;

    while(numero!=0){
        contatore++;
        switch (scelta){
            case 1:
                if(numero>=min_max){
                    min_max=numero;
                    printf("%d \n", min_max);
                }
            break;
            case 2:
                if(numero<=min_max){
                    min_max=numero;
                    printf("%d \n", min_max);
                }
            break;
            default:
                printf("non inserire carattereri che non c'entrano");
            break;         
        }
        printf("\n inserisci un nuovo valore: ");
        scanf("%d", &numero);
    }
    printf("\n sono stati inseriti %d valori", contatore);
    return 0;
}


   