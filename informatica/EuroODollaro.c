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
    float Dollaro=1.23;
    float Euro=0,82;
    int scelta;

    printf("inserisci una somma di denaro: ");
    scanf("%f", &sommaDenaro);
    printf("scegli tra Dollaro (1) o Euro (2), per come vuoi trasformare la somma di denaro inserita: ");
    scanf("%d", &scelta);

    switch (scelta){
        case 1:
            printf("Euro a Dollaro");
            sommaDenaro=sommaDenaro*Dollaro;
            printf("lo scampio in Dollaro vale %f, sommaDenaro");
            break;
        case 2:
            printf("Dollaro a Euro");
            sommaDenaro=sommaDenaro*Euro;
            printf("lo scampio in Euro vale %f, sommaDenaro");
            break;
        default:
            printf("non inserire lettere o caratteri che non c'entrano");
            break;       
    }
    return 0;
}