/*data una sequenza di valori, determinare quanti numeri sono perfetti
il programma termina quando il numero perfetto supera una soglia K*/

#include <stdio.h>

int main(){
    int N=0;
    int K=0;
    int somma=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &N);
    }while(N<0);

    do{
        printf("inserisci il valore della soglia: ");
        scanf("%d", &K);
    }while(K<0);

    do{
        for(int i=1; i<N; i++){
            if(N%i==0){
                somma+=i;
            }
        }
        if(somma==N){
            printf("il numero %d è perfetto", N);
        }
        else{
            printf("il numero non è perfetto");
        }
        
    }while();
}
