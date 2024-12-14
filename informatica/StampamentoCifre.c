/*dato un numero più cifre stampare
le cifre che compongono il numero*/

#include <stdio.h>

int main(){
    int numero=0;
    int quoziente=0;
    int resto=0;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    quoziente=numero / 10;
    resto=numero % 10;
    printf("la prima cifra è %d", &resto);
    
    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf("la seconda cifra è %d", &resto);

    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf("la terza cifra è %d", &resto);

    return 0;
}