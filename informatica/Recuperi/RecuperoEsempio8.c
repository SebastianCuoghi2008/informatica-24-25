/*dati quattro valori, stampare solo i numeri primi*/

#include <stdio.h>

int main(){
    int N;
    int contatore=0;
    int divisore=2;

    for(int i=1; i<=4; i++){
        do{
            printf("inserisci un numero: ");
            scanf("%d", &N);
        }while(N<=0);

        for(int j=2; j<N; j++){
            if(N%j==0){
                contatore++;
            }
        }
        if(contatore!=0){
            printf("%d non è un numero primo\n", N);
        }
        else{
            printf("%d è un numero primo\n", N);
        }
        contatore=0;
    }
    return 0;

}