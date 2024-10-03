/*Chiedi all'utente 5 numeri e mostrali in ordine crescente. */

#include <stdio.h>
int main(){
    int Na=0;
    int Nb=0;
    int Nc=0;
    int Nd=0;
    int Ne=0;
    int T=0;

    printf("inserisci il primo valore:");
    scanf("%d", &Na);
    printf("inserisci il secondo valore:");
    scanf("%d", &Nb);
    printf("inserisci il terzo valore:");
    scanf("%d", &Nc);
    printf("inserisci il quarto valore:");
    scanf("%d", &Nd);
    printf("inserisci il quinto valore:");
    scanf("%d", &Ne);

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
    if(Nd<Na){
        T=Na;
        Na=Nd;
        Nd=T;
    }
     if(Ne<Na){
        T=Na;
        Na=Ne;
        Ne=T;
    }
    if(Nc<Nb){
        T=Nb;
        Nb=Nc;
        Nb=T;
    }
    if(Nd<Nb){
        T=Nb;
        Nb=Nd;
        Nd=T;
    }
    if(Ne<Nb){
        T=Nb;
        Nb=Ne;
        Ne=T;
    }
    if(Nd<Nc){
        T=Nc;
        Nc=Nd;
        Nd=T;
    }
    if(Ne<Nc){
        T=Nc;
        Nc=Ne;
        Ne=T;
    }
    if(Ne<Nd){
        T=Nd;
        Nd=Ne;
        Ne=T;
    }
    printf("i numeri ordinati sono %d %d %d %d %d", Na, Nb, Nc, Nd, Ne);

    return 0;
}   
