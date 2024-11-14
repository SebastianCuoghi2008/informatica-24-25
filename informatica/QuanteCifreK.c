/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>

int main(){
	int numero=0;
	int k=0;
	int contatoreCifre=0;
	int contatoreNumeri=0;
	int r;
    int q;
	
	printf("Inserisci un numero tra 0 e 9999: ");
	scanf("%d", &numero);
	printf("Inserisci la cifra da cercare: ");
	scanf("%d", &k);
	
	q=numero;
	if( numero>=0 && numero<=9999 && k>=0 && k<=9){
		if(q!=0){
			r=q%10;
			q=q/10;
			contatoreCifre++;
			printf("La cifra delle unità è: %d", r);
			if (r==k){
				contatoreNumeri++;
		    }
        }
		else{
			printf("Hai inserito uno 0, il programma termina.");
			contatoreCifre++;
			if(numero==k){
			 contatoreNumeri++;
            }
		}
		if(q!=0){
			r=q%10;
			q=q/10;
			contatoreCifre++;
			printf("\nLa cifra delle decine è: %d", r);
			if(r==k){
				contatoreNumeri++;
            }
		}
		if(q!=0){
			r=q%10;
			q=q/10;
			contatoreCifre++;
			printf("\nLa cifra delle centinaia è: %d", r);
			if(r==k){
				contatoreNumeri++;
            }
		}
		if(q!=0){
			r=q%10;
			q=q/10;
			contatoreCifre++;
			printf("\nLa cifra delle migliaia è: %d", r);
			if(r==k){
				contatoreNumeri++;
            }
		}		
	}
	else{   //nell'else possiamo sviluppare nello specifico se numero o n non era valido
		printf("Hai inserito dei valori non validi..");
	}
	printf("\nIl numero inserito %d è composto da %d cifre e %d compare %d volte", numero, contatoreCifre, k, contatoreNumeri);
}