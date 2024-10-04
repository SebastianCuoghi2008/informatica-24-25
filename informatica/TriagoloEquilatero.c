/*Scrivi un programma che legge in input il valore di tre lati di un triangolo, individua
se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro */

#include <stdio.h> 
int main(){
    float lato1=0;
    float lato2=0;
    float lato3=0;
    float area=0;
    float perimetro=0;

    printf("inserisci il primo lato: ");
    scanf("%f", &l1);
    printf("inserisci il secondo lato: ");
    scanf("%f", &l2);
    printf("inserisci il terzo lato: ");
    scanf("%f", &l3);

    if(l1==l2){
        if(l2==l3){
            printf("il triangolo è equilatero: ");
            perimetro= l1+l2+l3;
            area= sqrt(3)*l1/2*l1/2;
            printf("area è %f, il perimetro è %f", area, perimetro);
        }
        else{
             printf("il triangolo non è equilatero: ");
        }
    }
    else{
        printf("il triangolo non è equilatero: "); 
    }
    return 0;
}