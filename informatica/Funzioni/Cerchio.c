/*dato il raggio calcolare la circonferenza e l'area del cerchio,
eseguire il passaggio dei parametri per indirizzo
cerchio=2*PI*raggio  PI=3.14    Ac=PI*raggio+raggio*/

#include <stdio.h>
#include <stdlib.h>

const float PI=3.14;
float calcola_circonferenza(float *_R);
float calcola_area(float *_R)

int main(){
    float raggio;
    float circonferenza;
    float area;

    do{
    printf("inserisci un valore di raggio: ");
    scanf("%f", &raggio);
    }while(raggio<0);

    area=calcola_area(*_R);
    circonferenza=calcola_circonferenza(*_R);
    printf("l'area è %f, la circonferenza è %f", area, circonferenza);
    return 0;
}
float calcola_area(float *_R){
    return *_R**_R*PI;
}
float calcola_circonferenza(float *_R){
    return 2*PI**_R;
}
