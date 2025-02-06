/*Leggi il raggio di una circonferenza e calcola il perimetro e l’area del cerchio che essa delimita.*/

#include <stdio.h>
#include <stdlib.h>

const float PI=3.14;
float calcola_perimetro(float raggio);
float calcola_area(float raggio);

int main(){
    float R, A, P;
    do{
    printf("inserisci un valore: ");
    scanf("%f", &R);
    }while(R<0);
    A=calcola_area(R);
    P=calcola_perimetro(R);
    printf("l'area è %f, il perimetro è %f", A, P);

return 0;
}

float calcola_area(float raggio){
    return raggio*raggio*PI;
}
float calcola_perimetro(float raggio){
    return raggio*2*PI;
}