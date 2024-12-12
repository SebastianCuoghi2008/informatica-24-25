/*dati N numeri in input (con N cchiesto all'utente strettamente maggiore di 5), calcolare e mostrare
la somma dei numeri negativi e dei numeri positivi.*/

#include <stdio.h>
int main(){
    int numero=0;
    int valore=0;
    int sommaP=0;
    int sommaN=0;
    
     do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);

    for(int i=0; i<n; i++){
        printf("inserisci un valore: ");
        scanf("%d", &valore);
        if(valore<0){
            sommaN=sommaN+valore
        }
        else{
            sommaP=sommaP+valore
        }
    }
    printf("la somma dei numeri negativi è %d e invce di quelli positivi è %d", sommaN, sommaP);
    return 0;

    