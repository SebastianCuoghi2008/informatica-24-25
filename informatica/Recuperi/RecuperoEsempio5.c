/*Scrivi un programma in C che permetta di gestire un parcheggio. All'inizio l'utente inserisce il numero di posti disponibili nel parcheggio, quindi per ogni posto chiede all'utente se è libero (valore 0) o occupato(valore 1). Alla fine il programma deve mostrare il numero di posti liberi e occupati nel parcheggio.*/

#include <stdio.h>

int main(){
    int posti_totali=0;
    int posti_liberi=0;
    int posti_occupati=0;
    int libero=0;
    
    do {
        printf("Quanti posti ci sono nel tuo parcheggio? ");
        scanf("%d", &posti_totali);
    }while(posti_totali<=0);

    for(int i = 1; i < posti_totali; i++){
        do{
        printf("Il posto %d è libero(0) o occupato(1)? ", i);
        scanf("%d", &libero);
        }while(libero !=0 && libero !=1);
        if(libero == 0)
            posti_liberi++;
        else
            posti_occupati++;
    }
    printf("I posti occupati sono %d e quelli liberi sono %d", posti_occupati, posti_liberi);
}