/*Scrivi un programma in C che chieda il numero di studenti di una classe, quindi per ogni studente viene inserito il voto di 4 materie. Il programma deve mostrare la media per ogni studente.*/

#include <stdio.h>

int main(){
    float media;
    float somma_voti=0;
    float voto;
    const int materie=4;
    int studenti;

    do{
        printf("Inserisci numero studenti: ");
        scanf("%d", &studenti);
    }while(studenti<=0);
    
    for(int j=1; j<=studenti; j++){
        printf("Studente %d\n", j);
        somma_voti = 0;
        for(int i=1; i<=materie; i++){
            do{
                printf("Inserisci voto materia %d", i);
                scanf("%f", &voto);
            }while(voto<2 || voto>10);
            somma_voti+=voto;
        }
        media = somma_voti / materie;
        printf("La media dello studente %d è %.1f\n", j, media);
    }
    
}