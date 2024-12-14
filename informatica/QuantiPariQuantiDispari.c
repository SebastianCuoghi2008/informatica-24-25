/*Leggere una sequenza di numeri interi. Terminare la letture quando si incontra un valore pari a zero.
Determinare quanti sono stati i valori pari e i valori dispari.*/

#include <stdio.h>

int main(){
	int numero=0;
	int contatoreP=0;
	int contatoreD=0;
	
	do{
		printf("inserisci un numero: ");
		scanf("%d", &numero);
		if(numero%2==0 && numero!=0){	//lo 0 deve essere considerato come un numero pari
			contatoreP++;
		}
		else{
			contatoreD++;
		}		
	}while(numero!=0);
	printf("il nuemero di valori pari inserito è %d", contatoreP);
	printf("il nuemero di valori dispari inserito è %d", contatoreD);
	return 0;
}