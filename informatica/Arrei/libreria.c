/* 
    Sviluppiamo la funzioni
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    float media=0, somma=0;

    for(int i=0; i<dim; i++){
        somma+=vett[i];
    }
    return somma/dim;
}

void caricaVett(int vett[],int dim){
    for(int i=0; i<dim; i++){
        printf("inserisci un valore: ");
        scanf("%d ", &vett[i]);
    }
}

void bubbleSort(int vett[], int dim){
    int temp;
    int flag=0;
    int i=0;
    while(flag==0){
        flag=1;
        for(int j=0; j<dim-1-i; j++){
            if(vett[j]>vett[j+1]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
        i++;
    }
}
void scambioMinMax(int vett[], int dim){
    int min, max, tmp, i_min, i_max;

    min=vett[0];
    max=vett[0];
    for (int i=1; i<dim; i++){
        //calcolo il valore minimo e la sua posizione all'interno dell'array
        if(vett[i]<min){
            min=vett[i]; 
            i_min=i;   
        }
        //calcolo il valore massimo e la sua posizione all'interno dell'array   
        if(vett[i]>max){
            max=vett[i];
            i_max=i;
        }
    }
    //scambio
    vett[i_min]=max;
    vett[i_max]=min;

}