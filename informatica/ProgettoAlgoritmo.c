/*progettare un algoritmo che legga un numero B<A e scriva quante vole A è divisibile per B
ES: A=162 e B=3 A è divisibile per 4 volte per B*/

#include <stdio.h>

int main(){
    int numeroA=0;
    int numeroB=0;
    int contatore=0;
    int temp=0;
    int quoziente=0;
    int resto=0;

    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &numeroA);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &numeroB);
    }while(numeroA<numeroB);

    quoziente=numeroA;
    while(quoziente>numeroB && resto==0){
        if(quoziente%numeroB==0){
            resto=quoziente%numeroB;
            contatore++;
            quoziente=quoziente/numeroB;
        }
    }
    printf("il numero è divisibile per %d volte", contatore);
    return 0;
}
