/*quadrato con dispari*/

#include <stdio.h>

void quadrato(int *_N, int *_somma);

int main(){
    int numero=0;
    int somma=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }while(numero<=0);

    quadrato(&numero, &somma);
    printf("il quadrato di %d vale: %d", numero, somma);
}
void quadrato(int *_N, int *_somma){
    int dispari=1;

    for(int i=1; i<=*_N; i++){
        printf("%d\t", dispari);
        *_somma+=dispari;
        dispari+=2;
    }
}