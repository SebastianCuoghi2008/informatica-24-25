/*dati dei numeri, sommarli 4 A 4. termina non appena si introduce uno 0*/

#include <stdio.h>

int main(){
    int numero=0;
    int contatore=0;
    int somma=0;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        somma=somma+numero;
        contatore++;
        if(contatore==4 && numero!=0){
            printf("\n la somma è %d \n", somma);
            contatore=0;
            somma=0;
        }
    }while(numero!=0);
    printf("non inserire degli zeri");
    return 0;  
}