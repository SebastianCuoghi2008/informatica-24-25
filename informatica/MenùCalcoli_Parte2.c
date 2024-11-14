/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int scelta;
    int K=0;
    float operazione=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("inserisci la tua scelta, tra 1,2,3,4 per vedere cosa vuoi che prevadano i 2 numeri inseriti: ");

    switch (scelta){
        case 1:
            if(numero1<0){
                numero1*-1;
            }
            if(numero2<0){
                numero2*-1;
            }
            operazione=numero1+numero2;
            printf("\n il risultato è %f", operazione);
            break;
        case 2:
            if(numero1>numero2){
                printf("il primo numero è maggiore");
                operazione=numero1-numero2;
                printf("\n il risultato è %f", operazione);
            }
            else{
                printf("il secondo numero è maggiore");
                operazione=numero2-numero1;
                printf("\n il risultato è %f", operazione);
                }
            break;
        case 3:
            printf("inserisci la cifra K: ");
            scanf("%d", &K);

            if(K-numero1 > K-numero2){
                printf("il secondo numero è il più vicino");
            }
            else if(K-numero1 == numero2){
                printf("tutti i due numeri sono vicini alla cifra K");              
            }
            else{
                printf("il primo numero è il più vicino");
            }
            break;
        case 4:
            if(numero1/numero2 == 0){
                printf("\n %d è il multiplo di %d", numero1, numero2);
            }
            else if(numero2/numero1 == 0){
                printf("\n %d è il mutiplo di %d");
            }
            else{
                printf("\n nessun numero è multiplo tra di loro");
            }
            break;
        default:
            printf("non inserire caratteri che non c'entrano");
            break;
    }
    return 0;
}