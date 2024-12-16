/*stampa i primi numeri N dispari successivi al numero A
ES: A=5 e N=8*/

#include <stdio.h>

int main(){
    int numero=0;
    int A=0;

    do{
        printf("inserisci il valore A: ");
        scanf("%d", &A);
    }while(A<=0);
    do{
        printf("inserisci un numero per cui vuoi vedere i dispari successivi di A: ");
        scanf("%d", &numero);
    }while(numero<=0);
    
    for(int i=0; i<=numero; i++){
        if(A%2==0){
            A++;
            i++;
            printf("%d  ", A);
        }
        A=A+2;
        printf("%d  ", A);
    }
    return 0;
}