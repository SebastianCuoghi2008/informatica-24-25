/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere all’utente
la sua scelta e far generare al computer la sua. Stabilire il vincitore.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int utente;
    int computer;
    computer=rand()%3+1;

    printf("scegli tra sasso (1), carta(2) e forbice(3) in morra cinese: "); 
    printf("inserisci la tua scelta: ");
    scanf("%d", &utente);
    
    if(utente==1 || utente==2 || utente==3){
        if(computer==utente){
            printf("pareggio");
        }
        else if(utente==1 && computer==3){
            printf("hai vinto, congratulazioni");
        }
        else if(utente==2 && computer==1){
            printf("hai vinto, congratulazioni");
        }
        else if(utente==3 && computer==2){
            printf("hai vinto, congratulazioni");
        }
        else{
            printf("ha vinto il computer con la fortuna, midispiace");
        }
    }
    else{
        printf("la scelta non è valida, midispiace");
    }
    return 0;
}