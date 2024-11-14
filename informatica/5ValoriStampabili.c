/*dati 5 valori stampabili*/

#include <stdio.h>

int main(){
    int numero=0; //5 variabili
    int contatore=0;  //variabile contatore inizializzata a 0

    while(contatore<5){
        printf("\n inserisci un numero: ");
        scanf("%d", &numero);
        contatore++;
        printf("il valore inserito è: %d", numero);
    }
    return 0;
}