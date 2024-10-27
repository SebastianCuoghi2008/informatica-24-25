/*Creare una sorta di menù (vedi esempio) tramite dei printf per la scelta dell'operazione da compiere
tra due valori generati casualmente.*/

#include <stdio.h>

int main(){

    char Piatto;

    printf("cosa le piacerebbe ordinare? Inserisci la lettera iniziale del piatto che vuole");
    scanf("%c", &Piatto);

    switch(Piatto){     
        case 'R':
            printf("il Ragù");
            break;
        case 'L':
            printf("le Lasagne");
            break;
        case 'P':
            printf("la Pizza");
            break;
        case 'Z':
            printf("la Zuppa");
            break;
        case 'C':
            printf("la Carne");
            break;
        case 'D':
            printf("il Dolce");
            break;
        default:
            printf("midispiace ma il piatto che vuole non è nel menù");
            break;
    }   
    return 0;
}    
