/*Genera un numero casuale compreso tra 10 e 1000 e chiedi all'utente di indovinare il numero finchè non azzecca.
Per ogni numero inserito dai un suggerimento all'utente specificando se il tentativo è minore o maggiore del numero da indovinare.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numeroCasuale=0;
    int numero=0;
    int contatore=0;
    numeroCasuale=random()%991+10;

    while(numeroCasuale!=numero){
        printf("\nprova ad indovinare il numero: ");
        scanf("%d", &numero);
        contatore++;

        if(numeroCasuale<numero)
            printf("\nil numero inserito è maggiore del numero da indovinare");
        else if(numeroCasuale>numero)
            printf("\nil numero inserito è minore del numero da indovinare");
    }
    printf("\nhai indovinato il numero in %d tentativi!", contatore);
    return 0;
}