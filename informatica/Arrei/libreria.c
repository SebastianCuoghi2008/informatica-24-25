/* 
    Sviluppiamo la funzioni
*/
#include <stdio.h>
#include "libreria.h" //prototipi delle funzioni

void richiediValori(int vett[],int dim){
    int n=0, i=0;

    while(i<dim){
       printf("Inserisci un valore: ");
       scanf("%d", &n);
       if(n%2==0){
        vett[i]=n;
        i++;
       }
    }
    
}
void stampaVett(int vett[],int dim,char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vett[i],sep);
    }
}
void caricaRandom(int vett[],int dim){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vett[i]=rand()%100;
    }    
}
float calcolaMedia(int vett[],int dim){
    float media=0; somma=0;

    for(int i=0; i<dim; i++){
        somma+=vett[i];
    }
    return somma/dim;
}