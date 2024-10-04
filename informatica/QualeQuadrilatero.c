/*Scrivi un programma che legge in input il valore di due lati di un quadrilatero,
individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int l1;
    int l2;
    int area;
    int perimitro;
    printf("inserisci il valore l1:");
    scanf("%d", &l1);
    printf("inserisci il valore l2:");
    scanf("%d", &l2);

    if (l1 == l2){
        printf("è un quadrato");
    }
    else{
        printf("è un rettangolo");
    }
    area = l1 * l2;
    perimitro = l1+l2+l1+l2; 
    printf("l'area è %d , \n il  perimetro è %d :", area , perimitro);
}

    
    
}