/*Supponete
che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
-Dollari in Euro;
-Euro in Dollari.
Data
una somma di denaro calcolare il controvalore.*/

#include <stdio.h>

int main(){
    float sommaDenaro=0;
    float sommaConvertita=0;
    int scelta=0;
    const float tasso=1.23;

    printf("scegli tra Dollaro (1) o Euro (2), per come vuoi trasformare la somma di denaro inserita: ");
    scanf("%d", &scelta);
    printf("inserisci il valore che vuoi convertire: ");
    scanf("%f", &sommaDenaro);

    switch (scelta){
        case 1:
            sommaConvertita = sommaDenaro / tasso;
            printf("%f $ = %f €", sommaDenaro, sommaConvertita);
            break;
        case 2:
            sommaConvertita = sommaDenaro / tasso;
            printf("%f € = %f $", sommaDenaro, sommaConvertita);
            break;
        default:
            printf("non inserire lettere o caratteri che non c'entrano");
            break;       
    }
    if(scelta==1){
        sommaConvertita = sommaDenaro / tasso;
        printf("%f $ = %f €", sommaDenaro, sommaConvertita);
    }
    else if(scelta==2){
        sommaConvertita = sommaDenaro / tasso;
        printf("%f € = %f $", sommaDenaro, sommaConvertita);
    }
    else{
        printf("hai scelto un'operazione non valida");
    }
    return 0;
}