/*Dato un numero comunicare il numero di cifre di cui è composto e sommarle; verificare inoltre se la
somma è multiplo di 3 di 5 oppure di 7.*/

#include <stdio.h>

int main(){
	int cifra=0;
	int quoziente=0;
    int resto=0;
	int somma=0;
	
	
	printf("Inserisci delle cifre tra 0 e 1000: ");
	scanf("%d", &cifra);
	quoziente=cifra;

	if(quoziente!=0){
		resto=quoziente%10;
		quoziente=quoziente/10;
		somma=somma + resto;
	}
	if(quoziente!=0){
		resto=quoziente%10;
		quoziente=quoziente/10;
		somma=somma + resto;
    }
	if(quoziente!=0){
		resto=quoziente%10;
		quoziente=quoziente/10;
		somma=somma + resto;
    }
    if(quoziente!=0){
		resto=quoziente%10;
		quoziente=quoziente/10;
		somma=somma + resto;
    }
	if(somma%3==0){
		printf("\nIl numero %d è divisibile per 3", somma);
    }
	else if(somma%5==0 || somma%7==0){
		printf("\nIl numero %d è divisibile per 5", somma);
    }
    else{
		printf("\nIl numero %d è divisibile per 7", somma);
    }
    return 0;

}