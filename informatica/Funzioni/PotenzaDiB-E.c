/*Scrivete una funzione avente due parametri interi (passati per valore)b ed e
che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/

#include <stdio.h>

calcola_potenza_B_E(int _B, int _E);

int main(){
    int numeroB=0;
    int numeroE=0;
    int potenza;

    do{
        printf("Inserisci il valore B: ");
        scanf("%d", &numeroB);
    }while (numeroB<0);

    do{
        printf("Inserisci il valore E: ");
        scanf("%d", &numeroE);
    }while (numeroE<0);

        potenza=calcola_potenza_B_E(int _B, int _E);

    printf("la potenza di B per E è uguale a %d", potenza); 
}
calcola_potenza_B_E(int _B, int _E){
    int moltiplicazione=0;

    for(int i=0; i<=_B; i++){ 
        moltiplicazioneB*=_E;
    }
    return moltiplicazione;
}