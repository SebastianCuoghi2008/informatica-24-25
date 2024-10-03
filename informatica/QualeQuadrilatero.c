/*Scrivi un programma che legge in input il valore di due lati di un quadrilatero,
individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area.*/

#include <stdio.h>
int main(){
    float lato1=0;
    float lato2=0;
    float lato3=0;
    float lato4=0;
    float perimetro=0;
    float area=0;

    printf("inserisci il primo lato: ");
    scnaf("%f", &lato1);
    printf("inserisci il seconda lato: ");
    scnaf("%f", &lato2);
    printf("inserisci il terzo lato: ");
    scnaf("%f", &lato3);
    printf("inserisci il quarto lato altezza: ");
    scnaf("%f", &lato4);
    perimetro=lato1+lato2+lato3+lato4;

    if(lato1)
    
}