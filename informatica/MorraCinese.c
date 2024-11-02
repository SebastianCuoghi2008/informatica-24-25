/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere all’utente
la sua scelta e far generare al computer la sua. Stabilire il vincitore.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int utente;
    int computer;
    

    printf("scegli tra sasso (1), carta(2) e forbice(3) in morra cinese"); 
    printf("inserisci la tua scelta");
    scanf("%d", &utente);
    
    switch (utente){
        case 1:
            printf("\n sasso");
            break;
        case 2:
            printf("\n carta");
            break;
        case 3:
            printf("\n forbice");
            break;
        default:
            printf("non inserire cavolate");
            break;
    }

    scanf("%d &computer");

    switch (computer){
        case 1:
            printf("\n sasso");
            break;
        case 2:
            printf("\n carta");
            break;
        case 3:
            printf("\n forbice");
            break;
        default:
            printf("non inserire cavolate");
            break;
    }
    return 0;
}
        
    






}