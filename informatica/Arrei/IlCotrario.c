/*inizializzare l'array con multiplidi 2, stamparlo al contrario*/

#include <stdio.h>
#define MAX 10

int main(){
    int V[MAX];
    int j=1;

    for(int i=0; i<MAX; i++){
        V[i]=2*j;
        j++;
    }
    //stampa del vettore
    for(int i=MAX-1; i>=0; i--){
        printf("%d\t", V[i]);
    }
    return 0;
}
