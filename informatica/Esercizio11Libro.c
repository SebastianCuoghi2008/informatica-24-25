/*esercizio 11 pagina 247:
scrivi un programma che dati in input N numeri interi e un numero X, determini:
-quanti numeri sono minori di X
-quanti numeri sono uguali di X
-quanti numeri sono maggiori a X
*/

#include <stdio.h>

int main(){
    int valore=0;
    int numero=0;
    int X=0;
    int Min=0;
    int Max=0;
    int Ug=0;

    do{
        printf("inserire quanti valori vuoi: ");
        scanf("%d", &valore);
    }while(valore<0);

    printf("inserisci X: ");
    scanf("%d", &X);

    for(int i=0; i<valore; i++){
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        if(i<X){
            Min++;
        }
        else if(i=X){
            Ug++;
        }
        else{
            Max++;
        }
    }
    printf("sono stai inseriti %d numeri minori di X\n", Min);
    printf("sono stai inseriti %d numeri uguali di X\n", Ug);
    printf("sono stai inseriti %d numeri maggiore di X\n", Max); 
}
