/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 8 35 3 8 46 - numeri inseriti: 5.*/

#include <stdio.h>

int main(){
    int numero=0;
    int temp=0;
    int contatore=0;
    int scelta;

    printf("scegli se li vuoi mettere in ordine crescente o decrescente: ");
    scanf("%d", &scelta);

    switch(scelta){
        case 1:
            printf("hai scelto l'ordine crescente:\n");
            do{
                printf("inserisci un numero: ");
                scanf("%d", &numero);
                contatore++;
            }while(numero>0);
            if(numero<numero){
                temp=numero;
                numero=numero;
                numero=temp;
            }
            printf("hai inserito %d numeri", contatore);
            printf("i numeri in senso crescente sono %d", numero);
            break;
        case 2:
            printf("hai scelto l'ordine decrescente:\n");
            do{
            printf("inserisci un numero: ");
                scanf("%d", &numero);
                contatore++;
            }while(numero>0);
            if(numero>numero){
                temp=numero;
                numero=numero;
                numero=temp;
            }
            printf("hai inserito %d numeri", contatore);
            printf("i numeri in senso decrescente sono %d", numero);   
            break;
        default:
        printf("non inserire valori che non c'entrano");
    }
    return 0;     
}