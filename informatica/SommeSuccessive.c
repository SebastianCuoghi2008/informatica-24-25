/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo
delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/

#include <stdio.h>
int main(){
    int numero1=0;
    int numero2=0;
    int somma=0;    //le variabili sommatorie e contatore vanno inizializzate a 05
    int i=0;

    do
    {
        printf("Inserisci il primo valore: ");
        scanf("%d", &numero1);
    }while (numero1<0);
     do
    {
        printf("Inserisci il secondo valore: ");
        scanf("%d", &numero2);
    }while (numero2<0);
    
    for(int i=0; i<numero1; i++){ 
        somma+=numero2;     //somma=somma+numero2       
    }
    printf("il prodotto tra %d e %d vale: %d", numero1, numero2, somma);
    return 0;
}