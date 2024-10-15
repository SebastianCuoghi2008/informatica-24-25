/*Scrivere un programma che letto due orari in ore,
minuti e secondi restituisce quale orario viene prima*/

#include <stdio.h>

int main(){
	int ore1=0;
    int minuti1=0;
    int secondi1=0;
    int ore2=0;
    int minuti2=0;
    int secondi2=0;
	
	//acquisizione primo orario
	printf("Inserire il primo orario in formato ore, minuti, secondi: ");
	scanf("%d%d%d", &ore1, &minuti1, &secondi1);
	printf("L'orario inserito è: %d,%d',%d''", ore1, minuti1, secondi1);

	//acquisizione secondo orario
	printf("\nInserire il secondo orario in formato ore, minuti, secondi: ");
	scanf("%d%d%d", &ore2, &minuti2, &secondi2);
	printf("L'orario inserito è: %d,%d',%d''", ore2, minuti2, secondi2);

	//controlliamo la validità del primo orario
	if( ore1>0 && ore1<=24 && minuti1>=0 && minuti1<60 && secondi1>=0 && secondi1<60)
		printf("\nIl primo orario è accettabile");
	else
		printf("\nIl primo orario non è accettabile");
		
	//controlliamo la validità del secondo orario
	if( ore2>0 && ore2<=24 && minuti2>=0 && minuti2<60 && secondi2>=0 && secondi2<60)
		printf("\nIl secondo orario è accettabile");
	else
		printf("\nIl secondo orario non è accettabile");	
	
	//controlliamo quale orario viene prima dei due
	if(ore1<ore2)
		printf("\nIl primo orario %d,%d',%d'' viene prima", ore1, minuti1, secondi1);
	else{
		if(ore1==ore2){
			if(minuti1<minuti2)
				printf("\nIl primo orario %d,%d',%d'' viene prima", ore1, minuti1, secondi1);
			else
				if(minuti1==minuti2){
					if(secondi1<secondi2)
						printf("\nIl primo orario %d,%d',%d'' viene prima", ore1, minuti1, secondi1);
					else{
						if(secondi1==secondi2)
							printf("\nGli orari sono uguali");
						else
							printf("\nIl secondo rario %d,%d', %d'' viene prima", ore2, minuti2, secondi2);
					}		
				}
				else
					printf("\nIl secondo rario %d,%d', %d'' viene prima", ore2, minuti2, secondi2);
		}
		else
			printf("\nIl secondo rario %d,%d', %d'' viene prima", ore2, minuti2, secondi2);
	}
    return 0;
}