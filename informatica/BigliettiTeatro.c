/*Calcola il costo sostenuto dalla scolaresca per andare a teatro sapendo che il biglietto ordinario costa 12 euro,
i 2 docenti accompagnatori hanno lo sconto del 50% e che il numero degli alunni deve essere letto in INPUT*/

#include <stdio.h>

int main(){
    int studenti=0;
    const int docenti=2;
    float costo_totale, costo_docenti;
    const float costo_biglietto=12;

    printf("inserisci il numero di studenti: ");
    scanf("%d",&studenti);

    costo_docenti=docenti*costo_biglietto/2;
    costo_totale=studenti*costo_biglietto+costo_docenti;
    printf("il costo totale è %.2f:)",costo_totale);
    
    return 0;
}