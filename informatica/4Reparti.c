/*Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:
1 = nessuno sconto   
2 = sconto 3%  
3 = sconto 2%
4 = sconto 5%
Dati reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/

#include <stdio.h>

int main(){
    float prezzoProdotto=0;
    int scelta;

    printf("inserisci un prezzo di un prodotto: ");
    scanf("%f", &prezzoProdotto);
    printf("scegli un reparto tra 1,2,3,4, in cui fare lo sconto: ");
    scanf("%d", &scelta);

    switch (scelta){
        case 1: 
            printf("nessuno sconto");
            break;
        case 2:
            printf("lo sconto è 3");
            prezzoProdotto=prezzoProdotto/100*3;
            printf("lo sconto vale %f", prezzoProdotto);
            break;
        case 3:
            printf("lo sconto è 2");
            prezzoProdotto=prezzoProdotto/100*2;
            printf("lo sconto vale %f", prezzoProdotto);
            break;
        case 4:
            printf("lo sconto è 5");
            prezzoProdotto=prezzoProdotto/100*5;
            printf("lo sconto vale %f", prezzoProdotto);
            break;
        default:
            printf("non inserisca lettere o caratteri che non c'entrano");
            break;
    }
    return 0;
}

    