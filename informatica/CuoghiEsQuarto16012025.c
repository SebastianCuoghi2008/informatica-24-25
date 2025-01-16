/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;

    printf("inserisci il primo numero: ");
    scanf("%d," &numero1);
    printf("inserisci il secondo numero: ");
    scanf("%d," &numero2);
    return 0;
}