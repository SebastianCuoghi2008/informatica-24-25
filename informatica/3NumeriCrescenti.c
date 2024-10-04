/*Chiedi all'utente 3 numeri e mostrali in ordine crescente. */

#include <stdio.h>
int main(){
    int Na=0;
    int Nb=0;
    int Nc=0;
    int T=0;

    printf("inserisci il primo valore:");
    scanf("%d", &Na);
    printf("inserisci il secondo valore:");
    scanf("%d", &Nb);
    printf("inserisci il terzo valore:");
    scanf("%d", &Nc);

    if(Nb<Na){
        T=Na;
        Na=Nb;
        Nb=T;
    }
    if(Nc<Na){
        T=Na;
        Na=Nc;
        Nc=T;
    }
    if(Nc<Nb){
        T=Nb;
        Nb=Nc;
        Nc=T;
    }
    printf("i numeri ordinati sono %d %d %d", Na, Nb, Nc);

    return 0;
}