/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica;
una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/

#include <stdio.h>

int main(){
    int N1=0;
    int N2=0;
    int N3=0;

    printf("inserisci il primo valore:");
    scanf("%d", &N1);
    printf("inserisci il secondo valore:");
    scanf("%d", &N2);
    printf("inserisci il terzo valore:");
    scanf("%d", &N3);

    if(N1==N2){
        if(N2==N3){
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