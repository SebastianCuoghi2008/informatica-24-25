/*
 * Alice e Bob decidono di sposarsi e di accettare la comunione dei beni. 
 * Realizzare un programma che consenta di riequilibrare i due conti in banca 
 * dei novelli sposi. 
 * Il programma deve chiedere in input:
 * 		- Il saldo del conto di Alice;
 * 		- Il saldo del conto di Bob.
 * Realizzare poi una funzione equilibraConti(contoAlice, contoBob) che 
 * consenta di modificare contemporaneamente il valore del conto di Alice e 
 * quello di Bob.
 * Esempio: 
 *		Input: 		contoAlice = 1000€ 		contoBob = 2000€	 
 * 		Funzione: 	equilibraConti(contoAlice, contoBob)
 * 		Output: 	contoAlice = 1500€		contoBob = 1500€
 */

#include <stdio.h>
void equilibraConti(float *_contoAlice, float *_contoBob);
int main(){
    float contoA, contoB;
    
    do{
        printf("inserisci un valore: ");
        scanf("%f", &contoA);
    }while(contoA<0);

    do{
        printf("inserisci un valore: ");
        scanf("%f", &contoB);
    }while(contoB<0);
    equilibraConti(&contoA, &contoB);
    printf("Alice: %f, Bob: %f", contoA, contoB);
}
void equilibraConti(float *_contoAlice, float *_contoBob){
    float soldi;
    soldi=(*_contoAlice+*_contoBob)/2;
    *_contoAlice=soldi;
    *_contoBob=soldi;
}