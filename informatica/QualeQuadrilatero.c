/*Scrivi un programma che legge in input il valore di due lati di un quadrilatero,
individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float l1=0;
    float l2=0;
    float area=0;
    float perimetro=0;

    printf("inserisci il valore l1:");
    scanf("%f", &l1);
    printf("inserisci il valore l2:");
    scanf("%f", &l2);

    if (l1 == l2){
        printf("è un quadrato");
    }
    else{
        printf("è un rettangolo");
    }
    area = l1 * l2;
    perimetro = l1+l2+l1+l2; 
    printf("l'area è %f, \n il  perimetro è %f :", area, perimetro);

    return 0;
}