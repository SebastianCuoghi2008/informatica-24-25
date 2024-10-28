/*Scrivi un programma in C che generi un numero casuale compreso tra 1 e 20 e permetta all'utente di indovinarlo
in massimo 5 tentativi. Usa la variabile flag per capire quando viene indovinata la variabile.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randomMax=20;
    int randomMin=1;
    int flag=0;

    int random = rand()%(randomMax - randomMin + 1)+randomMin;

    if(flag==0){
        printf("\n primo tentativo random: %d", random);
    } 
    if(flag==0){
        printf("\n secondo tentativo random: %d", random);
    }    
    if(flag==0){
        printf("\n terzo tentativo random: %d", random);
    }    
    if(flag==0){
        printf("\n quarto tentativo random: %d", random);
    }    
    if(flag==0){
        printf("\n quinto tentativo random: %d", random);
    }
    return 0;     
}    
    
