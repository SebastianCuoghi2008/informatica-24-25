/*leggere una sequenza di numeri, visualizzarla e determinare
qunati numeri sono stati inseriti, termina non appena arriva a 0*/

#include <stdio.h>

int main(){
    int numero=0;
    int contatore=1;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    while(numero!=0){
        printf("\n il valore inserito è: %d\n", numero);
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        contatore++;
    }
    printf("hai inserito %d numeri", contatore);
    return 0;
}