/*Chiedi all'utente 4 numeri e mostrali in ordine decrescente. */

#include <stdio.h>

int main(){
    int Na, Nb, Nc, Nd, T;

    printf("inserisci il primo valore:");
    scanf("%d", &Na);
    printf("inserisci il secondo valore:");
    scanf("%d", &Nb);
    printf("inserisci il terzo valore:");
    scanf("%d", &Nc);
    printf("inserisci il quarto valore:");
    scanf("%d", &Nd);

    if(Nb>Na){
        T = Na;
        Na = Nb;
        Nb = T;
    }
    if(Nc>Na){
        T = Na;
        Na = Nc;
        Nc = T;
    }
    if(Nd>Na){
        T = Na;
        Na = Nd;
        Nd = T;
    }
    if(Nc>Nb){
        T = Nb; 
        Nb = Nc;
        Nc = T;
    }
    if(Nd>Nb){
        T = Nb;
        Nb = Nd;
        Nd = T;
    }
    if(Nd>Nc){
        T = Nc;
        Nc = Nd;
        Nd = T;
    }
    printf("i 4 valori in ordine decrescente sono: %d %d %d %d", Na, Nb, Nc, Nd);

    return 0;
}