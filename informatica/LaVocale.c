/*INSERITO UN carattereATTERE DIRE SE E' UNA VOCALE*/

#include <stdio.h>

int main(){
	char carattere;
	
	printf("Inserisci un carattere: ");
	scanf("%c", &carattere);
	printf("Il carattere inserito vale: %c", carattere );
	
	if(carattere=='a' || carattere=='e' || carattere=='i' || carattere=='o' || carattere=='u' || carattere=='A' || carattere=='E' || carattere=='I' || carattere=='O' || carattere=='U'){
		printf("\nIl carattere %c è una vocale.", carattere);
	}
	else{
		printf("\nIl carattere %c non è una vocale.", carattere);
	}
	return 0;
}