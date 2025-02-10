/*dato un numero a più cifre, stampare quelle di posizione pari.
Esempio: 5231 stamperà 3 e 5*/

#include <stdio.h>

int main(){
    int numero=0;
    int cifra=0;
    int quoziente=0;

    do{
        printf("inserisci un numero a 4 cifre: ");
        scanf("%d", &numero);
    }while(numero<1000 || numero>99999);

    /* in modo generico ci assicuriamo che N sia positivo
     do{
        printf("inserisci un numero a 4 cifre: ");
        scanf("%d", &numero);
    }while(numero<1000 || numero>99999);
    */

   for(int i=1; i<4; i++){
        cifra=numero%10; //prendiamo il resto della divsione di con N con 10
        numero=numero/10;
        if(i%2==0){
            printf("la cifra di posizione pari è: %d", cifra);
        }
   }
   return 0;
}