/*Chiedi all'utente di inserire 10 valori numerici e alla fine mostra qual è il maggiore tra i valori inseriti.*/

#include <stdio.h>

int main(){
    int numero=0;
    int max=0; 
    int contatore=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        contatore++;
        if(numero>max || contatore==1)
            max=numero;
    }
    while(contatore<=10);
    
    printf("il valore massimo inserito é %d ",max);
    return 0;
}