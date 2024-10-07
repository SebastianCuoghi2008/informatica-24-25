/*stabilire se un numero è didispari controllando
l'ultima cifra meno significativa*/

#include<stdio.h>

int main(){
    int numero=0;
    int cifra=0;

    printf("inserisci un numeo: ");
    scanf("%d", &numero);

    cifra= numero%10;
    if(cifra%2 == 0)
        printf ("il numero %d è pari", numero);
    else
        printf ("il numero %d è dispari", numero);
        
}