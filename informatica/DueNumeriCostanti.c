/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica;
una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;
    int numero3=0;

    printf("inserisci il primo valore:");
    scanf("%d", &numero1);
    printf("inserisci il secondo valore:");
    scanf("%d", &numero2);
    printf("inserisci il terzo valore:");
    scanf("%d", &numero3);

    if(numero1==numero2){
        if(numero2==numero3){
            printf("i primi due valori sono costanti");
        }
        else{
            printf("gli ultimi due valori sono costanti");
        }
    }
    else{
        printf("nessuno dei valori è costante");
    }
    return 0;
}