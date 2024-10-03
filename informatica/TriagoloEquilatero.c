/*Scrivi un programma che legge in input il valore di tre lati di un triangolo, individua
se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro */

#include <stdio.h> 
int main(){
    float lato1=0;
    float lato2=0;
    float lato3=0;
    float altezza=0;
    float perimetroE=0;
    float areaE;

    printf("inserisci il primo lato: ");
    scanf("%f", &lato1);
    printf("inserisci il seconda lato: ");
    scanf("%f", &lato2);
    printf("inserisci il terzo lato: ");
    scanf("%f", &lato3);
    printf("inserisci l'altezza");
    scanf("%f", &altezza);
    perimetroE=lato1+lato2+lato3;
    areaE=(lato1*altezza)/2;

    if(areaE == 0){
        printf("il triangolo è equilatero");
    }
    else{
        printf("il triangolo non è equilatero");
    }
    return 0;
}    