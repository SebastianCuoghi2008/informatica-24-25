/*cotruire un vettore di N elementi con valori letti da tastiera*/

#include <stdio.h>
#define MAX 10

int main(){
    int V[MAX];
    int numero=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<=0);

    return 0;
}