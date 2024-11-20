/*Leggere una sequenza di numeri. Terminare la lettura qando si incontra un numero dispari  e stampare quanti numeri sono stati letti*/

#include <stdio.h>

int main(){
	int numero=0;
	int contatore=1;
	
	printf("inserisci un numero: ");
	scanf("%d", &numero);
	
	do{	
		printf("inserisci un numero: ");
		scanf("%d", &numero);
		contatore++;		
	}
	while(numero%2==0);
	printf("il dispari è uscito dopo %d tentavi");
	return 0;
}