/*Data una sequenza di valori (si termina non appena si inserisce -1) verificare se i divisori dei valori
cadono nell’intervallo [8,38].*/

#include <stdio.h>

int main(){
    int numero=0;
    int divisore=0;

    do{
        printf("inserisci un numero che non sia -1: ");
        scanf("%d", &numero);
        if(numero!=-1){
            printf("i divisori di %d sono\n", numero);
        }
    }while(numero!=-1);

    for(int i=0; i<numero; i++){
        if(numero>8 || numero<38){
            printf("il numero %d ha l'intervallo tra 8 e 38");
        }
        else{
            printf("il numero %d non ha l'intervallo tra 8 e 38");
        }
    }
    return 0;
}
