/*chiedi 10 valori e calcola la media */

#include <stdio.h>

int main(){
    int numero=0;
    int somma=0;
    float media=0;

    for(int i=1; i<=10; i++){
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        somma+=numero;
    }
    media=(float)somma/10;
    printf("la media vale %.2f: ", media);
}