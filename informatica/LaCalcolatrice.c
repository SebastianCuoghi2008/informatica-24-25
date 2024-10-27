#include <stdio.h>
 
int main(){
    int numero1=0;
    int numero2=0;
    char operazione;
    float risultato;
    int flag=0;

    printf(" inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &numero2);
    printf("quale operazione vuoi fare:");
    scanf(" %c", &operazione);
    switch(operazione){
        case 'a':
                    risultato=numero1+numero2;
                    break;
        case 'm': 
                    risultato=numero1*numero2;
                    break;
        case 's':
                    risultato=numero1-numero2;
                    break;
        case 'd':
                    risultato=(float)numero1/(float)numero2;
                    break;
        default: 
                    flag=1;
                    printf("l'operazione scelta non è disponibile");
    }
    if(flag==0)
                    printf("il risultato della operazione è: %f", risultato);
    return 0;
}