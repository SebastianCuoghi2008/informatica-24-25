/*esercizio 17 pagina 223:
scrivi un programma che ricerca i primi tre numeri perfetti e li visualizza sullo schermo
Esempio: N=6 divisori=1,2,3 somma=1+2+3=6
6 - 28 - 496*/

#include <stdio.h>

int main(){
    int numero=0;
    int divisore=0;
    int somma=0;
    int D=1;

    for(int i=1; divisore<3; i++){
        while(D<=i/2){  
            if(i%D==0){
                somma+=D;
            }
            D++;
        }
        if(somma==i){
            printf("%d\n", somma);
            divisore++;
        }
        somma=0;
        D=1;
    }
    return 0;
}