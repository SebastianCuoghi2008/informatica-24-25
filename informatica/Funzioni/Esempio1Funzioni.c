/*Realizziamo una funzione che determina e restituisce il valore maggiore tra due numeri*/

#include <stdio.h>

int maggiore(int num1, int num2);
int minore(int num1, int num2);

int main(){
    int n1, n2;
    printf("Inserisci il primo valore: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &n2);
    printf("Il maggiore tra i due è %d", maggiore(n1, n2));

    int m = maggiore(n1, n2);

    return 0;
}

int maggiore(int num1, int num2){
    int max;
    if(num1>num2){
        max = num1;
    } else {
        max = num2;
    }
    return max;
}

int minore(int num1, int num2){
    int min;
    if(num1<num2){
        min = num1;
    } else {
        min = num2;
    }
    return min;
}