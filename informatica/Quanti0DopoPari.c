/*Leggere una sequenza di numeri. Terminare la lettura quando si incontra un numero pari,
comunicare quanti valori uguali a 0 si sono presentati.*/

#include <stdio.h>

int main(){
	int numero=0;
	int contatore=1;
	
	do{
		printf("inserisci un numero");
		scanf("%d", &numero);
		if(numero==0){			
			contatore++;
		}		
	}while(numero%2==1 || numero==0);
	printf("il numero di 0 inseriti è %d", contatore);
}