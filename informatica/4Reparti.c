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
    int reparto;
    float prezzo;
    float sconto;

    printf("scegli un reparto: ");
    scanf("%d", &reparto);
    printf("inserisci il prezzo del prodotto: ");
    scanf("%f", &prezzo);
    
    switch(reparto){
        case 1:
            sconto=0;
            break;
        case 2:
            sconto=(prezzo/100)*3;
            break;
        case 3:
            sconto=(prezzo/100)*2;
            break;
        case 4:
            sconto=(prezzo/100)*5;
            break;
        default:
            printf("il reparto è inesistente");
            sconto=0;
    }
    printf("il prezzo finale è %f", prezzo-sconto);
    return 0;
}